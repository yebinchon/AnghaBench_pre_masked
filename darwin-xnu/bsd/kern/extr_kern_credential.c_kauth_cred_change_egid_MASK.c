
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* posix_cred_t ;
typedef int kauth_cred_t ;
typedef scalar_t__ gid_t ;
struct TYPE_3__ {int cr_ngroups; scalar_t__* cr_groups; int cr_flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(kauth_cred_t VAR_1, gid_t VAR_2)
{
 int VAR_3;
 int VAR_4 = 1;



 gid_t VAR_5 = FUNC_1(VAR_1);
 posix_cred_t VAR_6 = FUNC_3(VAR_1);


 for (VAR_3 = 1; VAR_3 < VAR_6->cr_ngroups; VAR_3++) {




  if (VAR_6->cr_groups[VAR_3] == VAR_2) {
   VAR_6->cr_groups[VAR_3] = VAR_5;
   FUNC_0("kauth_cred_change_egid: unset displaced\n");
   VAR_4 = 0;
   break;
  }
 }
 VAR_6->cr_groups[0] = VAR_2;

 return (VAR_4);
}
