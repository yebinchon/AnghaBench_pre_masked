
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {unsigned long context; } ;
struct c2wr_nsmr_register_req {void** paddrs; void* addrs_length; void* fbo; void* pbl_depth; void* length; void* pbe_size; int pd_id; void* va; scalar_t__ stag_key; int flags; int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_nsmr_register_rep {int stag_index; } ;
struct c2_vq_req {unsigned long reply_msg; int reply_ready; } ;
struct TYPE_8__ {int lkey; int rkey; } ;
struct c2_mr {TYPE_4__ ibmr; TYPE_3__* pd; } ;
struct TYPE_6__ {int msg_size; } ;
struct c2_dev {TYPE_2__ req_vq; int adapter_handle; } ;
typedef enum c2_acf { ____Placeholder_c2_acf } c2_acf ;
struct TYPE_7__ {int pd_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct c2wr_nsmr_register_rep*) ;
 int FUNC_3 (struct c2wr_nsmr_register_req*,int ) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct c2wr_nsmr_register_req*) ;
 struct c2wr_nsmr_register_req* FUNC_8 (int,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (struct c2_dev*,void*,unsigned long,int,struct c2_vq_req*,int ) ;
 int FUNC_11 (struct c2_dev*,struct c2wr_nsmr_register_rep*) ;
 struct c2_vq_req* FUNC_12 (struct c2_dev*) ;
 int FUNC_13 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_14 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_15 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_16 (struct c2_dev*,union c2wr*) ;
 int FUNC_17 (struct c2_dev*,struct c2_vq_req*) ;

int
FUNC_18(struct c2_dev *VAR_9, u64 *VAR_10,
       int VAR_11, int VAR_12, u32 VAR_13,
       u32 VAR_14, u64 *VAR_15, enum c2_acf VAR_16,
      struct c2_mr *VAR_17)
{
 struct c2_vq_req *VAR_18;
 struct c2wr_nsmr_register_req *VAR_19;
 struct c2wr_nsmr_register_rep *VAR_20;
 u16 VAR_21;
 int VAR_22, VAR_23, VAR_24;
 int VAR_25;

 if (!VAR_15 || !VAR_13 || !VAR_10 || !VAR_12)
  return -VAR_2;




 if (VAR_12 > VAR_0) {
  return -VAR_2;
 }




 VAR_18 = FUNC_12(VAR_9);
 if (!VAR_18)
  return -VAR_3;

 VAR_19 = FUNC_8(VAR_9->req_vq.msg_size, VAR_4);
 if (!VAR_19) {
  VAR_25 = -VAR_3;
  goto bail0;
 }




 FUNC_3(VAR_19, VAR_1);
 VAR_19->hdr.context = (unsigned long) VAR_18;
 VAR_19->rnic_handle = VAR_9->adapter_handle;

 VAR_21 = (VAR_16 | VAR_7 | VAR_6);




 VAR_23 = (VAR_9->req_vq.msg_size -
       sizeof(struct c2wr_nsmr_register_req)) / sizeof(u64);

 if (VAR_12 <= VAR_23) {
  VAR_21 |= VAR_5;
 }
 VAR_19->flags = FUNC_4(VAR_21);
 VAR_19->stag_key = 0;
 VAR_19->va = FUNC_6(*VAR_15);
 VAR_19->pd_id = VAR_17->pd->pd_id;
 VAR_19->pbe_size = FUNC_5(VAR_11);
 VAR_19->length = FUNC_5(VAR_13);
 VAR_19->pbl_depth = FUNC_5(VAR_12);
 VAR_19->fbo = FUNC_5(VAR_14);
 VAR_24 = FUNC_9(VAR_12, VAR_23);
 VAR_19->addrs_length = FUNC_5(VAR_24);




 for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++) {
  VAR_19->paddrs[VAR_22] = FUNC_6(VAR_10[VAR_22]);
 }




 FUNC_14(VAR_9, VAR_18);




 VAR_25 = FUNC_16(VAR_9, (union c2wr *) VAR_19);
 if (VAR_25) {
  FUNC_15(VAR_9, VAR_18);
  goto bail1;
 }




 VAR_25 = FUNC_17(VAR_9, VAR_18);
 if (VAR_25) {
  goto bail1;
 }




 VAR_20 =
     (struct c2wr_nsmr_register_rep *) (unsigned long) (VAR_18->reply_msg);
 if (!VAR_20) {
  VAR_25 = -VAR_3;
  goto bail1;
 }
 if ((VAR_25 = FUNC_2(VAR_20))) {
  goto bail2;
 }

 VAR_17->ibmr.lkey = VAR_17->ibmr.rkey = FUNC_1(VAR_20->stag_index);
 FUNC_11(VAR_9, VAR_20);






 VAR_12 -= VAR_24;
 if (VAR_12) {

  VAR_18->reply_msg = (unsigned long) ((void*)0);
  FUNC_0(&VAR_18->reply_ready, 0);
  VAR_25 = FUNC_10(VAR_9,
     FUNC_5(VAR_17->ibmr.lkey),
     (unsigned long) &VAR_10[VAR_22],
     VAR_12, VAR_18, VAR_8);
  if (VAR_25) {
   goto bail1;
  }
 }

 FUNC_13(VAR_9, VAR_18);
 FUNC_7(VAR_19);

 return VAR_25;

      bail2:
 FUNC_11(VAR_9, VAR_20);
      bail1:
 FUNC_7(VAR_19);
      bail0:
 FUNC_13(VAR_9, VAR_18);
 return VAR_25;
}
