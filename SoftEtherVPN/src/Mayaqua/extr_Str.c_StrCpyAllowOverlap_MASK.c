
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

UINT FUNC_3(char *VAR_1, UINT VAR_2, char *VAR_3)
{
 UINT VAR_4;

 if (VAR_1 == VAR_3)
 {
  return FUNC_2(VAR_3);
 }
 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  if (VAR_3 == ((void*)0) && VAR_1 != ((void*)0))
  {
   if (VAR_2 >= 1)
   {
    VAR_1[0] = '\0';
   }
  }
  return 0;
 }
 if (VAR_2 == 1)
 {
  VAR_1[0] = '\0';
  return 0;
 }
 if (VAR_2 == 0)
 {

  VAR_2 = 0x7fffffff;
 }


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 <= (VAR_2 - 1))
 {
  FUNC_1(VAR_1, VAR_3, VAR_4 + 1);
 }
 else
 {
  VAR_4 = VAR_2 - 1;
  FUNC_1(VAR_1, VAR_3, VAR_4);
  VAR_1[VAR_4] = '\0';
 }


 FUNC_0(VAR_0);

 return VAR_4;
}
