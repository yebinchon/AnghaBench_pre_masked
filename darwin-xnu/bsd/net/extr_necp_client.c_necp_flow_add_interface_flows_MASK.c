
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct necp_client_interface_option {int interface_index; } ;
struct necp_client_flow_registration {int interface_handle; } ;
struct TYPE_2__ {int (* cb ) (int ,int ,int ,int ,int*) ;} ;
struct necp_client_flow {int viable; int necp_flow_flags; int interface_index; TYPE_1__ u; } ;
struct necp_client {size_t interface_option_count; struct necp_client_interface_option* extra_interface_options; struct necp_client_interface_option* interface_options; } ;
typedef int proc_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct necp_client_flow* FUNC_0 (struct necp_client*,struct necp_client_flow_registration*,int ) ;
 void* FUNC_1 (int ,struct necp_client*,struct necp_client_flow*) ;
 int FUNC_2 (int ,int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int ,int*) ;

__attribute__((used)) static void
FUNC_4(proc_t VAR_2,
         struct necp_client *VAR_3,
         struct necp_client_flow_registration *VAR_4,
         bool VAR_5)
{

 for (u_int32_t VAR_6 = 0; VAR_6 < VAR_3->interface_option_count; VAR_6++) {
  if (VAR_6 < VAR_1) {
   struct necp_client_interface_option *VAR_7 = &VAR_3->interface_options[VAR_6];
   struct necp_client_flow *VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_7->interface_index);
   if (VAR_8 != ((void*)0) && VAR_5) {
    VAR_8->viable = FUNC_1(VAR_2, VAR_3, VAR_8);
    if (VAR_8->viable && VAR_8->u.cb) {
     bool VAR_9 = VAR_8->viable;
     VAR_8->u.cb(VAR_4->interface_handle, VAR_0, VAR_8->interface_index, VAR_8->necp_flow_flags, &VAR_9);
     VAR_8->viable = VAR_9;
    }
   }
  } else {
   struct necp_client_interface_option *VAR_10 = &VAR_3->extra_interface_options[VAR_6 - VAR_1];
   struct necp_client_flow *VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_10->interface_index);
   if (VAR_11 != ((void*)0) && VAR_5) {
    VAR_11->viable = FUNC_1(VAR_2, VAR_3, VAR_11);
    if (VAR_11->viable && VAR_11->u.cb) {
     bool VAR_12 = VAR_11->viable;
     VAR_11->u.cb(VAR_4->interface_handle, VAR_0, VAR_11->interface_index, VAR_11->necp_flow_flags, &VAR_12);
     VAR_11->viable = VAR_12;
    }
   }
  }
 }
}
