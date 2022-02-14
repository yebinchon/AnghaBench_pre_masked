
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int32_t ;
struct net_event_data {int if_unit; TYPE_1__* dv; int if_family; int * if_name; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kev_msg {int if_unit; TYPE_1__* dv; int if_family; int * if_name; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
typedef TYPE_2__* ifnet_t ;
typedef int errno_t ;
struct TYPE_9__ {scalar_t__ if_unit; int if_family; int if_name; int if_xflags; } ;
struct TYPE_8__ {int data_length; struct net_event_data* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_event_data*,int) ;
 int FUNC_1 (TYPE_2__*,struct net_event_data*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ,int ) ;

errno_t
FUNC_6(ifnet_t VAR_9, u_int32_t VAR_10, u_int32_t VAR_11)
{
 struct kev_msg VAR_12;
 struct net_event_data VAR_13;

 FUNC_0(&VAR_13, sizeof (struct net_event_data));
 FUNC_0(&VAR_12, sizeof (struct kev_msg));

 if (VAR_9 == ((void*)0))
  return (VAR_0);


 if ((VAR_10 & VAR_11) & ~VAR_4)
  return (VAR_0);

 FUNC_3(VAR_9);

 if (VAR_11 & VAR_3) {
  if (VAR_10 & VAR_3)
   VAR_9->if_xflags |= VAR_2;
  else
   VAR_9->if_xflags &= ~VAR_2;
 }

 FUNC_2(VAR_9);

 (void) FUNC_4(VAR_9);


 VAR_12.vendor_code = VAR_8;
 VAR_12.kev_class = VAR_7;
 VAR_12.kev_subclass = VAR_5;

 VAR_12.event_code = VAR_6;
 FUNC_5(&VAR_13.if_name[0], VAR_9->if_name, VAR_1);
 VAR_13.if_family = VAR_9->if_family;
 VAR_13.if_unit = (u_int32_t)VAR_9->if_unit;
 VAR_12.dv[0].data_length = sizeof (struct net_event_data);
 VAR_12.dv[0].data_ptr = &VAR_13;
 VAR_12.dv[1].data_length = 0;
 FUNC_1(VAR_9, &VAR_12);

 return (0);
}
