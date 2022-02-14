
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {char* CurrentRegion; int CurrentRegionLock; } ;
typedef TYPE_1__ CEDAR ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (int ) ;

void FUNC_6(CEDAR *VAR_2, char *VAR_3, UINT VAR_4)
{
 FUNC_0(VAR_3, VAR_4);

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_2->CurrentRegionLock);
 {
  FUNC_4(VAR_3, VAR_4, VAR_2->CurrentRegion);
 }
 FUNC_5(VAR_2->CurrentRegionLock);

 if (FUNC_2(VAR_3))
 {
  if (FUNC_1() == VAR_1)
  {
   FUNC_4(VAR_3, VAR_4, "JP");
  }
  else if (FUNC_1() == VAR_0)
  {
   FUNC_4(VAR_3, VAR_4, "CN");
  }
 }
}
