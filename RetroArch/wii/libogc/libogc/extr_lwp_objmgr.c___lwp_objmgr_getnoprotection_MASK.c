
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {size_t max_id; int ** local_table; } ;
typedef TYPE_1__ lwp_objinfo ;
typedef int lwp_obj ;



lwp_obj* FUNC_0(lwp_objinfo *VAR_0,u32 VAR_1)
{
 lwp_obj *VAR_2 = ((void*)0);

 if(VAR_0->max_id>=VAR_1) {
  if((VAR_2=VAR_0->local_table[VAR_1])!=((void*)0)) return VAR_2;
 }
 return ((void*)0);
}
