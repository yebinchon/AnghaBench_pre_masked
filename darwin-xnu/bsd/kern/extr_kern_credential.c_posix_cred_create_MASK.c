
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int temp_cred ;
struct ucred {int cr_posix; } ;
typedef int * posix_cred_t ;
typedef int kauth_cred_t ;


 int FUNC_0 (struct ucred*,int) ;
 int FUNC_1 (struct ucred*) ;

kauth_cred_t
FUNC_2(posix_cred_t VAR_0)
{
 struct ucred VAR_1;

 FUNC_0(&VAR_1, sizeof(VAR_1));
 VAR_1.cr_posix = *VAR_0;

 return FUNC_1(&VAR_1);
}
