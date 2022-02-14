
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef int temp_cred ;
struct ucred {int cr_label; } ;
typedef TYPE_1__* posix_cred_t ;
typedef struct ucred* kauth_cred_t ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_svuid; scalar_t__ cr_gid; scalar_t__ cr_rgid; scalar_t__ cr_svgid; int cr_flags; int cr_ngroups; void* cr_gmuid; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct ucred*) ;
 int VAR_2 ;
 int FUNC_1 (struct ucred*,int) ;
 scalar_t__ FUNC_2 (struct ucred*,scalar_t__) ;
 struct ucred* FUNC_3 (struct ucred*,struct ucred*,int ) ;
 TYPE_1__* FUNC_4 (struct ucred*) ;

kauth_cred_t
FUNC_5(kauth_cred_t VAR_3, uid_t VAR_4, gid_t VAR_5)
{
 struct ucred VAR_6;
 posix_cred_t VAR_7 = FUNC_4(&VAR_6);
 posix_cred_t VAR_8;

 FUNC_0(VAR_3);

 VAR_8 = FUNC_4(VAR_3);





 if (VAR_8->cr_uid == VAR_4 && VAR_8->cr_ruid == VAR_4 && VAR_8->cr_svuid == VAR_4 &&
  VAR_8->cr_gid == VAR_5 && VAR_8->cr_rgid == VAR_5 && VAR_8->cr_svgid == VAR_5) {

  return(VAR_3);
 }





 FUNC_1(&VAR_6, sizeof(VAR_6));
 VAR_7->cr_uid = VAR_4;
 VAR_7->cr_ruid = VAR_4;
 VAR_7->cr_svuid = VAR_4;
 VAR_7->cr_flags = VAR_8->cr_flags;

 if (VAR_8->cr_flags & VAR_0) {
  VAR_7->cr_gmuid = VAR_1;
  VAR_7->cr_flags |= VAR_0;
 } else {
  VAR_7->cr_gmuid = VAR_4;
  VAR_7->cr_flags &= ~VAR_0;
 }
 VAR_7->cr_ngroups = 1;

 if (FUNC_2(&VAR_6, VAR_5)) {
  VAR_7->cr_gmuid = VAR_1;
  VAR_7->cr_flags |= VAR_0;
 }
 VAR_7->cr_rgid = VAR_5;
 VAR_7->cr_svgid = VAR_5;




 return(FUNC_3(VAR_3, &VAR_6, VAR_2));
}
