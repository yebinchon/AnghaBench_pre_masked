
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Server; int CurrentRegionLock; int CurrentRegion; } ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int,char*) ;
 int FUNC_5 (int ) ;

void FUNC_6(CEDAR *VAR_0, char *VAR_1, bool VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (FUNC_1(VAR_1) == 0)
 {
  FUNC_2(VAR_0->CurrentRegionLock);
  {
   if (FUNC_3(VAR_0->CurrentRegion, VAR_1) != 0)
   {
    FUNC_4(VAR_0->CurrentRegion, sizeof(VAR_0->CurrentRegion), VAR_1);
    VAR_3 = 1;
   }
  }
  FUNC_5(VAR_0->CurrentRegionLock);
 }

 if (VAR_2)
 {
  VAR_3 = 1;
 }

 if (VAR_3)
 {
  FUNC_0(VAR_0->Server);
 }
}
