
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pv_rooted_entry_t ;
typedef scalar_t__ ppnum_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

boolean_t
FUNC_4(
   ppnum_t VAR_6)
{
 pv_rooted_entry_t VAR_7;
 int VAR_8;
 boolean_t VAR_9;

 FUNC_1(VAR_6 != VAR_4);

 if (!VAR_3)
  return(VAR_2);

 if (VAR_6 == VAR_5)
  return VAR_2;

 VAR_8 = FUNC_3(VAR_6);
 if (!FUNC_0(VAR_8))
  return(VAR_0);
 VAR_7 = FUNC_2(VAR_6);
 VAR_9 = (VAR_7->pmap == VAR_1);
 return(VAR_9);
}
