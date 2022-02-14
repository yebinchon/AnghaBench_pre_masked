
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct kev_msg {TYPE_1__* dv; int event_code; int kev_subclass; int kev_class; int vendor_code; int req_pid; int port; } ;
struct kev_in_portinuse {TYPE_1__* dv; int event_code; int kev_subclass; int kev_class; int vendor_code; int req_pid; int port; } ;
struct TYPE_2__ {int data_length; struct kev_msg* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kev_msg*,int) ;
 int FUNC_1 (int *,struct kev_msg*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(u_int16_t VAR_4)
{





 struct kev_msg VAR_5;
 struct kev_in_portinuse VAR_6;

 FUNC_0(&VAR_6, sizeof (struct kev_in_portinuse));
 FUNC_0(&VAR_5, sizeof (struct kev_msg));
 VAR_6.port = FUNC_2(VAR_4);
 VAR_6.req_pid = FUNC_3();
 VAR_5.vendor_code = VAR_3;
 VAR_5.kev_class = VAR_2;
 VAR_5.kev_subclass = VAR_1;
 VAR_5.event_code = VAR_0;
 VAR_5.dv[0].data_ptr = &VAR_6;
 VAR_5.dv[0].data_length = sizeof (struct kev_in_portinuse);
 VAR_5.dv[1].data_length = 0;
 FUNC_1(((void*)0), &VAR_5);
}
