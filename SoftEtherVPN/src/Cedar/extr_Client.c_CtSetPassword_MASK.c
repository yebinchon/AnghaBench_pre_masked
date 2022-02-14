
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int PasswordRemoteOnly; int EncryptedPassword; } ;
struct TYPE_7__ {char* Password; int PasswordRemoteOnly; } ;
typedef TYPE_1__ RPC_CLIENT_PASSWORD ;
typedef TYPE_2__ CLIENT ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

bool FUNC_5(CLIENT *VAR_0, RPC_CLIENT_PASSWORD *VAR_1)
{
 char *VAR_2;
 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = VAR_1->Password;

 if (FUNC_3(VAR_2, "********") != 0)
 {

  FUNC_2(VAR_0->EncryptedPassword, VAR_2, FUNC_4(VAR_2));
 }

 VAR_0->PasswordRemoteOnly = VAR_1->PasswordRemoteOnly;

 FUNC_0(VAR_0, "LC_SET_PASSWORD");

 FUNC_1(VAR_0);

 return 1;
}
