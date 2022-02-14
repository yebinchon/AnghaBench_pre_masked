
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct semid_kernel {int label; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct semid_kernel*,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(kauth_cred_t VAR_2, struct semid_kernel *VAR_3,
    size_t VAR_4)
{
 int VAR_5;







 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_3->label,
     VAR_4);

 return(VAR_5);
}
