
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pshminfo {int pshm_label; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct pshminfo*,int ,char const*) ;
 int VAR_0 ;

void
FUNC_1(kauth_cred_t VAR_1, struct pshminfo *VAR_2,
    const char *VAR_3)
{

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->pshm_label, VAR_3);
}
