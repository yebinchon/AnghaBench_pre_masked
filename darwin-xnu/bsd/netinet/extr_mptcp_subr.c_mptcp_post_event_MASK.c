
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct kev_msg {TYPE_1__* dv; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kev_mptcp_data {int value; } ;
typedef int event_data ;
typedef int ev_msg ;
struct TYPE_2__ {int data_length; struct kev_mptcp_data* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kev_msg*) ;
 int FUNC_1 (struct kev_msg*,int ,int) ;

__attribute__((used)) static int
FUNC_2(u_int32_t VAR_3, int VAR_4)
{
 struct kev_mptcp_data VAR_5;
 struct kev_msg VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.vendor_code = VAR_2;
 VAR_6.kev_class = VAR_1;
 VAR_6.kev_subclass = VAR_0;
 VAR_6.event_code = VAR_3;

 VAR_5.value = VAR_4;

 VAR_6.dv[0].data_ptr = &VAR_5;
 VAR_6.dv[0].data_length = sizeof(VAR_5);

 return FUNC_0(&VAR_6);
}
