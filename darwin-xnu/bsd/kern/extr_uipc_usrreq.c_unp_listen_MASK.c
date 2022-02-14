
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unpcb {int unp_flags; int unp_peercred; } ;
typedef int proc_t ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct unpcb *VAR_1, proc_t VAR_2)
{
 kauth_cred_t VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3, &VAR_1->unp_peercred);
 FUNC_2(&VAR_3);
 VAR_1->unp_flags |= VAR_0;
 return (0);
}
