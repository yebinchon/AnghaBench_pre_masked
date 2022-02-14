
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef TYPE_1__* posix_cred_t ;
typedef int kauth_cred_t ;
typedef int gid_t ;
struct TYPE_3__ {int cr_flags; int cr_groups; int cr_ngroups; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,int ,int) ;
 TYPE_1__* FUNC_5 (int ) ;

int
FUNC_6(kauth_cred_t VAR_4, gid_t *VAR_5, int *VAR_6)
{
 int VAR_7 = VAR_1;
 posix_cred_t VAR_8;

 VAR_8 = FUNC_5(VAR_4);
 if (VAR_6) {
  VAR_7 = FUNC_1(*VAR_6, VAR_8->cr_ngroups);
  *VAR_6 = VAR_7;
 }

 FUNC_4(VAR_5, VAR_8->cr_groups, sizeof(gid_t) * VAR_7);

 return 0;
}
