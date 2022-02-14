
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_vol {char* username; char* password; int cred_uid; } ;
struct cifs_ses {int * password; int * user_name; int cred_uid; TYPE_1__* server; } ;
struct TYPE_2__ {int secType; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct cifs_ses *VAR_2, struct smb_vol *VAR_3)
{
 switch (VAR_2->server->secType) {
 case 128:
  if (VAR_3->cred_uid != VAR_2->cred_uid)
   return 0;
  break;
 default:

  if (VAR_2->user_name == ((void*)0))
   return 0;
  if (FUNC_1(VAR_2->user_name, VAR_3->username,
       VAR_1))
   return 0;
  if (FUNC_0(VAR_3->username) != 0 &&
      VAR_2->password != ((void*)0) &&
      FUNC_1(VAR_2->password,
       VAR_3->password ? VAR_3->password : "",
       VAR_0))
   return 0;
 }
 return 1;
}
