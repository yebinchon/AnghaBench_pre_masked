
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppnum_t ;
typedef int pp_attr_t ;
typedef scalar_t__ pmap_paddr_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 int* VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;

unsigned int
FUNC_4(
 ppnum_t VAR_9)
{
 pmap_paddr_t VAR_10;
 int VAR_11;
 unsigned int VAR_12;
 pp_attr_t VAR_13;

 VAR_10 = FUNC_3(VAR_9);

 if ((VAR_10 >= VAR_6) && (VAR_10 < VAR_5))
  return FUNC_2(VAR_10);

 if (!VAR_7) {
  if ((VAR_10 >= VAR_3) && (VAR_10 < VAR_3+VAR_4))
   return (VAR_1);
  else
   return (VAR_2);
 }


 if (!FUNC_1(VAR_10))
  return (VAR_2);

 VAR_12 = VAR_1;

 VAR_11 = (int)FUNC_0(VAR_10);

 VAR_13 = VAR_8[VAR_11];
 if (VAR_13 & VAR_0)
  VAR_12 = VAR_13 & VAR_0;
 return VAR_12;
}
