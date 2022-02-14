
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CheckServerCert; int lock; int * ServerCert; int * Policy; int Auth; int Option; scalar_t__ Offline; } ;
typedef TYPE_1__ LINK ;
typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (int ) ;
 int * FUNC_9 (int *,int) ;

void FUNC_10(FOLDER *VAR_0, LINK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_1->lock);
 {

  FUNC_0(VAR_0, "Online", VAR_1->Offline ? 0 : 1);


  FUNC_4(FUNC_2(VAR_0, "ClientOption"), VAR_1->Option);


  FUNC_3(FUNC_2(VAR_0, "ClientAuth"), VAR_1->Auth);


  if (VAR_1->Policy != ((void*)0))
  {
   FUNC_7(FUNC_2(VAR_0, "Policy"), VAR_1->Policy, 1);
  }

  FUNC_0(VAR_0, "CheckServerCert", VAR_1->CheckServerCert);

  if (VAR_1->ServerCert != ((void*)0))
  {
   BUF *VAR_2 = FUNC_9(VAR_1->ServerCert, 0);
   FUNC_1(VAR_0, "ServerCert", VAR_2);
   FUNC_5(VAR_2);
  }
 }
 FUNC_8(VAR_1->lock);
}
