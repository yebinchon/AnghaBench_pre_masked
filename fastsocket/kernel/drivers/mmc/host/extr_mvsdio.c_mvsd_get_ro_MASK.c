
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvsd_host {scalar_t__ gpio_write_protect; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct mvsd_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1)
{
 struct mvsd_host *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->gpio_write_protect)
  return FUNC_0(VAR_2->gpio_write_protect);





 return -VAR_0;
}
