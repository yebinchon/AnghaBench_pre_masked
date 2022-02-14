
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int caps; } ;
struct mmc_bus_ops {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*,struct mmc_bus_ops const*) ;
 struct mmc_bus_ops VAR_1 ;
 struct mmc_bus_ops VAR_2 ;

__attribute__((used)) static void FUNC_1(struct mmc_host *VAR_3)
{
 const struct mmc_bus_ops *VAR_4;

 if (VAR_3->caps & VAR_0)
  VAR_4 = &VAR_2;
 else
  VAR_4 = &VAR_1;
 FUNC_0(VAR_3, VAR_4);
}
