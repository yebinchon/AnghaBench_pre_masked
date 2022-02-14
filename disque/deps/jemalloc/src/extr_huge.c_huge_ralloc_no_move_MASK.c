
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_2 (void*,size_t,size_t,int) ;
 int FUNC_3 (void*,size_t,size_t) ;
 int FUNC_4 (void*,size_t,size_t,size_t,int) ;
 size_t FUNC_5 (size_t) ;

bool
FUNC_6(void *VAR_1, size_t VAR_2, size_t VAR_3,
    size_t VAR_4, bool VAR_5)
{

 FUNC_1(FUNC_5(VAR_2) == VAR_2);


 if (VAR_2 < VAR_0 || VAR_4 < VAR_0)
  return (1);

 if (FUNC_0(VAR_4) > FUNC_0(VAR_2)) {

  if (!FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5))
   return (0);

  if (VAR_3 < VAR_4 && FUNC_0(VAR_3) >
      FUNC_0(VAR_2) && FUNC_2(VAR_1,
      VAR_2, VAR_3, VAR_5))
   return (0);
 }





 if (FUNC_0(VAR_2) >= FUNC_0(VAR_3)
     && FUNC_0(VAR_2) <= FUNC_0(VAR_4)) {
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5);
  return (0);
 }


 if (FUNC_0(VAR_2) > FUNC_0(VAR_4))
  return (FUNC_3(VAR_1, VAR_2, VAR_4));
 return (1);
}
