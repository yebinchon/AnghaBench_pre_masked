
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rbh_root; } ;
struct vm_map_header {TYPE_1__ rb_head_store; } ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_0( struct vm_map_header *VAR_3 )
{
 if ((void*)VAR_3->rb_head_store.rbh_root == (void*)(int)VAR_1) {
  return VAR_0;
 }
 return VAR_2;
}
