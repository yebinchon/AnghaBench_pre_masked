
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pv_entry_t ;
typedef int ppnum_t ;
typedef scalar_t__ pmap_paddr_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int ** FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int **,int ) ;
 scalar_t__ VAR_2 ;

boolean_t
FUNC_6(
 ppnum_t VAR_3)
{
 pv_entry_t **VAR_4;
 int VAR_5;
 pmap_paddr_t VAR_6 = FUNC_4(VAR_3);

 FUNC_0(VAR_6 != VAR_2);

 if (!FUNC_2(VAR_6))
  return (VAR_0);

 VAR_5 = (int)FUNC_1(VAR_6);
 VAR_4 = FUNC_3(VAR_5);

 return (FUNC_5(VAR_4, VAR_1));
}
