
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int Started; int Halting; int * ClientSession; TYPE_1__* Cedar; } ;
struct TYPE_6__ {int CurrentActiveLinks; } ;
typedef TYPE_2__ LINK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5(LINK *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0);
 {
  if (VAR_0->Started == 0)
  {
   FUNC_4(VAR_0);
   return;
  }
  VAR_0->Started = 0;
  VAR_0->Halting = 1;

  FUNC_0(VAR_0->Cedar->CurrentActiveLinks);
 }
 FUNC_4(VAR_0);

 if (VAR_0->ClientSession != ((void*)0))
 {

  FUNC_3(VAR_0->ClientSession);

  FUNC_1(VAR_0);
  {
   FUNC_2(VAR_0->ClientSession);
   VAR_0->ClientSession = ((void*)0);
  }
  FUNC_4(VAR_0);
 }

 FUNC_1(VAR_0);
 {
  VAR_0->Halting = 0;
 }
 FUNC_4(VAR_0);
}
