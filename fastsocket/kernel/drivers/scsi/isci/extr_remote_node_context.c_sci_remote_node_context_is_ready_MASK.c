
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ current_state_id; } ;
struct sci_remote_node_context {TYPE_1__ sm; } ;


 scalar_t__ VAR_0 ;

bool FUNC_0(
 struct sci_remote_node_context *VAR_1)
{
 u32 VAR_2 = VAR_1->sm.current_state_id;

 if (VAR_2 == VAR_0) {
  return 1;
 }

 return 0;
}
