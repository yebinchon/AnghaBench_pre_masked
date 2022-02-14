
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int t ;
typedef int UINT64 ;
typedef int UINT ;
struct TYPE_8__ {int wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; } ;
struct TYPE_7__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ SYSTEMTIME ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,int) ;

UINT64 FUNC_7(char *VAR_1)
{
 UINT64 VAR_2 = 0;
 TOKEN_LIST *VAR_3;
 UINT VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 if (VAR_1 == ((void*)0))
 {
  return VAR_0;
 }

 if (FUNC_1(VAR_1) || FUNC_3(VAR_1, "none") == 0)
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_1, ":/,. \"");
 if (VAR_3->NumTokens != 6)
 {
  FUNC_0(VAR_3);
  return VAR_0;
 }

 VAR_4 = FUNC_5(VAR_3->Token[0]);
 VAR_5 = FUNC_5(VAR_3->Token[1]);
 VAR_6 = FUNC_5(VAR_3->Token[2]);
 VAR_7 = FUNC_5(VAR_3->Token[3]);
 VAR_8 = FUNC_5(VAR_3->Token[4]);
 VAR_9 = FUNC_5(VAR_3->Token[5]);

 VAR_2 = VAR_0;

 if (VAR_4 >= 1000 && VAR_4 <= 9999 && VAR_5 >= 1 && VAR_5 <= 12 && VAR_6 >= 1 && VAR_6 <= 31 &&
  VAR_7 <= 23 && VAR_8 <= 59 && VAR_9 <= 59)
 {
  SYSTEMTIME VAR_10;

  FUNC_6(&VAR_10, sizeof(VAR_10));
  VAR_10.wYear = VAR_4;
  VAR_10.wMonth = VAR_5;
  VAR_10.wDay = VAR_6;
  VAR_10.wHour = VAR_7;
  VAR_10.wMinute = VAR_8;
  VAR_10.wSecond = VAR_9;

  VAR_2 = FUNC_4(&VAR_10);
 }

 FUNC_0(VAR_3);

 return VAR_2;
}
