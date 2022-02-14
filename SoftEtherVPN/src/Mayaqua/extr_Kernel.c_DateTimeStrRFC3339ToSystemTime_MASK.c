
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int str_year ;
typedef int str_second ;
typedef int str_msec ;
typedef int str_month ;
typedef int str_minute ;
typedef int str_hour ;
typedef int str_day ;
typedef size_t UINT ;
struct TYPE_5__ {void* wMilliseconds; void* wSecond; void* wMinute; void* wHour; void* wDay; void* wMonth; void* wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 size_t FUNC_1 (char*,char*,int ,int) ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char*,int,char*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int) ;

bool FUNC_7(SYSTEMTIME *VAR_2, char *VAR_3)
{
 bool VAR_4 = 0;
 UINT VAR_5;
 char VAR_6[VAR_1];
 FUNC_6(VAR_2, sizeof(SYSTEMTIME));
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_6, sizeof(VAR_6), VAR_3);

 VAR_5 = FUNC_1(VAR_6, "+", 0, 0);
 if (VAR_5 != VAR_0)
 {
  VAR_6[VAR_5] = 0;
 }

 if (FUNC_4(VAR_6) >= 19)
 {
  if (VAR_6[4] == '-' && VAR_6[7] == '-' && VAR_6[10] == 'T' && VAR_6[13] == ':' &&
   VAR_6[16] == ':')
  {
   char VAR_7[16], VAR_8[16], VAR_9[16], VAR_10[16], VAR_11[16],
    VAR_12[16], VAR_13[16];

   FUNC_3(VAR_7, sizeof(VAR_7), VAR_6 + 0);
   VAR_7[4] = 0;

   FUNC_3(VAR_8, sizeof(VAR_8), VAR_6 + 5);
   VAR_8[2] = 0;

   FUNC_3(VAR_9, sizeof(VAR_9), VAR_6 + 8);
   VAR_9[2] = 0;

   FUNC_3(VAR_10, sizeof(VAR_10), VAR_6 + 11);
   VAR_10[2] = 0;

   FUNC_3(VAR_11, sizeof(VAR_11), VAR_6 + 14);
   VAR_11[2] = 0;

   FUNC_3(VAR_12, sizeof(VAR_12), VAR_6 + 17);
   VAR_12[2] = 0;

   VAR_13[0] = 0;

   if (FUNC_4(VAR_6) >= 21 && VAR_6[19] == '.')
   {
    FUNC_3(VAR_13, sizeof(VAR_13), VAR_6 + 20);
    VAR_13[FUNC_4(VAR_6) - 21] = 0;
    while (FUNC_4(VAR_13) < 3)
    {
     FUNC_2(VAR_13, sizeof(VAR_13), "0");
    }
    VAR_13[3] = 0;
   }

   VAR_2->wYear = FUNC_5(VAR_7);
   VAR_2->wMonth = FUNC_5(VAR_8);
   VAR_2->wDay = FUNC_5(VAR_9);
   VAR_2->wHour = FUNC_5(VAR_10);
   VAR_2->wMinute = FUNC_5(VAR_11);
   VAR_2->wSecond = FUNC_5(VAR_12);
   VAR_2->wMilliseconds = FUNC_5(VAR_13);

   FUNC_0(VAR_2);

   VAR_4 = 1;
  }
 }

 return VAR_4;
}
