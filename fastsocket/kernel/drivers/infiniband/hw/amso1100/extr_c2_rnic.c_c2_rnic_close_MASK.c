
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wr ;
struct TYPE_4__ {unsigned long context; } ;
struct TYPE_5__ {scalar_t__ rnic_handle; TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ req; } ;
union c2wr {TYPE_3__ rnic_close; } ;
struct c2wr_rnic_close_rep {int dummy; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_dev {scalar_t__ adapter_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct c2wr_rnic_close_rep*) ;
 int FUNC_1 (union c2wr*,int ) ;
 int FUNC_2 (union c2wr*,int ,int) ;
 int FUNC_3 (struct c2_dev*,struct c2wr_rnic_close_rep*) ;
 struct c2_vq_req* FUNC_4 (struct c2_dev*) ;
 int FUNC_5 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_6 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,union c2wr*) ;
 int FUNC_9 (struct c2_dev*,struct c2_vq_req*) ;

__attribute__((used)) static int FUNC_10(struct c2_dev *VAR_2)
{
 struct c2_vq_req *VAR_3;
 union c2wr VAR_4;
 struct c2wr_rnic_close_rep *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 == ((void*)0)) {
  return -VAR_1;
 }

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 FUNC_1(&VAR_4, VAR_0);
 VAR_4.rnic_close.req.hdr.context = (unsigned long) VAR_3;
 VAR_4.rnic_close.req.rnic_handle = VAR_2->adapter_handle;

 FUNC_6(VAR_2, VAR_3);

 VAR_6 = FUNC_8(VAR_2, &VAR_4);
 if (VAR_6) {
  FUNC_7(VAR_2, VAR_3);
  goto bail0;
 }

 VAR_6 = FUNC_9(VAR_2, VAR_3);
 if (VAR_6) {
  goto bail0;
 }

 VAR_5 = (struct c2wr_rnic_close_rep *) (unsigned long) (VAR_3->reply_msg);
 if (!VAR_5) {
  VAR_6 = -VAR_1;
  goto bail0;
 }

 if ((VAR_6 = FUNC_0(VAR_5)) != 0) {
  goto bail1;
 }

 VAR_2->adapter_handle = 0;

      bail1:
 FUNC_3(VAR_2, VAR_5);
      bail0:
 FUNC_5(VAR_2, VAR_3);
 return VAR_6;
}
