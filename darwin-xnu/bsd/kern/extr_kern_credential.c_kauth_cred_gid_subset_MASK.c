
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* posix_cred_t ;
typedef int kauth_cred_t ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {int cr_ngroups; scalar_t__* cr_groups; scalar_t__ cr_rgid; scalar_t__ cr_svgid; } ;


 int FUNC_0 (int ,scalar_t__,int*) ;
 TYPE_1__* FUNC_1 (int ) ;

int
FUNC_2(kauth_cred_t VAR_0, kauth_cred_t VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 1;
 gid_t VAR_6;
 posix_cred_t VAR_7 = FUNC_1(VAR_0);
 posix_cred_t VAR_8 = FUNC_1(VAR_1);


 for (VAR_3 = 0; VAR_3 < VAR_7->cr_ngroups; VAR_3++) {
  VAR_6 = VAR_7->cr_groups[VAR_3];
  if ((VAR_4 = FUNC_0(VAR_1, VAR_6, &VAR_5)) != 0) {
   return VAR_4;
  }

  if (!VAR_5 && VAR_6 != VAR_8->cr_rgid && VAR_6 != VAR_8->cr_svgid) {
   *VAR_2 = 0;
   return 0;
  }
 }


 if ((VAR_4 = FUNC_0(VAR_1, VAR_7->cr_rgid, &VAR_5)) != 0) {
  return VAR_4;
 }

 if (!VAR_5 && VAR_7->cr_rgid != VAR_8->cr_rgid &&
   VAR_7->cr_rgid != VAR_8->cr_svgid) {
  *VAR_2 = 0;
  return 0;
 }


 if ((VAR_4 = FUNC_0(VAR_1, VAR_7->cr_svgid, &VAR_5)) != 0){
  return VAR_4;
 }

 if (!VAR_5 && VAR_7->cr_svgid != VAR_8->cr_rgid &&
   VAR_7->cr_svgid != VAR_8->cr_svgid) {
  *VAR_2 = 0;
  return 0;
 }

 *VAR_2 = 1;
 return 0;
}
