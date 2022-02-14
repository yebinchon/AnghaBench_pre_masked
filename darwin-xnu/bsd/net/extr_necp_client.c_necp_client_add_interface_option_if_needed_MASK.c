
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef scalar_t__ uint32_t ;
typedef size_t u_int32_t ;
struct necp_client_interface_option {scalar_t__ interface_index; int nexus_agent; scalar_t__ interface_generation; } ;
struct necp_client {size_t interface_option_count; struct necp_client_interface_option* extra_interface_options; struct necp_client_interface_option* interface_options; int allow_multiple_flows; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 struct necp_client_interface_option* FUNC_0 (int,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct necp_client *VAR_7,
             uint32_t VAR_8,
             uint32_t VAR_9,
             uuid_t *VAR_10)
{
 if (VAR_8 == VAR_0 ||
  (VAR_7->interface_option_count != 0 && !VAR_7->allow_multiple_flows)) {

  return;
 }

 if (VAR_7->interface_option_count >= VAR_6) {

  return;
 }


 for (u_int32_t VAR_11 = 0; VAR_11 < VAR_7->interface_option_count; VAR_11++) {
  if (VAR_11 < VAR_5) {
   struct necp_client_interface_option *VAR_12 = &VAR_7->interface_options[VAR_11];
   if (VAR_12->interface_index == VAR_8) {
    if (VAR_10 == ((void*)0)) {
     return;
    }
    if (FUNC_1(VAR_12->nexus_agent, *VAR_10) == 0) {
     return;
    }
    if (FUNC_3(VAR_12->nexus_agent)) {
     FUNC_2(VAR_12->nexus_agent, *VAR_10);
     return;
    }

   }
  } else {
   struct necp_client_interface_option *VAR_13 = &VAR_7->extra_interface_options[VAR_11 - VAR_5];
   if (VAR_13->interface_index == VAR_8) {
    if (VAR_10 == ((void*)0)) {
     return;
    }
    if (FUNC_1(VAR_13->nexus_agent, *VAR_10) == 0) {
     return;
    }
    if (FUNC_3(VAR_13->nexus_agent)) {
     FUNC_2(VAR_13->nexus_agent, *VAR_10);
     return;
    }

   }
  }
 }


 if (VAR_7->interface_option_count < VAR_5) {

  struct necp_client_interface_option *VAR_14 = &VAR_7->interface_options[VAR_7->interface_option_count];
  VAR_14->interface_index = VAR_8;
  VAR_14->interface_generation = VAR_9;
  if (VAR_10 != ((void*)0)) {
   FUNC_2(VAR_14->nexus_agent, *VAR_10);
  }
  VAR_7->interface_option_count++;
 } else {

  if (VAR_7->extra_interface_options == ((void*)0)) {
   VAR_7->extra_interface_options = FUNC_0(sizeof(struct necp_client_interface_option) * VAR_4, VAR_1, VAR_2 | VAR_3);
  }
  if (VAR_7->extra_interface_options != ((void*)0)) {
   struct necp_client_interface_option *VAR_15 = &VAR_7->extra_interface_options[VAR_7->interface_option_count - VAR_5];
   VAR_15->interface_index = VAR_8;
   VAR_15->interface_generation = VAR_9;
   if (VAR_10 != ((void*)0)) {
    FUNC_2(VAR_15->nexus_agent, *VAR_10);
   }
   VAR_7->interface_option_count++;
  }
 }
}
