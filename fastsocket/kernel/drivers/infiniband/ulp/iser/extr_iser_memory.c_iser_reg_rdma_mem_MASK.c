
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_13__ {scalar_t__ len; scalar_t__ va; scalar_t__ rkey; scalar_t__ lkey; scalar_t__ is_fmr; } ;
struct iser_regd_buf {TYPE_6__ reg; } ;
struct iser_device {TYPE_2__* mr; struct ib_device* ib_device; } ;
struct iser_data_buf {int dma_nents; scalar_t__ buf; int size; } ;
struct iser_conn {TYPE_5__* page_vec; int fmr_pool; struct iser_device* device; } ;
struct TYPE_10__ {int dlength; } ;
struct TYPE_11__ {TYPE_3__ iscsi_header; } ;
struct iscsi_iser_task {TYPE_4__ desc; struct iser_data_buf* data_copy; struct iser_regd_buf* rdma_regd; struct iser_data_buf* data; TYPE_1__* iser_conn; } ;
struct iscsi_conn {int fmr_unalign_cnt; } ;
struct ib_device {int dummy; } ;
typedef enum iser_data_dir { ____Placeholder_iser_data_dir } iser_data_dir ;
struct TYPE_12__ {int length; scalar_t__* pages; int offset; int data_size; } ;
struct TYPE_9__ {scalar_t__ rkey; scalar_t__ lkey; } ;
struct TYPE_8__ {struct iser_conn* ib_conn; struct iscsi_conn* iscsi_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ib_device*,struct scatterlist*) ;
 scalar_t__ FUNC_1 (struct ib_device*,struct scatterlist*) ;
 int FUNC_2 (struct iser_data_buf*,struct ib_device*) ;
 int FUNC_3 (struct iser_data_buf*,struct ib_device*) ;
 int FUNC_4 (char*,unsigned int,unsigned int,unsigned long,unsigned long) ;
 int FUNC_5 (struct iscsi_iser_task*) ;
 int FUNC_6 (char*,int,unsigned long long,...) ;
 int FUNC_7 (struct iser_data_buf*,TYPE_5__*,struct ib_device*) ;
 int FUNC_8 (struct iser_conn*,TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_9 (struct iscsi_iser_task*,int) ;
 int FUNC_10 (char*,int,int ) ;
 unsigned long long FUNC_11 (int ) ;

int FUNC_12(struct iscsi_iser_task *VAR_2,
        enum iser_data_dir VAR_3)
{
 struct iscsi_conn *VAR_4 = VAR_2->iser_conn->iscsi_conn;
 struct iser_conn *VAR_5 = VAR_2->iser_conn->ib_conn;
 struct iser_device *VAR_6 = VAR_5->device;
 struct ib_device *VAR_7 = VAR_6->ib_device;
 struct iser_data_buf *VAR_8 = &VAR_2->data[VAR_3];
 struct iser_regd_buf *VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 struct scatterlist *VAR_13;

 VAR_9 = &VAR_2->rdma_regd[VAR_3];

 VAR_10 = FUNC_2(VAR_8, VAR_7);
 if (VAR_10 != VAR_8->dma_nents ||
     (!VAR_5->fmr_pool && VAR_8->dma_nents > 1)) {
  VAR_4->fmr_unalign_cnt++;
  FUNC_10("rdma alignment violation (%d/%d aligned) or FMR not supported\n",
     VAR_10, VAR_8->size);
  FUNC_3(VAR_8, VAR_7);


  FUNC_5(VAR_2);



  if (FUNC_9(VAR_2, VAR_3) != 0)
    return -VAR_1;
  VAR_8 = &VAR_2->data_copy[VAR_3];
 }


 if (VAR_8->dma_nents == 1) {
  VAR_13 = (struct scatterlist *)VAR_8->buf;

  VAR_9->reg.lkey = VAR_6->mr->lkey;
  VAR_9->reg.rkey = VAR_6->mr->rkey;
  VAR_9->reg.len = FUNC_1(VAR_7, &VAR_13[0]);
  VAR_9->reg.va = FUNC_0(VAR_7, &VAR_13[0]);
  VAR_9->reg.is_fmr = 0;

  FUNC_4("PHYSICAL Mem.register: lkey: 0x%08X rkey: 0x%08X  "
    "va: 0x%08lX sz: %ld]\n",
    (unsigned int)VAR_9->reg.lkey,
    (unsigned int)VAR_9->reg.rkey,
    (unsigned long)VAR_9->reg.va,
    (unsigned long)VAR_9->reg.len);
 } else {
  FUNC_7(VAR_8, VAR_5->page_vec, VAR_7);
  VAR_11 = FUNC_8(VAR_5, VAR_5->page_vec, &VAR_9->reg);
  if (VAR_11 && VAR_11 != -VAR_0) {
   FUNC_3(VAR_8, VAR_7);
   FUNC_6("mem->dma_nents = %d (dlength = 0x%x)\n",
     VAR_8->dma_nents,
     FUNC_11(VAR_2->desc.iscsi_header.dlength));
   FUNC_6("page_vec: data_size = 0x%x, length = %d, offset = 0x%x\n",
     VAR_5->page_vec->data_size, VAR_5->page_vec->length,
     VAR_5->page_vec->offset);
   for (VAR_12=0 ; VAR_12<VAR_5->page_vec->length ; VAR_12++)
    FUNC_6("page_vec[%d] = 0x%llx\n", VAR_12,
      (unsigned long long) VAR_5->page_vec->pages[VAR_12]);
  }
  if (VAR_11)
   return VAR_11;
 }
 return 0;
}
