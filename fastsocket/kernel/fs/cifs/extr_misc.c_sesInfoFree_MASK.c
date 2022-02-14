
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cifs_ses {struct cifs_ses* domainName; struct cifs_ses* user_name; struct cifs_ses* password; struct cifs_ses* serverNOS; struct cifs_ses* serverDomain; struct cifs_ses* serverOS; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct cifs_ses*) ;
 int FUNC_3 (struct cifs_ses*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct cifs_ses*) ;

void
FUNC_5(struct cifs_ses *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_1(1, "Null buffer passed to sesInfoFree");
  return;
 }

 FUNC_0(&VAR_0);
 FUNC_2(VAR_1->serverOS);
 FUNC_2(VAR_1->serverDomain);
 FUNC_2(VAR_1->serverNOS);
 if (VAR_1->password) {
  FUNC_3(VAR_1->password, 0, FUNC_4(VAR_1->password));
  FUNC_2(VAR_1->password);
 }
 FUNC_2(VAR_1->user_name);
 FUNC_2(VAR_1->domainName);
 FUNC_2(VAR_1);
}
