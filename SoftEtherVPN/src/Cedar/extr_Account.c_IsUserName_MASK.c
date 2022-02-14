
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef scalar_t__ UINT ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char) ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

bool FUNC_6(char *VAR_9)
{
 UINT VAR_10, VAR_11;
 char VAR_12[VAR_6];

 if (VAR_9 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_12, sizeof(VAR_12), VAR_9);
 VAR_9 = VAR_12;

 FUNC_5(VAR_9);

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11 == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_9, "*") == 0)
 {
  return 1;
 }

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
 {
  if (FUNC_0(VAR_9[VAR_10]) == 0 && VAR_9[VAR_10] != '@')
  {
   return 0;
  }
 }

 if (FUNC_2(VAR_9, VAR_4) == 0)
 {
  return 0;
 }

 if (FUNC_1(VAR_9, VAR_3))
 {
  return 0;
 }

 if (FUNC_2(VAR_9, VAR_5) == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_9, VAR_7) == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_9, VAR_8) == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_9, VAR_1) == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_9, VAR_2) == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_9, VAR_0) == 0)
 {
  return 0;
 }

 return 1;
}
