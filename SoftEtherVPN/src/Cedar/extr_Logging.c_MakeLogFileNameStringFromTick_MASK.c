
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_6__ {int CacheFlag; scalar_t__ LastTick; int LastSwitchType; char* LastStr; } ;
struct TYPE_5__ {int wYear; int wMonth; int wDay; int wHour; int wMinute; int wSecond; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ LOG ;







 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (char*,int,char*,...) ;

void FUNC_5(LOG *VAR_0, char *VAR_1, UINT VAR_2, UINT64 VAR_3, UINT VAR_4)
{
 UINT64 VAR_5;
 SYSTEMTIME VAR_6;


 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_0->CacheFlag)
 {
  if (VAR_0->LastTick == VAR_3 &&
   VAR_0->LastSwitchType == VAR_4)
  {
   FUNC_0(VAR_1, VAR_2, VAR_0->LastStr);
   return;
  }
 }

 VAR_5 = FUNC_2(VAR_3);
 FUNC_3(&VAR_6, FUNC_1(VAR_5));

 switch (VAR_4)
 {
 case 128:
  FUNC_4(VAR_1, VAR_2, "_%04u%02u%02u_%02u%02u%02u",
   VAR_6.wYear, VAR_6.wMonth, VAR_6.wDay, VAR_6.wHour, VAR_6.wMinute, VAR_6.wSecond);
  break;

 case 130:
  FUNC_4(VAR_1, VAR_2, "_%04u%02u%02u_%02u%02u",
   VAR_6.wYear, VAR_6.wMonth, VAR_6.wDay, VAR_6.wHour, VAR_6.wMinute);
  break;

 case 131:
  FUNC_4(VAR_1, VAR_2, "_%04u%02u%02u_%02u", VAR_6.wYear, VAR_6.wMonth, VAR_6.wDay, VAR_6.wHour);
  break;

 case 132:
  FUNC_4(VAR_1, VAR_2, "_%04u%02u%02u", VAR_6.wYear, VAR_6.wMonth, VAR_6.wDay);
  break;

 case 129:
  FUNC_4(VAR_1, VAR_2, "_%04u%02u", VAR_6.wYear, VAR_6.wMonth);
  break;

 default:
  FUNC_4(VAR_1, VAR_2, "%s");
  break;
 }

 VAR_0->CacheFlag = 1;
 VAR_0->LastTick = VAR_3;
 VAR_0->LastSwitchType = VAR_4;
 FUNC_0(VAR_0->LastStr, sizeof(VAR_0->LastStr), VAR_1);
}
