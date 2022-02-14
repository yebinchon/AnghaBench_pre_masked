
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_1 (scalar_t__,char*,int*) ;

bool
FUNC_2(Oid VAR_3)
{
 if (!FUNC_0(VAR_3))
 {
  return 0;
 }

 if (VAR_3 >= VAR_0)
 {
  char VAR_4 = '\0';
  bool VAR_5 = 0;

  FUNC_1(VAR_3, &VAR_4, &VAR_5);
  if (VAR_4 == VAR_1 ||
   VAR_4 == VAR_2)
  {
   return 0;
  }
 }

 return 1;
}
