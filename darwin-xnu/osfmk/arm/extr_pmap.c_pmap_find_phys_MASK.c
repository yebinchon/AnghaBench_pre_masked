
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ppnum_t ;
typedef scalar_t__ pmap_t ;
typedef int pmap_paddr_t ;
typedef int addr64_t ;
struct TYPE_2__ {scalar_t__ map; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

ppnum_t
FUNC_6(
 pmap_t VAR_3,
 addr64_t VAR_4)
{
 pmap_paddr_t VAR_5=0;

 if (VAR_3 == VAR_1)
  VAR_5 = FUNC_1(VAR_4);
 else if ((FUNC_0()->map) && (VAR_3 == FUNC_5(FUNC_0()->map)))
  VAR_5 = FUNC_2(VAR_4);

 if (VAR_5) return (ppnum_t)(VAR_5 >> VAR_0);

 if (VAR_2) {
  return FUNC_3(VAR_3, VAR_4);
 } else {
  return FUNC_4(VAR_3, VAR_4);
 }
}
