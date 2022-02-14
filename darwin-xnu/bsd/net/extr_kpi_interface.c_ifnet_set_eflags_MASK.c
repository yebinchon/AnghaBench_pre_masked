
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int32_t ;
struct net_event_data {TYPE_1__* dv; int if_unit; int if_family; int if_name; int kev_subclass; int kev_class; int vendor_code; scalar_t__ event_code; } ;
struct kev_msg {TYPE_1__* dv; int if_unit; int if_family; int if_name; int kev_subclass; int kev_class; int vendor_code; scalar_t__ event_code; } ;
typedef TYPE_2__* ifnet_t ;
typedef int ev_msg ;
typedef int ev_data ;
typedef int errno_t ;
struct TYPE_9__ {int if_eflags; int if_unit; int if_family; int if_name; } ;
struct TYPE_8__ {int data_length; struct net_event_data* data_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_event_data*,int) ;
 int FUNC_1 (TYPE_2__*,struct net_event_data*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int*,int*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;

errno_t
FUNC_6(ifnet_t VAR_8, u_int32_t VAR_9, u_int32_t VAR_10)
{
 uint32_t VAR_11;
 struct kev_msg VAR_12;
 struct net_event_data VAR_13;

 if (VAR_8 == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_12, sizeof(VAR_12));
 FUNC_4(VAR_8);



 if (FUNC_2(VAR_8, &VAR_9, &VAR_10) != 0) {
  FUNC_3(VAR_8);
  return (VAR_0);
 }
 VAR_11 = VAR_8->if_eflags;
 VAR_8->if_eflags =
     (VAR_9 & VAR_10) | (VAR_8->if_eflags & ~VAR_10);
 FUNC_3(VAR_8);
 if (VAR_8->if_eflags & VAR_1 &&
     !(VAR_11 & VAR_1)) {
  VAR_12.event_code = VAR_3;






 } else if (VAR_11 & VAR_1 &&
     !(VAR_8->if_eflags & VAR_1))
  VAR_12.event_code = VAR_4;




 if (VAR_12.event_code) {
  FUNC_0(&VAR_13, sizeof(VAR_13));
  VAR_12.vendor_code = VAR_7;
  VAR_12.kev_class = VAR_6;
  VAR_12.kev_subclass = VAR_5;
  FUNC_5(VAR_13.if_name, VAR_8->if_name, VAR_2);
  VAR_13.if_family = VAR_8->if_family;
  VAR_13.if_unit = VAR_8->if_unit;
  VAR_12.dv[0].data_length = sizeof(struct net_event_data);
  VAR_12.dv[0].data_ptr = &VAR_13;
  VAR_12.dv[1].data_length = 0;
  FUNC_1(VAR_8, &VAR_12);
 }

 return (0);
}
