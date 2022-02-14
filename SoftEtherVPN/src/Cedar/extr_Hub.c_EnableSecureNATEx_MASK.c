
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ Type; int EnableSecureNAT; int Offline; int lock_online; int SecureNATOption; int * SecureNAT; int SessionList; TYPE_2__* Cedar; } ;
struct TYPE_7__ {TYPE_1__* Server; } ;
struct TYPE_6__ {scalar_t__ ServerType; } ;
typedef TYPE_3__ HUB ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(HUB *VAR_2, bool VAR_3, bool VAR_4)
{
 bool VAR_5 = 0;

 if (VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->Cedar->Server != ((void*)0) && VAR_2->Cedar->Server->ServerType == VAR_1)
 {
  if (VAR_2->Type == VAR_0)
  {
   VAR_5 = 1;
  }
 }

 FUNC_1(VAR_2->lock_online);
 {
  if (VAR_4 == 0)
  {
   VAR_2->EnableSecureNAT = VAR_3;
  }

  if (VAR_2->EnableSecureNAT == 0)
  {
STOP:

   if (VAR_2->SecureNAT != ((void*)0))
   {
    FUNC_2(VAR_2->SecureNAT);
    VAR_2->SecureNAT = ((void*)0);
   }
  }
  else
  {
   if (VAR_5)
   {
    if ((VAR_2->SecureNAT != ((void*)0) && FUNC_0(VAR_2->SessionList) <= 1) ||
     (VAR_2->SecureNAT == ((void*)0) && FUNC_0(VAR_2->SessionList) == 0))
    {


     goto STOP;
    }
   }


   if (VAR_2->SecureNAT == ((void*)0) && VAR_2->Offline == 0)
   {
    VAR_2->SecureNAT = FUNC_3(VAR_2, VAR_2->SecureNATOption);
   }
  }
 }
 FUNC_4(VAR_2->lock_online);
}
