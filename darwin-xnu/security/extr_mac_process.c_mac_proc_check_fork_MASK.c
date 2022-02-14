
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int proc_t ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_4(proc_t VAR_2)
{
 kauth_cred_t VAR_3;
 int VAR_4;






 if (!FUNC_3(VAR_2))
  return 0;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_1, VAR_3, VAR_2);
 FUNC_2(&VAR_3);

 return (VAR_4);
}
