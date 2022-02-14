
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef int kauth_cred_t ;
struct TYPE_4__ {int p_acflag; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

int
FUNC_3(proc_t VAR_0)
{
 kauth_cred_t VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_2(VAR_1, &VAR_0->p_acflag);
 FUNC_1(&VAR_1);
 return(VAR_2);
}
