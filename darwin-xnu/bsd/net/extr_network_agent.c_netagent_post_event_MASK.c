
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef int u_int32_t ;
struct kev_netagent_data {int netagent_uuid; } ;
struct kev_msg {TYPE_1__* dv; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
typedef int event_data ;
typedef int ev_msg ;
struct TYPE_2__ {int data_length; struct kev_netagent_data* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kev_msg*) ;
 int FUNC_1 (struct kev_msg*,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(uuid_t VAR_3, u_int32_t VAR_4, bool VAR_5)
{
 if (VAR_5) {
  FUNC_2();
 }

 struct kev_msg VAR_6;
 FUNC_1(&VAR_6, 0, sizeof(VAR_6));

 struct kev_netagent_data VAR_7;

 VAR_6.vendor_code = VAR_2;
 VAR_6.kev_class = VAR_1;
 VAR_6.kev_subclass = VAR_0;
 VAR_6.event_code = VAR_4;

 FUNC_3(VAR_7.netagent_uuid, VAR_3);
 VAR_6.dv[0].data_ptr = &VAR_7;
 VAR_6.dv[0].data_length = sizeof(VAR_7);

 FUNC_0(&VAR_6);
}
