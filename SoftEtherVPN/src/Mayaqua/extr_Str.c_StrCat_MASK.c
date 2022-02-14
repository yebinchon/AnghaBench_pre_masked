
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (char*) ;

UINT FUNC_3(char *VAR_1, UINT VAR_2, char *VAR_3)
{
 UINT VAR_4, VAR_5, VAR_6;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }


 FUNC_1(VAR_0);

 if (VAR_2 == 0)
 {

  VAR_2 = 0x7fffffff;
 }

 VAR_4 = FUNC_2(VAR_1);
 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = VAR_4 + VAR_5 + 1;
 if (VAR_6 > VAR_2)
 {
  if (VAR_5 <= (VAR_6 - VAR_2))
  {
   return 0;
  }
  VAR_5 -= VAR_6 - VAR_2;
 }
 FUNC_0(VAR_1 + VAR_4, VAR_3, VAR_5);
 VAR_1[VAR_4 + VAR_5] = 0;

 return VAR_4 + VAR_5;
}
