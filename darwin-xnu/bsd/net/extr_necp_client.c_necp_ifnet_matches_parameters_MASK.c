
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct TYPE_7__ {int sa; } ;
struct necp_client_parsed_parameters {int valid_fields; int flags; scalar_t__ required_interface_type; scalar_t__* prohibited_interface_types; TYPE_1__* avoided_netagent_types; int * avoided_netagents; TYPE_5__* preferred_netagent_types; int * preferred_netagents; TYPE_4__* prohibited_netagent_types; TYPE_3__* required_netagent_types; int * prohibited_netagents; int * required_netagents; int * prohibited_interfaces; TYPE_2__ local_addr; } ;
struct ifnet {int dummy; } ;
struct TYPE_10__ {int netagent_type; int netagent_domain; } ;
struct TYPE_9__ {int netagent_type; int netagent_domain; } ;
struct TYPE_8__ {int netagent_type; int netagent_domain; } ;
struct TYPE_6__ {int netagent_type; int netagent_domain; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ifnet*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_1 (struct ifnet*,int *,int) ;
 scalar_t__ FUNC_2 (struct ifnet*,int ,int ,int) ;
 int FUNC_3 (struct ifnet*,int *) ;
 scalar_t__ FUNC_4 (struct ifnet*,int ,int) ;
 scalar_t__ FUNC_5 (struct ifnet*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static bool
FUNC_8(struct ifnet *VAR_18,
         struct necp_client_parsed_parameters *VAR_19,
         u_int32_t *VAR_20,
         bool VAR_21)
{
 if (VAR_20) {
  *VAR_20 = 0;
 }

 if (VAR_19->valid_fields & VAR_7) {
  if (!FUNC_3(VAR_18, &VAR_19->local_addr.sa)) {
   return (VAR_0);
  }
 }

 if (VAR_19->valid_fields & VAR_6) {
  if ((VAR_19->flags & VAR_2) &&
   FUNC_0(VAR_18)) {
   return (VAR_0);
  }
 }

 if ((!VAR_21 ||
   !(VAR_19->valid_fields & VAR_6) ||
   !(VAR_19->flags & VAR_1)) &&
     (VAR_19->valid_fields & VAR_16) &&
  !FUNC_5(VAR_18, VAR_19->required_interface_type, VAR_0)) {
  return (VAR_0);
 }

 if (VAR_19->valid_fields & VAR_13) {
  for (int VAR_22 = 0; VAR_22 < VAR_3; VAR_22++) {
   if (VAR_19->prohibited_interface_types[VAR_22] == 0) {
    break;
   }

   if (FUNC_5(VAR_18, VAR_19->prohibited_interface_types[VAR_22], VAR_17)) {
    return (VAR_0);
   }
  }
 }

 if (VAR_19->valid_fields & VAR_12) {
  for (int VAR_23 = 0; VAR_23 < VAR_3; VAR_23++) {
   if (FUNC_6(VAR_19->prohibited_interfaces[VAR_23]) == 0) {
    break;
   }

   if (FUNC_4(VAR_18, VAR_19->prohibited_interfaces[VAR_23], VAR_17)) {
    return (VAR_0);
   }
  }
 }

 if (VAR_19->valid_fields & VAR_14) {
  for (int VAR_24 = 0; VAR_24 < VAR_3; VAR_24++) {
   if (FUNC_7(VAR_19->required_netagents[VAR_24])) {
    break;
   }

   if (!FUNC_1(VAR_18, &VAR_19->required_netagents[VAR_24], VAR_0)) {
    return (VAR_0);
   }
  }
 }

 if (VAR_19->valid_fields & VAR_10) {
  for (int VAR_25 = 0; VAR_25 < VAR_3; VAR_25++) {
   if (FUNC_7(VAR_19->prohibited_netagents[VAR_25])) {
    break;
   }

   if (FUNC_1(VAR_18, &VAR_19->prohibited_netagents[VAR_25], VAR_17)) {
    return (VAR_0);
   }
  }
 }

 if (VAR_19->valid_fields & VAR_15) {
  for (int VAR_26 = 0; VAR_26 < VAR_3; VAR_26++) {
   if (FUNC_6(VAR_19->required_netagent_types[VAR_26].netagent_domain) == 0 &&
    FUNC_6(VAR_19->required_netagent_types[VAR_26].netagent_type) == 0) {
    break;
   }

   if (!FUNC_2(VAR_18, VAR_19->required_netagent_types[VAR_26].netagent_domain, VAR_19->required_netagent_types[VAR_26].netagent_type, VAR_0)) {
    return (VAR_0);
   }
  }
 }

 if (VAR_19->valid_fields & VAR_11) {
  for (int VAR_27 = 0; VAR_27 < VAR_3; VAR_27++) {
   if (FUNC_6(VAR_19->prohibited_netagent_types[VAR_27].netagent_domain) == 0 &&
    FUNC_6(VAR_19->prohibited_netagent_types[VAR_27].netagent_type) == 0) {
    break;
   }

   if (FUNC_2(VAR_18, VAR_19->prohibited_netagent_types[VAR_27].netagent_domain, VAR_19->prohibited_netagent_types[VAR_27].netagent_type, VAR_17)) {
    return (VAR_0);
   }
  }
 }


 if (VAR_20) {
  if (VAR_19->valid_fields & VAR_8) {
   for (int VAR_28 = 0; VAR_28 < VAR_3; VAR_28++) {
    if (FUNC_7(VAR_19->preferred_netagents[VAR_28])) {
     break;
    }

    if (FUNC_1(VAR_18, &VAR_19->preferred_netagents[VAR_28], VAR_17)) {
     (*VAR_20)++;
    }
   }
  }

  if (VAR_19->valid_fields & VAR_9) {
   for (int VAR_29 = 0; VAR_29 < VAR_3; VAR_29++) {
    if (FUNC_6(VAR_19->preferred_netagent_types[VAR_29].netagent_domain) == 0 &&
     FUNC_6(VAR_19->preferred_netagent_types[VAR_29].netagent_type) == 0) {
     break;
    }

    if (FUNC_2(VAR_18, VAR_19->preferred_netagent_types[VAR_29].netagent_domain, VAR_19->preferred_netagent_types[VAR_29].netagent_type, VAR_17)) {
     (*VAR_20)++;
    }
   }
  }

  if (VAR_19->valid_fields & VAR_4) {
   for (int VAR_30 = 0; VAR_30 < VAR_3; VAR_30++) {
    if (FUNC_7(VAR_19->avoided_netagents[VAR_30])) {
     break;
    }

    if (!FUNC_1(VAR_18, &VAR_19->avoided_netagents[VAR_30], VAR_17)) {
     (*VAR_20)++;
    }
   }
  }

  if (VAR_19->valid_fields & VAR_5) {
   for (int VAR_31 = 0; VAR_31 < VAR_3; VAR_31++) {
    if (FUNC_6(VAR_19->avoided_netagent_types[VAR_31].netagent_domain) == 0 &&
     FUNC_6(VAR_19->avoided_netagent_types[VAR_31].netagent_type) == 0) {
     break;
    }

    if (!FUNC_2(VAR_18, VAR_19->avoided_netagent_types[VAR_31].netagent_domain,
              VAR_19->avoided_netagent_types[VAR_31].netagent_type, VAR_17)) {
     (*VAR_20)++;
    }
   }
  }
 }

 return (VAR_17);
}
