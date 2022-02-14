
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct netpolicy_event_data {int dummy; } ;
struct kev_msg {int event_code; TYPE_1__* dv; int kev_subclass; int kev_class; int vendor_code; } ;
typedef int ev_msg ;
struct TYPE_2__ {int data_length; struct netpolicy_event_data* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kev_msg*,int) ;
 int FUNC_2 (struct kev_msg*) ;

void
FUNC_3(uint32_t VAR_3, struct netpolicy_event_data *VAR_4,
    uint32_t VAR_5)
{
 struct kev_msg VAR_6;






 FUNC_0(VAR_4 != ((void*)0) && VAR_5 >= sizeof (*VAR_4));

 FUNC_1(&VAR_6, sizeof (VAR_6));
 VAR_6.vendor_code = VAR_2;
 VAR_6.kev_class = VAR_1;
 VAR_6.kev_subclass = VAR_0;
 VAR_6.event_code = VAR_3;

 VAR_6.dv[0].data_ptr = VAR_4;
 VAR_6.dv[0].data_length = VAR_5;

 FUNC_2(&VAR_6);
}
