
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csrctl_args {int usersize; int useraddr; } ;
typedef int csr_config_t ;
typedef int config ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct csrctl_args *VAR_1)
{
 csr_config_t VAR_2 = 0;
 int VAR_3 = 0;

 if (VAR_1->useraddr == 0 || VAR_1->usersize != sizeof(VAR_2))
  return VAR_0;

 VAR_3 = FUNC_1(&VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(&VAR_2, VAR_1->useraddr, sizeof(VAR_2));
}
