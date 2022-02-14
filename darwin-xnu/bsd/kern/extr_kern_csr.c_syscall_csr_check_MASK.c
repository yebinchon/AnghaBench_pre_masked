
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csrctl_args {scalar_t__ useraddr; int usersize; } ;
typedef int mask ;
typedef int csr_config_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct csrctl_args *VAR_1)
{
 csr_config_t VAR_2 = 0;
 int VAR_3 = 0;

 if (VAR_1->useraddr == 0 || VAR_1->usersize != sizeof(VAR_2))
  return VAR_0;

 VAR_3 = FUNC_0(VAR_1->useraddr, &VAR_2, sizeof(VAR_2));
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_2);
}
