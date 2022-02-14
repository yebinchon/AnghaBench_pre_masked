
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union c2wr {int dummy; } c2wr ;
typedef void* u64 ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {int sin_port; TYPE_2__ sin_addr; } ;
struct iw_cm_id {void* provider_data; TYPE_3__ local_addr; int device; } ;
struct TYPE_4__ {void* context; } ;
struct c2wr_ep_listen_create_req {void* user_context; int backlog; int local_port; int local_addr; int rnic_handle; TYPE_1__ hdr; } ;
struct c2wr_ep_listen_create_rep {scalar_t__ ep_handle; } ;
struct c2_vq_req {scalar_t__ reply_msg; } ;
struct c2_dev {int adapter_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct c2wr_ep_listen_create_rep*) ;
 int FUNC_1 (struct c2wr_ep_listen_create_req*,int ) ;
 int FUNC_2 (int) ;
 struct c2_dev* FUNC_3 (int ) ;
 int FUNC_4 (struct c2_dev*,struct c2wr_ep_listen_create_rep*) ;
 struct c2_vq_req* FUNC_5 (struct c2_dev*) ;
 int FUNC_6 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_7 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_8 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_9 (struct c2_dev*,union c2wr*) ;
 int FUNC_10 (struct c2_dev*,struct c2_vq_req*) ;

int FUNC_11(struct iw_cm_id *VAR_3, int VAR_4)
{
 struct c2_dev *VAR_5;
 struct c2wr_ep_listen_create_req VAR_6;
 struct c2wr_ep_listen_create_rep *VAR_7;
 struct c2_vq_req *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_3(VAR_3->device);
 if (VAR_5 == ((void*)0))
  return -VAR_1;




 VAR_8 = FUNC_5(VAR_5);
 if (!VAR_8)
  return -VAR_2;




 FUNC_1(&VAR_6, VAR_0);
 VAR_6.hdr.context = (u64) (unsigned long) VAR_8;
 VAR_6.rnic_handle = VAR_5->adapter_handle;
 VAR_6.local_addr = VAR_3->local_addr.sin_addr.s_addr;
 VAR_6.local_port = VAR_3->local_addr.sin_port;
 VAR_6.backlog = FUNC_2(VAR_4);
 VAR_6.user_context = (u64) (unsigned long) VAR_3;




 FUNC_7(VAR_5, VAR_8);




 VAR_9 = FUNC_9(VAR_5, (union c2wr *) & VAR_6);
 if (VAR_9) {
  FUNC_8(VAR_5, VAR_8);
  goto bail0;
 }




 VAR_9 = FUNC_10(VAR_5, VAR_8);
 if (VAR_9)
  goto bail0;




 VAR_7 =
     (struct c2wr_ep_listen_create_rep *) (unsigned long) VAR_8->reply_msg;
 if (!VAR_7) {
  VAR_9 = -VAR_2;
  goto bail1;
 }

 if ((VAR_9 = FUNC_0(VAR_7)) != 0)
  goto bail1;




 VAR_3->provider_data = (void*)(unsigned long) VAR_7->ep_handle;




 FUNC_4(VAR_5, VAR_7);
 FUNC_6(VAR_5, VAR_8);

 return 0;

 bail1:
 FUNC_4(VAR_5, VAR_7);
 bail0:
 FUNC_6(VAR_5, VAR_8);
 return VAR_9;
}
