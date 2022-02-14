
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_6__ {int PasswordRemoteOnly; int EncryptedPassword; } ;
struct TYPE_5__ {int IsPasswordPresented; int PasswordRemoteOnly; } ;
typedef TYPE_1__ RPC_CLIENT_PASSWORD_SETTING ;
typedef TYPE_2__ CLIENT ;


 scalar_t__ FUNC_0 (int *,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ) ;

bool FUNC_2(CLIENT *VAR_1, RPC_CLIENT_PASSWORD_SETTING *VAR_2)
{
 UCHAR VAR_3[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_3, "", 0);
 if (FUNC_0(VAR_3, VAR_1->EncryptedPassword, VAR_0) == 0)
 {
  VAR_2->IsPasswordPresented = 0;
 }
 else
 {
  VAR_2->IsPasswordPresented = 1;
 }

 VAR_2->PasswordRemoteOnly = VAR_1->PasswordRemoteOnly;

 return 1;
}
