
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_credit_pool_obj {int base_pool_offset; int * pool_mirror; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_2(
 struct bnx2x_credit_pool_obj *VAR_2,
 int *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 *VAR_3 = -1;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {


  if (!VAR_2->pool_mirror[VAR_5])
   continue;


  for (VAR_4 = VAR_5 * VAR_0, VAR_6 = 0;
        VAR_6 < VAR_0; VAR_4++, VAR_6++)

   if (FUNC_1(VAR_2->pool_mirror, VAR_4)) {

    FUNC_0(VAR_2->pool_mirror, VAR_4);
    *VAR_3 = VAR_2->base_pool_offset + VAR_4;
    return 1;
   }
 }

 return 0;
}
