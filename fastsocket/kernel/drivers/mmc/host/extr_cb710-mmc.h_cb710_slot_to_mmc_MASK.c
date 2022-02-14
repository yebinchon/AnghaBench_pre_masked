
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct cb710_slot {TYPE_1__ pdev; } ;


 struct mmc_host* FUNC_0 (int *) ;

__attribute__((used)) static inline struct mmc_host *FUNC_1(struct cb710_slot *VAR_0)
{
 return FUNC_0(&VAR_0->pdev.dev);
}
