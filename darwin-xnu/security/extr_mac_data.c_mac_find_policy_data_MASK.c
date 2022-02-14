
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_policy_conf {int mpc_data; } ;
typedef int mac_policy_handle_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,void**,size_t*) ;
 struct mac_policy_conf* FUNC_1 (int const) ;

int
FUNC_2(const mac_policy_handle_t VAR_1, const char *VAR_2,
    void **VAR_3, size_t *VAR_4)
{
 struct mac_policy_conf *VAR_5;
 int VAR_6 = VAR_0;

 if ((VAR_5 = FUNC_1(VAR_1)) != ((void*)0))
  VAR_6 = FUNC_0(VAR_5->mpc_data, VAR_2, VAR_3, VAR_4);
 return (VAR_6);
}
