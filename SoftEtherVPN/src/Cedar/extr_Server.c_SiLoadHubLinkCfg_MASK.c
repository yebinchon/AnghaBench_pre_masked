
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int Cedar; } ;
struct TYPE_9__ {int Offline; int ServerCert; void* CheckServerCert; } ;
typedef int POLICY ;
typedef TYPE_1__ LINK ;
typedef TYPE_2__ HUB ;
typedef int FOLDER ;
typedef int CLIENT_OPTION ;
typedef int CLIENT_AUTH ;
typedef int BUF ;


 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int *,char*) ;
 int * FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int ,TYPE_2__*,int *,int *,int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int *,int *) ;

void FUNC_14(FOLDER *VAR_0, HUB *VAR_1)
{
 bool VAR_2;
 CLIENT_OPTION *VAR_3;
 CLIENT_AUTH *VAR_4;
 FOLDER *VAR_5;
 POLICY VAR_6;
 LINK *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_3(VAR_0, "Policy");
 if (VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_13(&VAR_6, VAR_5);

 VAR_2 = FUNC_1(VAR_0, "Online");

 VAR_3 = FUNC_6(FUNC_3(VAR_0, "ClientOption"));
 VAR_4 = FUNC_5(FUNC_3(VAR_0, "ClientAuth"));
 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  FUNC_7(VAR_3);
  FUNC_4(VAR_4);
  return;
 }

 VAR_7 = FUNC_9(VAR_1->Cedar, VAR_1, VAR_3, VAR_4, &VAR_6);
 if (VAR_7 != ((void*)0))
 {
  BUF *VAR_8;
  VAR_7->CheckServerCert = FUNC_1(VAR_0, "CheckServerCert");
  VAR_8 = FUNC_2(VAR_0, "ServerCert");
  if (VAR_8 != ((void*)0))
  {
   VAR_7->ServerCert = FUNC_0(VAR_8, 0);
   FUNC_8(VAR_8);
  }

  if (VAR_2)
  {
   VAR_7->Offline = 1;
   FUNC_12(VAR_7);
  }
  else
  {
   VAR_7->Offline = 0;
   FUNC_11(VAR_7);
  }
  FUNC_10(VAR_7);
 }

 FUNC_7(VAR_3);
 FUNC_4(VAR_4);
}
