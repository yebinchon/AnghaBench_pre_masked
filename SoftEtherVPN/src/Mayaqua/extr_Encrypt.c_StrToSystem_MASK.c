
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; } ;
typedef TYPE_1__ SYSTEMTIME ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int) ;

bool FUNC_4(SYSTEMTIME *VAR_0, char *VAR_1)
{
 char VAR_2[3] = {0, 0, 0};
 bool VAR_3 = 0;


 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 if (FUNC_1(VAR_1) != 13)
 {
  if (FUNC_1(VAR_1) != 15)
  {
   return 0;
  }



  VAR_3 = 1;
  VAR_2[0] = VAR_1[0];
  VAR_2[1] = VAR_1[1];
  VAR_1 += 2;
 }
 if (VAR_1[12] != 'Z')
 {
  return 0;
 }


 {
  char VAR_4[3] = {VAR_1[0], VAR_1[1], 0},
   VAR_5[3] = {VAR_1[2], VAR_1[3], 0},
   VAR_6[3] = {VAR_1[4], VAR_1[5], 0},
   VAR_7[3] = {VAR_1[6], VAR_1[7], 0},
   VAR_8[3] = {VAR_1[8], VAR_1[9], 0},
   VAR_9[3] = {VAR_1[10], VAR_1[11], 0};
  FUNC_3(VAR_0, sizeof(SYSTEMTIME));
  VAR_0->wYear = FUNC_2(VAR_4);
  if (VAR_3)
  {
   VAR_0->wYear += FUNC_2(VAR_2) * 100;
  }
  else if (VAR_0->wYear >= 60)
  {
   VAR_0->wYear += 1900;
  }
  else
  {
   VAR_0->wYear += 2000;
  }
  VAR_0->wMonth = FUNC_2(VAR_5);
  VAR_0->wDay = FUNC_2(VAR_6);
  VAR_0->wHour = FUNC_2(VAR_7);
  VAR_0->wMinute = FUNC_2(VAR_8);
  VAR_0->wSecond = FUNC_2(VAR_9);
  FUNC_0(VAR_0);
 }

 return 1;
}
