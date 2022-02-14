
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct carm_request {unsigned int tag; int rq; scalar_t__ msg_bucket; void* msg_subtype; void* msg_type; } ;
struct carm_msg_ioctl {void* data_addr; void* handle; scalar_t__ array_id; void* subtype; void* type; } ;
struct carm_host {scalar_t__ state; int lock; int oob_q; } ;
struct carm_array_info {int dummy; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int,struct carm_request*) ;
 struct carm_request* FUNC_5 (struct carm_host*) ;
 int FUNC_6 (int) ;
 struct carm_msg_ioctl* FUNC_7 (struct carm_host*,unsigned int) ;
 scalar_t__ FUNC_8 (struct carm_host*,unsigned int) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct carm_msg_ioctl*,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13 (struct carm_host *VAR_6, unsigned int VAR_7)
{
 struct carm_msg_ioctl *VAR_8;
 unsigned int VAR_9;
 u32 VAR_10;
 dma_addr_t VAR_11;
 struct carm_request *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(VAR_6);
 if (!VAR_12) {
  VAR_13 = -VAR_2;
  goto err_out;
 }

 VAR_9 = VAR_12->tag;

 VAR_8 = FUNC_7(VAR_6, VAR_9);
 VAR_11 = FUNC_8(VAR_6, VAR_9);
 VAR_10 = (u32) (VAR_11 + sizeof(struct carm_array_info));

 VAR_12->msg_type = VAR_1;
 VAR_12->msg_subtype = VAR_0;
 VAR_13 = FUNC_6(sizeof(struct carm_msg_ioctl) +
    sizeof(struct carm_array_info));
 FUNC_0(VAR_13 < 0);
 VAR_12->msg_bucket = (u32) VAR_13;

 FUNC_10(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->type = VAR_1;
 VAR_8->subtype = VAR_0;
 VAR_8->array_id = (u8) VAR_7;
 VAR_8->handle = FUNC_9(FUNC_2(VAR_9));
 VAR_8->data_addr = FUNC_9(VAR_10);

 FUNC_11(&VAR_6->lock);
 FUNC_3(VAR_6->state == VAR_4 ||
        VAR_6->state == VAR_3);
 FUNC_12(&VAR_6->lock);

 FUNC_1("blk_insert_request, tag == %u\n", VAR_9);
 FUNC_4(VAR_6->oob_q, VAR_12->rq, 1, VAR_12);

 return 0;

err_out:
 FUNC_11(&VAR_6->lock);
 VAR_6->state = VAR_5;
 FUNC_12(&VAR_6->lock);
 return VAR_13;
}
