
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef union sockaddr_in_4_6 {int dummy; } sockaddr_in_4_6 ;
typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
struct necp_client_parsed_parameters {int flags; } ;
struct TYPE_8__ {scalar_t__ sa_family; } ;
struct TYPE_12__ {TYPE_1__ sa; } ;
struct TYPE_9__ {scalar_t__ sa_family; } ;
struct TYPE_11__ {TYPE_2__ sa; } ;
struct necp_client_flow {TYPE_5__ remote_addr; TYPE_4__ local_addr; } ;
struct necp_client {TYPE_3__* current_route; scalar_t__ parameters_length; int parameters; } ;
struct TYPE_13__ {int if_eflags; } ;
struct TYPE_10__ {TYPE_6__* rt_ifp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct necp_client*) ;
 int FUNC_2 (struct necp_client*) ;
 int FUNC_3 (int ,int ,struct necp_client_parsed_parameters*) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (TYPE_6__*,union sockaddr_in_4_6*) ;
 int FUNC_5 (TYPE_6__*,union sockaddr_in_4_6*,union sockaddr_in_4_6*,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_6(struct necp_client *VAR_15, struct necp_client_flow *VAR_16, u_int32_t *VAR_17, u_int8_t *VAR_18, u_int8_t *VAR_19)
{
 struct necp_client_parsed_parameters VAR_20;
 int VAR_21 = 0;

 VAR_21 = FUNC_3(VAR_15->parameters,
         (u_int32_t)VAR_15->parameters_length,
         &VAR_20);
 if (VAR_21) {
  FUNC_0(VAR_6, "necp_client_parse_parameters error (%d)", VAR_21);
  return (VAR_21);
 }

 if ((VAR_16->remote_addr.sa.sa_family != VAR_0 &&
   VAR_16->remote_addr.sa.sa_family != VAR_1) ||
  (VAR_16->local_addr.sa.sa_family != VAR_0 &&
   VAR_16->local_addr.sa.sa_family != VAR_1)) {
  return (VAR_2);
 }

 FUNC_1(VAR_15);

 if (VAR_15->current_route == ((void*)0)) {
     VAR_21 = VAR_3;
     goto do_unlock;
 }

 bool VAR_22 = 0;
 do {
  if ((VAR_20.flags & VAR_8) ==
   VAR_8) {
   VAR_22 = 1;
   break;
  }

  if ((VAR_20.flags & VAR_7) ==
   VAR_7) {
   break;
  }

  if (VAR_15->current_route != ((void*)0)) {
   if (VAR_15->current_route->rt_ifp->if_eflags & VAR_5) {
    VAR_22 = 1;
    break;
   }
   if (VAR_15->current_route->rt_ifp->if_eflags & VAR_4) {
    break;
   }
  }

  bool VAR_23 = ((VAR_20.flags & VAR_9) == 0);
  if ((VAR_23 && VAR_13 == 1) ||
   (!VAR_23 && VAR_14 == 1)) {
   VAR_22 = 1;
  }
 } while (0);

 if (VAR_22) {
  if (FUNC_4(VAR_15->current_route->rt_ifp,
       (union sockaddr_in_4_6 *)&VAR_16->local_addr)) {
   *VAR_17 |= VAR_11;
  }
 }

 if ((VAR_20.flags & VAR_10) ==
  VAR_10) {

  if (!FUNC_5(VAR_15->current_route->rt_ifp,
       (union sockaddr_in_4_6 *)&VAR_16->local_addr,
       (union sockaddr_in_4_6 *)&VAR_16->remote_addr,
       VAR_18, VAR_19)) {
   *VAR_17 |= VAR_12;
   *VAR_19 = 0;
  }
 } else {
  *VAR_17 |= VAR_12;
  *VAR_19 = 0;
 }
do_unlock:
 FUNC_2(VAR_15);

 return (VAR_21);
}
