
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BUF ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,scalar_t__,char*) ;
 int FUNC_6 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (char*) ;

void FUNC_8(BUF *VAR_0, UINT VAR_1, char *VAR_2, char *VAR_3, char *VAR_4, UINT VAR_5)
{
 char *VAR_6;
 char *VAR_7;
 char *VAR_8;
 char *VAR_9 = ((void*)0);
 UINT VAR_10;

 if (VAR_0 == ((void*)0) || VAR_1 == 0 || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_7 = FUNC_1(VAR_2);
 VAR_8 = FUNC_1(VAR_3);
 if (VAR_4 != ((void*)0))
 {
  VAR_9 = FUNC_1(VAR_4);
 }

 VAR_10 = FUNC_7(VAR_7) + FUNC_7(VAR_8) + 2 + 64 + 1;
 VAR_6 = FUNC_4(VAR_10);

 if (VAR_9 != ((void*)0))
 {
  FUNC_6(VAR_6, VAR_10, FUNC_2(VAR_1));
  FUNC_5(VAR_6, VAR_10, " ");
  FUNC_5(VAR_6, VAR_10, VAR_7);
  FUNC_5(VAR_6, VAR_10, " ");
  FUNC_5(VAR_6, VAR_10, VAR_8);
  FUNC_5(VAR_6, VAR_10, " ");
  FUNC_5(VAR_6, VAR_10, VAR_9);
 }
 else
 {
  FUNC_6(VAR_6, VAR_10, FUNC_2(VAR_1));
  FUNC_5(VAR_6, VAR_10, " ");
  FUNC_5(VAR_6, VAR_10, VAR_7);
  FUNC_5(VAR_6, VAR_10, " ");
  FUNC_5(VAR_6, VAR_10, VAR_8);
 }

 FUNC_3(VAR_7);
 FUNC_3(VAR_8);
 if (VAR_9 != ((void*)0))
 {
  FUNC_3(VAR_9);
 }
 FUNC_0(VAR_0, VAR_6, VAR_5);
 FUNC_3(VAR_6);
}
