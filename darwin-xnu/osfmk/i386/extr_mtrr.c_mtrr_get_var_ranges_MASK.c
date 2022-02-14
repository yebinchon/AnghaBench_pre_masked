
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int refcnt; void* base; } ;
typedef TYPE_1__ mtrr_var_range_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(mtrr_var_range_t * VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1[VAR_3].base = FUNC_2(FUNC_0(VAR_3));
  VAR_1[VAR_3].mask = FUNC_2(FUNC_1(VAR_3));


  if (VAR_1[VAR_3].mask & VAR_0)
   VAR_1[VAR_3].refcnt = 1;
  else
   VAR_1[VAR_3].refcnt = 0;
 }
}
