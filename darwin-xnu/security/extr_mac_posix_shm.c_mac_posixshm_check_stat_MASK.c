
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pshminfo {int pshm_label; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct pshminfo*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_1(kauth_cred_t VAR_2, struct pshminfo *VAR_3)
{
 int VAR_4 = 0;







 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_3->pshm_label);

 return (VAR_4);
}
