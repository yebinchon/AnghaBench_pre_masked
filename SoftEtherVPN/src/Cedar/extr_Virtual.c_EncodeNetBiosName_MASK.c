
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef char UCHAR ;


 char* FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;

void FUNC_3(UCHAR *VAR_0, char *VAR_1)
{
 char VAR_2[17];
 UINT VAR_3;
 UINT VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 for (VAR_3 = 0;VAR_3 < 16;VAR_3++)
 {
  VAR_2[VAR_3] = ' ';
 }
 VAR_2[16] = 0;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 > 16)
 {
  VAR_4 = 16;
 }

 FUNC_1(VAR_2, VAR_1, VAR_4);

 VAR_5 = 0;

 VAR_2[15] = 0;

 for (VAR_3 = 0;VAR_3 < 16;VAR_3++)
 {
  char VAR_6 = VAR_2[VAR_3];
  char *VAR_7 = FUNC_0(VAR_6);

  VAR_0[VAR_5++] = VAR_7[0];
  VAR_0[VAR_5++] = VAR_7[1];
 }
}
