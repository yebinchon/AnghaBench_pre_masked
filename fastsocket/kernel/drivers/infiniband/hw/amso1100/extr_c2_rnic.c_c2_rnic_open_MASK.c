
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wr ;
struct TYPE_4__ {unsigned long context; } ;
struct TYPE_5__ {unsigned long user_context; void* port_num; void* flags; TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ req; } ;
union c2wr {TYPE_3__ rnic_open; } ;
struct c2wr_rnic_open_rep {int rnic_handle; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_dev {int adapter_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c2wr_rnic_open_rep*) ;
 int FUNC_1 (union c2wr*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (union c2wr*,int ,int) ;
 int FUNC_4 (struct c2_dev*,struct c2wr_rnic_open_rep*) ;
 struct c2_vq_req* FUNC_5 (struct c2_dev*) ;
 int FUNC_6 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_9 (struct c2_dev*,union c2wr*) ;
 int FUNC_10 (struct c2_dev*,struct c2_vq_req*) ;

__attribute__((used)) static int FUNC_11(struct c2_dev *VAR_3)
{
 struct c2_vq_req *VAR_4;
 union c2wr VAR_5;
 struct c2wr_rnic_open_rep *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 == ((void*)0)) {
  return -VAR_1;
 }

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 FUNC_1(&VAR_5, VAR_0);
 VAR_5.rnic_open.req.hdr.context = (unsigned long) (VAR_4);
 VAR_5.rnic_open.req.flags = FUNC_2(VAR_2);
 VAR_5.rnic_open.req.port_num = FUNC_2(0);
 VAR_5.rnic_open.req.user_context = (unsigned long) VAR_3;

 FUNC_7(VAR_3, VAR_4);

 VAR_7 = FUNC_9(VAR_3, &VAR_5);
 if (VAR_7) {
  FUNC_8(VAR_3, VAR_4);
  goto bail0;
 }

 VAR_7 = FUNC_10(VAR_3, VAR_4);
 if (VAR_7) {
  goto bail0;
 }

 VAR_6 = (struct c2wr_rnic_open_rep *) (unsigned long) (VAR_4->reply_msg);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto bail0;
 }

 if ((VAR_7 = FUNC_0(VAR_6)) != 0) {
  goto bail1;
 }

 VAR_3->adapter_handle = VAR_6->rnic_handle;

      bail1:
 FUNC_4(VAR_3, VAR_6);
      bail0:
 FUNC_6(VAR_3, VAR_4);
 return VAR_7;
}
