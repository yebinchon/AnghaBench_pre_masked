
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int temp_cred ;
struct ucred {int dummy; } ;
typedef TYPE_1__* posix_cred_t ;
typedef struct ucred* kauth_cred_t ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {scalar_t__* cr_groups; scalar_t__ cr_rgid; scalar_t__ cr_svgid; int cr_gmuid; int cr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,struct ucred*,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ucred*) ;
 int VAR_3 ;
 int FUNC_3 (struct ucred*,struct ucred*,int) ;
 scalar_t__ FUNC_4 (struct ucred*,scalar_t__) ;
 struct ucred* FUNC_5 (struct ucred*,struct ucred*,int ) ;
 TYPE_1__* FUNC_6 (struct ucred*) ;

kauth_cred_t
FUNC_7(kauth_cred_t VAR_4, gid_t VAR_5, gid_t VAR_6, gid_t VAR_7)
{
 struct ucred VAR_8;
 posix_cred_t VAR_9 = FUNC_6(&VAR_8);
 posix_cred_t VAR_10 = FUNC_6(VAR_4);

 FUNC_2(VAR_4);
 FUNC_1("kauth_cred_setresgid %p %d %d %d\n", VAR_4, VAR_5, VAR_6, VAR_7);





 if (VAR_10->cr_groups[0] == VAR_6 &&
     VAR_10->cr_rgid == VAR_5 &&
     VAR_10->cr_svgid == VAR_7) {

  return(VAR_4);
 }





 FUNC_3(VAR_4, &VAR_8, sizeof(VAR_8));
 if (VAR_6 != VAR_1) {

  if (FUNC_4(&VAR_8, VAR_6)) {
   FUNC_0("displaced!\n");
   VAR_9->cr_flags |= VAR_0;
   VAR_9->cr_gmuid = VAR_2;
  } else {
   FUNC_0("not displaced\n");
  }
 }
 if (VAR_5 != VAR_1) {
  VAR_9->cr_rgid = VAR_5;
 }
 if (VAR_7 != VAR_1) {
  VAR_9->cr_svgid = VAR_7;
 }

 return(FUNC_5(VAR_4, &VAR_8, VAR_3));
}
