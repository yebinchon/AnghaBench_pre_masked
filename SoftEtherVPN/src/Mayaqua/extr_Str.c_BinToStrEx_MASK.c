
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int) ;

void FUNC_5(char *VAR_0, UINT VAR_1, void *VAR_2, UINT VAR_3)
{
 char *VAR_4;
 UCHAR *VAR_5 = (UCHAR *)VAR_2;
 UINT VAR_6;
 UINT VAR_7;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 VAR_6 = VAR_3 * 3 + 1;

 VAR_4 = FUNC_4(VAR_6);

 for (VAR_7 = 0;VAR_7 < VAR_3;VAR_7++)
 {
  FUNC_0(&VAR_4[VAR_7 * 3], 0, "%02X ", VAR_5[VAR_7]);
 }
 FUNC_3(VAR_4);

 FUNC_2(VAR_0, VAR_1, VAR_4);

 FUNC_1(VAR_4);
}
