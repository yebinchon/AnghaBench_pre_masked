
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pseminfo {int psem_label; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct pseminfo*,int ,char const*) ;
 int VAR_0 ;

void
FUNC_1(kauth_cred_t VAR_1, struct pseminfo *VAR_2,
    const char *VAR_3)
{

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_2->psem_label, VAR_3);
}
