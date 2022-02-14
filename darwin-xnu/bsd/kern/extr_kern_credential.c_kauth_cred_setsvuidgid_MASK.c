
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int temp_cred ;
struct ucred {int cr_svgid; int cr_svuid; } ;
typedef TYPE_1__* posix_cred_t ;
typedef struct ucred* kauth_cred_t ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {scalar_t__ cr_svgid; int cr_svuid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct ucred*,int ,int ,int ,scalar_t__) ;
 int FUNC_2 (struct ucred*) ;
 int VAR_0 ;
 int FUNC_3 (struct ucred*,struct ucred*,int) ;
 struct ucred* FUNC_4 (struct ucred*,struct ucred*,int ) ;
 TYPE_1__* FUNC_5 (struct ucred*) ;

kauth_cred_t
FUNC_6(kauth_cred_t VAR_1, uid_t VAR_2, gid_t VAR_3)
{
 struct ucred VAR_4;
 posix_cred_t VAR_5 = FUNC_5(&VAR_4);
 posix_cred_t VAR_6;

 FUNC_2(VAR_1);

 VAR_6 = FUNC_5(VAR_1);

 FUNC_1("kauth_cred_setsvuidgid: %p u%d->%d g%d->%d\n", VAR_1, VAR_1->cr_svuid, VAR_2, VAR_1->cr_svgid, VAR_3);






 if (VAR_6->cr_svuid == VAR_2 && VAR_6->cr_svgid == VAR_3) {

  return(VAR_1);
 }
 FUNC_0("kauth_cred_setsvuidgid: cred change\n");




 FUNC_3(VAR_1, &VAR_4, sizeof(VAR_4));
 VAR_5->cr_svuid = VAR_2;
 VAR_5->cr_svgid = VAR_3;

 return(FUNC_4(VAR_1, &VAR_4, VAR_0));
}
