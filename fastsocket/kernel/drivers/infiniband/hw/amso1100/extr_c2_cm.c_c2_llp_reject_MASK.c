
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef int u8 ;
typedef scalar_t__ u32 ;
struct iw_cm_id {scalar_t__ provider_data; int device; } ;
struct TYPE_2__ {unsigned long context; } ;
struct c2wr_cr_reject_req {scalar_t__ ep_handle; int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_cr_reject_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_dev {int adapter_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c2wr_cr_reject_rep*) ;
 int FUNC_1 (struct c2wr_cr_reject_req*,int ) ;
 struct c2_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct c2_dev*,struct c2wr_cr_reject_rep*) ;
 struct c2_vq_req* FUNC_4 (struct c2_dev*) ;
 int FUNC_5 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_6 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,union c2wr*) ;
 int FUNC_9 (struct c2_dev*,struct c2_vq_req*) ;

int FUNC_10(struct iw_cm_id *VAR_2, const void *VAR_3, u8 VAR_4)
{
 struct c2_dev *VAR_5;
 struct c2wr_cr_reject_req VAR_6;
 struct c2_vq_req *VAR_7;
 struct c2wr_cr_reject_rep *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_2(VAR_2->device);




 VAR_7 = FUNC_4(VAR_5);
 if (!VAR_7)
  return -VAR_1;




 FUNC_1(&VAR_6, VAR_0);
 VAR_6.hdr.context = (unsigned long) VAR_7;
 VAR_6.rnic_handle = VAR_5->adapter_handle;
 VAR_6.ep_handle = (u32) (unsigned long) VAR_2->provider_data;




 FUNC_6(VAR_5, VAR_7);




 VAR_9 = FUNC_8(VAR_5, (union c2wr *) & VAR_6);
 if (VAR_9) {
  FUNC_7(VAR_5, VAR_7);
  goto bail0;
 }




 VAR_9 = FUNC_9(VAR_5, VAR_7);
 if (VAR_9)
  goto bail0;




 VAR_8 = (struct c2wr_cr_reject_rep *) (unsigned long)
  VAR_7->reply_msg;
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  goto bail0;
 }
 VAR_9 = FUNC_0(VAR_8);



 FUNC_3(VAR_5, VAR_8);

 bail0:
 FUNC_5(VAR_5, VAR_7);
 return VAR_9;
}
