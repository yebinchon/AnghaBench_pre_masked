
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (int ,char const*,void**,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,char*,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (char const*,void*,unsigned int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (void*,void**,unsigned int) ;

boolean_t
FUNC_4(
 const char *VAR_3,
 void *VAR_4,
 unsigned int VAR_5)
{
 DTEntry VAR_6;
 void **VAR_7;
 unsigned int VAR_8;




 if (VAR_2 == FUNC_1(((void*)0), "/defaults", &VAR_6)) {




  if (VAR_2 != FUNC_0(VAR_6, VAR_3, (void **)&VAR_7, &VAR_8))
   return VAR_0;






  if (VAR_8 > VAR_5)
   return VAR_0;




  FUNC_3(VAR_4, VAR_7, VAR_8);
  return VAR_1;
 }




 return FUNC_2(VAR_3, VAR_4, VAR_5) ? VAR_0 : VAR_1;
}
