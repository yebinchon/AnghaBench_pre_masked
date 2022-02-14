
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kev_msg {TYPE_1__* dv; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kern_event_msg {scalar_t__ total_size; int * event_data; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
typedef int kev_msg ;
typedef int * ifnet_t ;
typedef int errno_t ;
struct TYPE_2__ {scalar_t__ data_length; int * data_ptr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kev_msg*,int) ;
 int FUNC_1 (int *,struct kev_msg*,int ) ;

errno_t
FUNC_2(ifnet_t VAR_3, struct kern_event_msg *VAR_4)
{
 struct kev_msg VAR_5;
 int VAR_6 = 0;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_5, sizeof (VAR_5));
 VAR_5.vendor_code = VAR_4->vendor_code;
 VAR_5.kev_class = VAR_4->kev_class;
 VAR_5.kev_subclass = VAR_4->kev_subclass;
 VAR_5.event_code = VAR_4->event_code;
 VAR_5.dv[0].data_ptr = &VAR_4->event_data[0];
 VAR_5.dv[0].data_length = VAR_4->total_size - VAR_1;
 VAR_5.dv[1].data_length = 0;

 VAR_6 = FUNC_1(VAR_3, &VAR_5, VAR_2);

 return (VAR_6);
}
