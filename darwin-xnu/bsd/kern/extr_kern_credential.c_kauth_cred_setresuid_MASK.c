
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int temp_cred ;
struct ucred {int dummy; } ;
typedef TYPE_1__* posix_cred_t ;
typedef struct ucred* kauth_cred_t ;
struct TYPE_3__ {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_svuid; scalar_t__ cr_gmuid; int cr_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ucred*) ;
 int VAR_2 ;
 int FUNC_1 (struct ucred*,struct ucred*,int) ;
 struct ucred* FUNC_2 (struct ucred*,struct ucred*,int ) ;
 TYPE_1__* FUNC_3 (struct ucred*) ;

kauth_cred_t
FUNC_4(kauth_cred_t VAR_3, uid_t VAR_4, uid_t VAR_5, uid_t VAR_6, uid_t VAR_7)
{
 struct ucred VAR_8;
 posix_cred_t VAR_9 = FUNC_3(&VAR_8);
 posix_cred_t VAR_10 = FUNC_3(VAR_3);

 FUNC_0(VAR_3);





 if ((VAR_5 == VAR_1 || VAR_10->cr_uid == VAR_5) &&
     (VAR_4 == VAR_1 || VAR_10->cr_ruid == VAR_4) &&
     (VAR_6 == VAR_1 || VAR_10->cr_svuid == VAR_6) &&
     (VAR_10->cr_gmuid == VAR_7)) {

  return(VAR_3);
 }





 FUNC_1(VAR_3, &VAR_8, sizeof(VAR_8));
 if (VAR_5 != VAR_1) {
  VAR_9->cr_uid = VAR_5;
 }
 if (VAR_4 != VAR_1) {
  VAR_9->cr_ruid = VAR_4;
 }
 if (VAR_6 != VAR_1) {
  VAR_9->cr_svuid = VAR_6;
 }






 if ((VAR_9->cr_gmuid = VAR_7) == VAR_1) {
  VAR_9->cr_flags |= VAR_0;
 }

 return(FUNC_2(VAR_3, &VAR_8, VAR_2));
}
