
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * kauth_cred_t ;
typedef int kauth_action_t ;


 int FUNC_0 (int ,int *,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;

int
FUNC_2(kauth_cred_t VAR_1, kauth_action_t VAR_2)
{
 if (VAR_1 == ((void*)0))
  FUNC_1("auth against NULL credential");

 return(FUNC_0(VAR_0, VAR_1, VAR_2, 0, 0, 0, 0));

}
