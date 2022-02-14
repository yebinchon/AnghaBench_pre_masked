
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef char UCHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;

void FUNC_4(UCHAR *VAR_0, char *VAR_1)
{
 UCHAR *VAR_2;
 UINT VAR_3;
 UINT VAR_4, VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }


 VAR_5 = FUNC_2(VAR_1);
 VAR_3 = VAR_5 * 2;

 VAR_2 = FUNC_3(VAR_3);

 for (VAR_4 = 0;VAR_4 < VAR_5;VAR_4++)
 {
  VAR_2[VAR_4 * 2] = VAR_1[VAR_4];
 }


 FUNC_1(VAR_0, VAR_2, VAR_3);

 FUNC_0(VAR_2);
}
