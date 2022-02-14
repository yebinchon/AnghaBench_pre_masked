
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int proc_t ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_4(proc_t VAR_2, proc_t VAR_3, unsigned int VAR_4)
{
 kauth_cred_t VAR_5;
 int VAR_6 = 0;






 if (!FUNC_3(VAR_2))
  return 0;

 VAR_5 = FUNC_1(VAR_2);
 FUNC_0(VAR_1, VAR_5, VAR_3, VAR_4);
 FUNC_2(&VAR_5);

 return (VAR_6);
}
