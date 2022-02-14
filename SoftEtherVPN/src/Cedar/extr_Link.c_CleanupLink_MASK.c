
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ServerCert; struct TYPE_4__* Policy; int Auth; struct TYPE_4__* Option; scalar_t__ ClientSession; int lock; } ;
typedef TYPE_1__ LINK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(LINK *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0->lock);
 if (VAR_0->ClientSession)
 {
  FUNC_4(VAR_0->ClientSession);
 }
 FUNC_2(VAR_0->Option);
 FUNC_0(VAR_0->Auth);
 FUNC_2(VAR_0->Policy);

 if (VAR_0->ServerCert != ((void*)0))
 {
  FUNC_3(VAR_0->ServerCert);
 }

 FUNC_2(VAR_0);
}
