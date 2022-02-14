
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_size_t ;
typedef int user_addr_t ;
typedef int proc_t ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int,int,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_4(proc_t VAR_2, user_addr_t VAR_3,
    user_size_t VAR_4, int VAR_5, int VAR_6, int *VAR_7)
{
 kauth_cred_t VAR_8;
 int VAR_9;






 if (!FUNC_3(VAR_2))
  return (0);

 VAR_8 = FUNC_1(VAR_2);
 FUNC_0(VAR_1, VAR_2, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(&VAR_8);

 return (VAR_9);
}
