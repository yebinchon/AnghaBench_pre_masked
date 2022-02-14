
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp2 ;
typedef int UINT ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;

char *FUNC_7(char *VAR_0)
{
 char *VAR_1;
 char *VAR_2;
 char VAR_3[16];
 UINT VAR_4;
 UINT VAR_5, VAR_6;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_5(VAR_0);
 VAR_1 = FUNC_6(VAR_4 * 3 + 2);
 if (VAR_4 == 0)
 {

  FUNC_4(VAR_1, (VAR_4 * 3 + 2), "$");
 }
 else
 {

  VAR_5 = 0;
  for (VAR_6 = 0;VAR_6 < VAR_4;VAR_6++)
  {
   if (FUNC_0(VAR_0[VAR_6]))
   {
    VAR_1[VAR_5++] = VAR_0[VAR_6];
   }
   else
   {
    VAR_1[VAR_5++] = '$';
    FUNC_1(VAR_3, sizeof(VAR_3), "%02X", (UINT)VAR_0[VAR_6]);
    VAR_1[VAR_5++] = VAR_3[0];
    VAR_1[VAR_5++] = VAR_3[1];
   }
  }
 }
 VAR_2 = FUNC_3(FUNC_5(VAR_1) + 1);
 FUNC_4(VAR_2, 0, VAR_1);
 FUNC_2(VAR_1);
 return VAR_2;
}
