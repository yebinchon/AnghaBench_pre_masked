
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {size_t max_id; int ** local_table; } ;
typedef TYPE_1__ lwp_objinfo ;
typedef int lwp_obj ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;

lwp_obj* FUNC_2(lwp_objinfo *VAR_0,u32 VAR_1,u32 *VAR_2)
{
 u32 VAR_3;
 lwp_obj *VAR_4 = ((void*)0);

 FUNC_0(VAR_3);
 if(VAR_0->max_id>=VAR_1) {
  if((VAR_4=VAR_0->local_table[VAR_1])!=((void*)0)) {
   *VAR_2 = VAR_3;
   return VAR_4;
  }
 }
 FUNC_1(VAR_3);
 return ((void*)0);
}
