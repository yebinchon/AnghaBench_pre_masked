
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int CfgRw; int * ClientAuth; int * ClientOption; int Online; int AdminPort; int HashedPassword; int AdminK; int AdminX; } ;
typedef TYPE_1__ NAT ;
typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 int FUNC_11 (int ,int *) ;
 int VAR_0 ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ,int) ;

void FUNC_14(NAT *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_1->lock);
 {
  FOLDER *VAR_2 = FUNC_4(((void*)0), VAR_0);
  BUF *VAR_3;


  VAR_3 = FUNC_13(VAR_1->AdminX, 0);
  FUNC_1(VAR_2, "AdminCert", VAR_3);
  FUNC_6(VAR_3);


  VAR_3 = FUNC_7(VAR_1->AdminK, 0, ((void*)0));
  FUNC_1(VAR_2, "AdminKey", VAR_3);
  FUNC_6(VAR_3);


  FUNC_2(VAR_2, "HashedPassword", VAR_1->HashedPassword, sizeof(VAR_1->HashedPassword));
  FUNC_3(VAR_2, "AdminPort", VAR_1->AdminPort);
  FUNC_0(VAR_2, "Online", VAR_1->Online);


  FUNC_10(VAR_1, VAR_2);


  if (VAR_1->ClientOption != ((void*)0) && VAR_1->ClientAuth != ((void*)0))
  {
   FUNC_9(VAR_1, VAR_2);
  }

  FUNC_11(VAR_1->CfgRw, VAR_2);
  FUNC_5(VAR_2);
 }
 FUNC_12(VAR_1->lock);
}
