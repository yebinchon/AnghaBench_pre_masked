
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_remote_node_context {scalar_t__ destination_state; void* user_cookie; int * user_callback; } ;
typedef int * scics_sds_remote_node_context_callback ;
typedef enum sci_remote_node_context_destination_state { ____Placeholder_sci_remote_node_context_destination_state } sci_remote_node_context_destination_state ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(
 struct sci_remote_node_context *VAR_1,
 scics_sds_remote_node_context_callback VAR_2,
 void *VAR_3,
 enum sci_remote_node_context_destination_state VAR_4)
{
 if (VAR_1->destination_state != VAR_0) {
  VAR_1->destination_state = VAR_4;
  if (VAR_2 != ((void*)0)) {
   VAR_1->user_callback = VAR_2;
   VAR_1->user_cookie = VAR_3;
  }
 }
}
