
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct net_event_data {int if_unit; TYPE_1__* dv; int if_family; int * if_name; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
struct kev_msg {int if_unit; TYPE_1__* dv; int if_family; int * if_name; int event_code; int kev_subclass; int kev_class; int vendor_code; } ;
typedef TYPE_2__* ifnet_t ;
typedef int errno_t ;
struct TYPE_8__ {int if_capenable; int if_capabilities; scalar_t__ if_unit; int if_family; int if_name; } ;
struct TYPE_7__ {int data_length; struct net_event_data* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_event_data*,int) ;
 int FUNC_1 (TYPE_2__*,struct net_event_data*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ) ;

errno_t
FUNC_5(ifnet_t VAR_7, u_int32_t VAR_8,
    u_int32_t VAR_9)
{
 errno_t VAR_10 = 0;
 int VAR_11;
 struct kev_msg VAR_12;
 struct net_event_data VAR_13;

 if (VAR_7 == ((void*)0))
  return (VAR_0);

 FUNC_3(VAR_7);
 VAR_11 = (VAR_8 & VAR_9) | (VAR_7->if_capenable & ~VAR_9);
 if ((VAR_11 & ~VAR_1) || (VAR_11 & ~VAR_7->if_capabilities))
  VAR_10 = VAR_0;
 else
  VAR_7->if_capenable = VAR_11;
 FUNC_2(VAR_7);


 FUNC_0(&VAR_13, sizeof (struct net_event_data));
 FUNC_0(&VAR_12, sizeof (struct kev_msg));
 VAR_12.vendor_code = VAR_6;
 VAR_12.kev_class = VAR_5;
 VAR_12.kev_subclass = VAR_4;

 VAR_12.event_code = VAR_3;
 FUNC_4(&VAR_13.if_name[0], VAR_7->if_name, VAR_2);
 VAR_13.if_family = VAR_7->if_family;
 VAR_13.if_unit = (u_int32_t)VAR_7->if_unit;
 VAR_12.dv[0].data_length = sizeof (struct net_event_data);
 VAR_12.dv[0].data_ptr = &VAR_13;
 VAR_12.dv[1].data_length = 0;
 FUNC_1(VAR_7, &VAR_12);

 return (VAR_10);
}
