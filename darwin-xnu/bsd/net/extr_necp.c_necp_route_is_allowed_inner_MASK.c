
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct rtentry {struct ifnet* rt_ifp; } ;
struct necp_route_rule {scalar_t__ default_action; scalar_t__* exception_if_indices; scalar_t__* exception_if_actions; scalar_t__ cellular_action; scalar_t__ wifi_action; scalar_t__ wired_action; scalar_t__ expensive_action; } ;
struct TYPE_2__ {struct ifnet* ifp; } ;
struct ifnet {scalar_t__ if_index; TYPE_1__ if_delegated; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,char*,int,int,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct necp_route_rule* FUNC_6 (int *,int) ;
 int FUNC_7 (struct ifnet*,struct ifnet*) ;
 int VAR_12 ;

__attribute__((used)) static bool
FUNC_8(struct rtentry *VAR_13, struct ifnet *VAR_14, u_int32_t VAR_15, u_int32_t *VAR_16)
{
 bool VAR_17 = VAR_10;
 u_int8_t VAR_18 = VAR_9;
 int VAR_19 = 0;
 struct ifnet *VAR_20 = ((void*)0);
 struct necp_route_rule *VAR_21 = ((void*)0);

 VAR_21 = FUNC_6(&VAR_12, VAR_15);
 if (VAR_21 == ((void*)0)) {
  return (VAR_10);
 }

 VAR_17 = (VAR_21->default_action == VAR_7) ? VAR_0 : VAR_10;
 if (VAR_14 == ((void*)0)) {
  VAR_14 = VAR_13->rt_ifp;
 }
 if (VAR_14 == ((void*)0)) {
  if (VAR_11 > 1 && !VAR_17) {
   FUNC_5(VAR_4, "Route Allowed: No interface for route, using default for Rule %d Allowed %d", VAR_15, VAR_17);
  }
  return (VAR_17);
 }

 VAR_20 = VAR_14->if_delegated.ifp;
 for (VAR_19 = 0; VAR_19 < VAR_5; VAR_19++) {
  if (VAR_21->exception_if_indices[VAR_19] == 0) {
   break;
  }
  if (VAR_21->exception_if_indices[VAR_19] == VAR_14->if_index ||
   (VAR_20 != ((void*)0) && VAR_21->exception_if_indices[VAR_19] == VAR_20->if_index)) {
   if (VAR_21->exception_if_actions[VAR_19] == VAR_8) {
    const bool VAR_22 = FUNC_7(VAR_14, VAR_20);
    if (VAR_11 > 1 && VAR_22) {
     FUNC_5(VAR_4, "Route Allowed: Interface match %d for Rule %d Deny LQM Abort",
       VAR_21->exception_if_indices[VAR_19], VAR_15);
    }
    return 0;
   } else if (FUNC_4(VAR_21->exception_if_actions[VAR_19])) {
    if (VAR_11 > 1) {
     FUNC_5(VAR_4, "Route Allowed: Interface match %d for Rule %d Allowed %d", VAR_21->exception_if_indices[VAR_19], VAR_15, ((VAR_21->exception_if_actions[VAR_19] == VAR_7) ? VAR_0 : VAR_10));
    }
    return ((VAR_21->exception_if_actions[VAR_19] == VAR_7) ? VAR_0 : VAR_10);
   }
  }
 }

 if (FUNC_0(VAR_14)) {
  if (VAR_21->cellular_action == VAR_8) {
   if (FUNC_7(VAR_14, VAR_20)) {
    if (VAR_16 != ((void*)0)) {
     *VAR_16 = VAR_1;
    }

    VAR_18 = VAR_7;
   }
  } else if (FUNC_4(VAR_21->cellular_action)) {
   if (VAR_16 != ((void*)0)) {
    *VAR_16 = VAR_1;
   }
   if (VAR_18 == VAR_9 ||
    (VAR_18 == VAR_6 &&
     VAR_21->cellular_action == VAR_7)) {

     VAR_18 = VAR_21->cellular_action;
    }
  }
 }

 if (FUNC_2(VAR_14)) {
  if (VAR_21->wifi_action == VAR_8) {
   if (FUNC_7(VAR_14, VAR_20)) {
    if (VAR_16 != ((void*)0)) {
     *VAR_16 = VAR_2;
    }

    VAR_18 = VAR_7;
   }
  } else if (FUNC_4(VAR_21->wifi_action)) {
   if (VAR_16 != ((void*)0)) {
    *VAR_16 = VAR_2;
   }
   if (VAR_18 == VAR_9 ||
    (VAR_18 == VAR_6 &&
     VAR_21->wifi_action == VAR_7)) {

     VAR_18 = VAR_21->wifi_action;
    }
  }
 }

 if (FUNC_3(VAR_14)) {
  if (VAR_21->wired_action == VAR_8) {
   if (FUNC_7(VAR_14, VAR_20)) {
    if (VAR_16 != ((void*)0)) {
     *VAR_16 = VAR_3;
    }

    VAR_18 = VAR_7;
   }
  } else if (FUNC_4(VAR_21->wired_action)) {
   if (VAR_16 != ((void*)0)) {
    *VAR_16 = VAR_3;
   }
   if (VAR_18 == VAR_9 ||
    (VAR_18 == VAR_6 &&
     VAR_21->wired_action == VAR_7)) {

     VAR_18 = VAR_21->wired_action;
    }
  }
 }

 if (FUNC_1(VAR_14)) {
  if (VAR_21->expensive_action == VAR_8) {
   if (FUNC_7(VAR_14, VAR_20)) {

    VAR_18 = VAR_7;
   }
  } else if (FUNC_4(VAR_21->expensive_action)) {
   if (VAR_18 == VAR_9 ||
    (VAR_18 == VAR_6 &&
     VAR_21->expensive_action == VAR_7)) {

     VAR_18 = VAR_21->expensive_action;
    }
  }
 }

 if (VAR_18 != VAR_9) {
  if (VAR_11 > 1) {
   FUNC_5(VAR_4, "Route Allowed: C:%d WF:%d W:%d E:%d for Rule %d Allowed %d", VAR_21->cellular_action, VAR_21->wifi_action, VAR_21->wired_action, VAR_21->expensive_action, VAR_15, ((VAR_18 == VAR_7) ? VAR_0 : VAR_10));
  }
  return ((VAR_18 == VAR_7) ? VAR_0 : VAR_10);
 }

 if (VAR_11 > 1 && !VAR_17) {
  FUNC_5(VAR_4, "Route Allowed: Using default for Rule %d Allowed %d", VAR_15, VAR_17);
 }
 return (VAR_17);
}
