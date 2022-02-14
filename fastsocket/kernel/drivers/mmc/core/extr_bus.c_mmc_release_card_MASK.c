
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_card {struct mmc_card* info; } ;
struct device {int dummy; } ;


 struct mmc_card* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mmc_card*) ;
 int FUNC_2 (struct mmc_card*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct mmc_card *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1);

 if (VAR_1->info)
  FUNC_1(VAR_1->info);

 FUNC_1(VAR_1);
}
