
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
typedef int uid_t ;
typedef scalar_t__ u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct necp_policy_condition_tc_range {int dummy; } ;
struct necp_policy_condition_agent_type {int dummy; } ;
struct TYPE_6__ {int sa; } ;
struct TYPE_5__ {int sa; } ;
struct necp_policy_condition_addr_range {TYPE_3__ end_address; TYPE_2__ start_address; } ;
struct TYPE_4__ {int sa; } ;
struct necp_policy_condition_addr {TYPE_1__ address; } ;
typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_2 (scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int) ;
 int FUNC_4 (scalar_t__*,int) ;
 scalar_t__* FUNC_5 (scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*) ;

__attribute__((used)) static bool
FUNC_7(u_int8_t *VAR_16, u_int32_t VAR_17, u_int8_t VAR_18)
{
 bool VAR_19 = VAR_0;
 bool VAR_20 = (VAR_18 == VAR_7 ||
          VAR_18 == VAR_8 ||
          VAR_18 == VAR_10 ||
          VAR_18 == VAR_11 ||
          VAR_18 == VAR_12 ||
          VAR_18 == VAR_4 ||
          VAR_18 == VAR_9 ||
          VAR_18 == VAR_5 ||
          VAR_18 == VAR_13 ||
          VAR_18 == VAR_3 ||
          VAR_18 == VAR_6) ? VAR_14 : VAR_0;
 u_int32_t VAR_21 = FUNC_4(VAR_16, VAR_17);
 u_int8_t *VAR_22 = FUNC_5(VAR_16, VAR_17);
 u_int8_t VAR_23 = FUNC_3(VAR_16, VAR_17);
 u_int8_t VAR_24 = FUNC_2(VAR_16, VAR_17);
 switch (VAR_23) {
  case 141:
  case 132: {
   if (!(VAR_24 & VAR_2) &&
    VAR_21 >= sizeof(uuid_t) &&
    VAR_22 != ((void*)0) &&
    !FUNC_6(VAR_22)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 138:
  case 144:
  case 140: {
   if (VAR_21 > 0) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 129: {
   if (VAR_21 >= sizeof(struct necp_policy_condition_tc_range)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 139:
  case 142:
  case 137: {
   if (!(VAR_24 & VAR_2)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 136: {
   if (VAR_21 >= sizeof(u_int16_t)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 133: {
   if (VAR_21 >= sizeof(pid_t) &&
    VAR_22 != ((void*)0) &&
    *((pid_t *)(void *)VAR_22) != 0) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 128: {
   if (VAR_21 >= sizeof(uid_t)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 135:
  case 131: {
   if (!VAR_20 && VAR_21 >= sizeof(struct necp_policy_condition_addr) &&
    FUNC_1(&((struct necp_policy_condition_addr *)(void *)VAR_22)->address.sa)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 134:
  case 130: {
   if (!VAR_20 && VAR_21 >= sizeof(struct necp_policy_condition_addr_range) &&
    FUNC_1(&((struct necp_policy_condition_addr_range *)(void *)VAR_22)->start_address.sa) &&
    FUNC_1(&((struct necp_policy_condition_addr_range *)(void *)VAR_22)->end_address.sa)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  case 143: {
   if (!(VAR_24 & VAR_2) &&
    VAR_21 >= sizeof(struct necp_policy_condition_agent_type)) {
    VAR_19 = VAR_14;
   }
   break;
  }
  default: {
   VAR_19 = VAR_0;
   break;
  }
 }

 if (VAR_15) {
  FUNC_0(VAR_1, "Policy condition type %d, valid %d", VAR_23, VAR_19);
 }

 return (VAR_19);
}
