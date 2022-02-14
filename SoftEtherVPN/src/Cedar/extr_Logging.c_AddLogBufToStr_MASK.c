
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int BUF ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (int *,char*,size_t) ;

void FUNC_5(BUF *VAR_1, char *VAR_2, char *VAR_3)
{
 char VAR_4[VAR_0 * 2];
 char *VAR_5 = ((void*)0);

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (FUNC_0(VAR_3))
 {
  return;
 }

 VAR_4[0] = 0;

 if (FUNC_0(VAR_2) == 0)
 {
  VAR_5 = &VAR_4[FUNC_3(VAR_4)];
  FUNC_2(VAR_4, sizeof(VAR_4), VAR_2);
  FUNC_1(VAR_5);
  FUNC_2(VAR_4, sizeof(VAR_4), "=");
 }

 VAR_5 = &VAR_4[FUNC_3(VAR_4)];
 FUNC_2(VAR_4, sizeof(VAR_4), VAR_3);
 FUNC_1(VAR_5);
 FUNC_2(VAR_4, sizeof(VAR_4), " ");

 FUNC_4(VAR_1, VAR_4, FUNC_3(VAR_4));
}
