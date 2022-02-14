
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char USHORT ;
typedef int UINT ;
typedef int BUF ;


 int FUNC_0 (char*,char*,int) ;
 char FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,int) ;

void FUNC_8(BUF *VAR_0, char *VAR_1, UINT VAR_2)
{
 USHORT VAR_3;
 UINT VAR_4;
 char *VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return;
 }
 if (VAR_1 == ((void*)0))
 {
  VAR_1 = "";
 }

 if (FUNC_5(VAR_1) == 0)
 {
  VAR_3 = 0;
  FUNC_7(VAR_0, &VAR_3, sizeof(USHORT));
  return;
 }

 VAR_4 = FUNC_6(VAR_1);
 VAR_4 = FUNC_3(VAR_4, VAR_2);
 VAR_3 = FUNC_1((USHORT)VAR_4);
 FUNC_7(VAR_0, &VAR_3, sizeof(USHORT));

 VAR_5 = FUNC_4(VAR_4);
 FUNC_0(VAR_5, VAR_1, VAR_4);
 VAR_5[VAR_4 - 1] = 0;
 FUNC_7(VAR_0, VAR_5, VAR_4);

 FUNC_2(VAR_5);
}
