
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ context; } ;
struct c2wr_stag_dealloc_req {int stag_index; int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_stag_dealloc_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_dev {int adapter_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c2wr_stag_dealloc_rep*) ;
 int FUNC_1 (struct c2wr_stag_dealloc_req*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct c2_dev*,struct c2wr_stag_dealloc_rep*) ;
 struct c2_vq_req* FUNC_4 (struct c2_dev*) ;
 int FUNC_5 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_6 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,union c2wr*) ;
 int FUNC_9 (struct c2_dev*,struct c2_vq_req*) ;

int FUNC_10(struct c2_dev *VAR_2, u32 VAR_3)
{
 struct c2_vq_req *VAR_4;
 struct c2wr_stag_dealloc_req VAR_5;
 struct c2wr_stag_dealloc_rep *VAR_6;
 int VAR_7;





 VAR_4 = FUNC_4(VAR_2);
 if (!VAR_4) {
  return -VAR_1;
 }




 FUNC_1(&VAR_5, VAR_0);
 VAR_5.hdr.context = (u64) (unsigned long) VAR_4;
 VAR_5.rnic_handle = VAR_2->adapter_handle;
 VAR_5.stag_index = FUNC_2(VAR_3);




 FUNC_6(VAR_2, VAR_4);




 VAR_7 = FUNC_8(VAR_2, (union c2wr *) & VAR_5);
 if (VAR_7) {
  FUNC_7(VAR_2, VAR_4);
  goto bail0;
 }




 VAR_7 = FUNC_9(VAR_2, VAR_4);
 if (VAR_7) {
  goto bail0;
 }




 VAR_6 = (struct c2wr_stag_dealloc_rep *) (unsigned long) VAR_4->reply_msg;
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto bail0;
 }

 VAR_7 = FUNC_0(VAR_6);

 FUNC_3(VAR_2, VAR_6);
      bail0:
 FUNC_5(VAR_2, VAR_4);
 return VAR_7;
}
