
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpc85xx_mc_pdata {scalar_t__ mc_vbase; } ;
struct mem_ctl_info {struct mpc85xx_mc_pdata* pvt_info; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct mem_ctl_info *VAR_1, char *VAR_2)
{
 struct mpc85xx_mc_pdata *VAR_3 = VAR_1->pvt_info;
 return FUNC_1(VAR_2, "0x%08x",
         FUNC_0(VAR_3->mc_vbase + VAR_0));
}
