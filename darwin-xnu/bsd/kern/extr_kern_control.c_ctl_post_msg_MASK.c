
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int32_t ;
struct kev_msg {TYPE_1__* dv; void* ctl_id; void* event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct ctl_event_data {TYPE_1__* dv; void* ctl_id; void* event_code; int kev_subclass; int kev_class; int vendor_code; } ;
typedef int ctl_ev_data ;
struct TYPE_2__ {int data_length; struct kev_msg* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kev_msg*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct kev_msg*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(u_int32_t VAR_5, u_int32_t VAR_6)
{
 struct ctl_event_data VAR_7;
 struct kev_msg VAR_8;

 FUNC_2(VAR_4, VAR_3);

 FUNC_0(&VAR_8, sizeof(struct kev_msg));
 VAR_8.vendor_code = VAR_2;

 VAR_8.kev_class = VAR_1;
 VAR_8.kev_subclass = VAR_0;
 VAR_8.event_code = VAR_5;


 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_7.ctl_id = VAR_6;
 VAR_8.dv[0].data_ptr = &VAR_7;
 VAR_8.dv[0].data_length = sizeof(VAR_7);

 VAR_8.dv[1].data_length = 0;

 FUNC_1(&VAR_8);
}
