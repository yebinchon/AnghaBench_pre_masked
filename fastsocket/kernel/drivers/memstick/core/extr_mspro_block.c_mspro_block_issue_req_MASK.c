
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct mspro_param_register {int data_address; scalar_t__ tpc_param; int data_count; int system; } ;
struct mspro_block_data {unsigned int page_size; scalar_t__ data_dir; TYPE_1__* block_req; int queue; int mrq_handler; int transfer_cmd; int system; int seg_count; int req_sg; scalar_t__ current_seg; scalar_t__ current_page; } ;
struct memstick_dev {int dev; int host; int current_mrq; int next_request; } ;
typedef int sector_t ;
typedef int param ;
struct TYPE_7__ {int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 unsigned int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 struct mspro_block_data* FUNC_9 (struct memstick_dev*) ;
 int FUNC_10 (int *,int ,struct mspro_param_register*,int) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int,unsigned int) ;

__attribute__((used)) static int FUNC_14(struct memstick_dev *VAR_8, int VAR_9)
{
 struct mspro_block_data *VAR_10 = FUNC_9(VAR_8);
 sector_t VAR_11;
 unsigned int VAR_12;
 struct mspro_param_register VAR_13;

try_again:
 while (VAR_9) {
  VAR_10->current_page = 0;
  VAR_10->current_seg = 0;
  VAR_10->seg_count = FUNC_4(VAR_10->block_req->q,
            VAR_10->block_req,
            VAR_10->req_sg);

  if (!VAR_10->seg_count) {
   VAR_9 = FUNC_0(VAR_10->block_req, -VAR_1);
   continue;
  }

  VAR_11 = FUNC_5(VAR_10->block_req) << 9;
  FUNC_13(VAR_11, VAR_10->page_size);

  VAR_12 = FUNC_3(VAR_10->block_req);
  VAR_12 /= VAR_10->page_size;

  VAR_13.system = VAR_10->system;
  VAR_13.data_count = FUNC_6(VAR_12);
  VAR_13.data_address = FUNC_7((uint32_t)VAR_11);
  VAR_13.tpc_param = 0;

  VAR_10->data_dir = FUNC_12(VAR_10->block_req);
  VAR_10->transfer_cmd = VAR_10->data_dir == VAR_5
        ? VAR_2
        : VAR_3;

  FUNC_8(&VAR_8->dev, "data transfer: cmd %x, "
   "lba %x, count %x\n", VAR_10->transfer_cmd,
   FUNC_1(VAR_13.data_address), VAR_12);

  VAR_8->next_request = VAR_6;
  VAR_10->mrq_handler = VAR_7;
  FUNC_10(&VAR_8->current_mrq, VAR_4,
      &VAR_13, sizeof(VAR_13));
  FUNC_11(VAR_8->host);
  return 0;
 }

 FUNC_8(&VAR_8->dev, "blk_fetch\n");
 VAR_10->block_req = FUNC_2(VAR_10->queue);
 if (!VAR_10->block_req) {
  FUNC_8(&VAR_8->dev, "issue end\n");
  return -VAR_0;
 }

 FUNC_8(&VAR_8->dev, "trying again\n");
 VAR_9 = 1;
 goto try_again;
}
