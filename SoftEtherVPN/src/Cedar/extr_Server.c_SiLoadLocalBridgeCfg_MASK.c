
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tmp ;
typedef int tapaddr ;
typedef int nic ;
typedef int hub ;
typedef char UCHAR ;
struct TYPE_9__ {int OsType; } ;
struct TYPE_8__ {int Size; int Buf; } ;
struct TYPE_7__ {int Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef int FOLDER ;
typedef TYPE_2__ BUF ;


 int FUNC_0 (int ,char*,char*,scalar_t__,scalar_t__,int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *,char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_5__* FUNC_5 () ;
 scalar_t__ FUNC_6 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;

void FUNC_10(SERVER *VAR_1, FOLDER *VAR_2)
{
 char VAR_3[VAR_0];
 char VAR_4[VAR_0];
 bool VAR_5 = 0;
 UCHAR VAR_6[6];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_9(VAR_3, sizeof(VAR_3));
 FUNC_9(VAR_4, sizeof(VAR_4));

 FUNC_2(VAR_2, "HubName", VAR_3, sizeof(VAR_3));
 FUNC_2(VAR_2, "DeviceName", VAR_4, sizeof(VAR_4));

 if (FUNC_6(VAR_3) || FUNC_6(VAR_4)
  )
 {
  return;
 }

 if (FUNC_7(FUNC_5()->OsType))
 {
  if (FUNC_1(VAR_2, "TapMode"))
  {
   char VAR_7[VAR_0];
   VAR_5 = 1;
   FUNC_9(VAR_6, sizeof(VAR_6));
   if (FUNC_2(VAR_2, "TapMacAddress", VAR_7, sizeof(VAR_7)))
   {
    BUF *VAR_8;
    VAR_8 = FUNC_8(VAR_7);
    if (VAR_8 != ((void*)0) && VAR_8->Size == 6)
    {
     FUNC_3(VAR_6, VAR_8->Buf, sizeof(VAR_6));
    }
    FUNC_4(VAR_8);
   }
  }
 }

 FUNC_0(VAR_1->Cedar, VAR_3, VAR_4, FUNC_1(VAR_2, "NoPromiscuousMode"), FUNC_1(VAR_2, "MonitorMode"),
  VAR_5, VAR_6, FUNC_1(VAR_2, "LimitBroadcast"));
}
