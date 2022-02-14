
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ep_handle; } ;
struct TYPE_8__ {int timeout_ms; int ep_handle; } ;
struct TYPE_7__ {TYPE_2__ ep_disconnect; TYPE_4__ ep_poll; } ;
struct TYPE_5__ {int retcode; } ;
struct iscsi_uevent {TYPE_3__ u; TYPE_1__ r; } ;
struct iscsi_transport {int (* ep_poll ) (struct iscsi_endpoint*,int ) ;} ;
struct iscsi_endpoint {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct iscsi_transport*,struct iscsi_uevent*,int) ;
 int FUNC_1 (struct iscsi_transport*,int ) ;
 struct iscsi_endpoint* FUNC_2 (int ) ;
 int FUNC_3 (struct iscsi_endpoint*,int ) ;

__attribute__((used)) static int
FUNC_4(struct iscsi_transport *VAR_1,
        struct iscsi_uevent *VAR_2, int VAR_3)
{
 struct iscsi_endpoint *VAR_4;
 int VAR_5 = 0;

 switch (VAR_3) {
 case 130:
 case 131:
  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  if (!VAR_1->ep_poll)
   return -VAR_0;

  VAR_4 = FUNC_2(VAR_2->u.ep_poll.ep_handle);
  if (!VAR_4)
   return -VAR_0;

  VAR_2->r.retcode = VAR_1->ep_poll(VAR_4,
         VAR_2->u.ep_poll.timeout_ms);
  break;
 case 129:
  VAR_5 = FUNC_1(VAR_1,
         VAR_2->u.ep_disconnect.ep_handle);
  break;
 }
 return VAR_5;
}
