
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int AdminK; int AdminX; int Online; int AdminPort; int HashedPassword; } ;
typedef TYPE_1__ NAT ;
typedef int FOLDER ;
typedef int BUF ;


 int FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (TYPE_1__*,int *) ;

bool FUNC_10(NAT *VAR_0, FOLDER *VAR_1)
{
 FOLDER *VAR_2;
 BUF *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_5(VAR_1, "VirtualHost");
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_4(VAR_1, "HashedPassword", VAR_0->HashedPassword, sizeof(VAR_0->HashedPassword));
 VAR_0->AdminPort = FUNC_6(VAR_1, "AdminPort");
 VAR_0->Online = FUNC_2(VAR_1, "Online");

 VAR_3 = FUNC_3(VAR_1, "AdminCert");
 if (VAR_3 != ((void*)0))
 {
  VAR_0->AdminX = FUNC_1(VAR_3, 0);
  FUNC_7(VAR_3);
 }

 VAR_3 = FUNC_3(VAR_1, "AdminKey");
 if (VAR_3 != ((void*)0))
 {
  VAR_0->AdminK = FUNC_0(VAR_3, 1, 0, ((void*)0));
  FUNC_7(VAR_3);
 }

 FUNC_9(VAR_0, VAR_1);

 FUNC_8(VAR_0, VAR_1);

 return 1;
}
