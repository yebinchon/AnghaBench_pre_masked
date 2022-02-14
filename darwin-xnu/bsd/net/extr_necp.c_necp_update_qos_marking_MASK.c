
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u_int32_t ;
struct necp_route_rule {scalar_t__ default_action; scalar_t__* exception_if_indices; scalar_t__* exception_if_actions; scalar_t__ cellular_action; scalar_t__ wifi_action; scalar_t__ wired_action; scalar_t__ expensive_action; } ;
struct ifnet {scalar_t__ if_index; char* if_xname; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 scalar_t__ FUNC_1 (struct ifnet*) ;
 scalar_t__ FUNC_2 (struct ifnet*) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,char*,char*,int,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct necp_route_rule* FUNC_5 (int *,char*) ;
 int VAR_6 ;

__attribute__((used)) static bool
FUNC_6(struct ifnet *VAR_7, u_int32_t VAR_8)
{
 bool VAR_9 = VAR_0;
 int VAR_10 = 0;
 struct necp_route_rule *VAR_11 = ((void*)0);

 VAR_11 = FUNC_5(&VAR_6, VAR_8);
 if (VAR_11 == ((void*)0)) {
  VAR_9 = VAR_0;
  goto done;
 }

 VAR_9 = (VAR_11->default_action == VAR_3) ? VAR_4 : VAR_0;

 if (VAR_7 == ((void*)0)) {
  goto done;
 }

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (VAR_11->exception_if_indices[VAR_10] == 0) {
   break;
  }
  if (VAR_11->exception_if_actions[VAR_10] != VAR_3) {
   continue;
  }
  if (VAR_11->exception_if_indices[VAR_10] == VAR_7->if_index) {
   VAR_9 = VAR_4;
   if (VAR_5 > 2) {
    FUNC_4(VAR_1, "QoS Marking : Interface match %d for Rule %d Allowed %d",
        VAR_11->exception_if_indices[VAR_10], VAR_8, VAR_9);
   }
   goto done;
  }
 }

 if ((VAR_11->cellular_action == VAR_3 && FUNC_0(VAR_7)) ||
     (VAR_11->wifi_action == VAR_3 && FUNC_2(VAR_7)) ||
     (VAR_11->wired_action == VAR_3 && FUNC_3(VAR_7)) ||
     (VAR_11->expensive_action == VAR_3 && FUNC_1(VAR_7))) {
  VAR_9 = VAR_4;
  if (VAR_5 > 2) {
   FUNC_4(VAR_1, "QoS Marking: C:%d WF:%d W:%d E:%d for Rule %d Allowed %d",
       VAR_11->cellular_action, VAR_11->wifi_action, VAR_11->wired_action,
       VAR_11->expensive_action, VAR_8, VAR_9);
  }
  goto done;
 }
done:
 if (VAR_5 > 1) {
  FUNC_4(VAR_1, "QoS Marking: Rule %d ifp %s Allowed %d",
      VAR_8, VAR_7 ? VAR_7->if_xname : "", VAR_9);
 }
 return (VAR_9);
}
