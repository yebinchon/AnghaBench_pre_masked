
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_policy_conf {char* mpc_name; char* mpc_fullname; } ;


 int FUNC_0 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_1(struct mac_policy_conf *VAR_0)
{
 FUNC_0("Policy '%s' = '%s' ready\n", VAR_0->mpc_name, VAR_0->mpc_fullname);
}
