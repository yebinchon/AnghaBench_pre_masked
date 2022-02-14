
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; int lock; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_2, int VAR_3)
{
 struct sdhci_host *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_0(VAR_2);

 FUNC_4(&VAR_4->lock, VAR_5);

 if (VAR_4->flags & VAR_0)
  goto out;

 if (VAR_3)
  FUNC_3(VAR_4, VAR_1);
 else
  FUNC_2(VAR_4, VAR_1);
out:
 FUNC_1();

 FUNC_5(&VAR_4->lock, VAR_5);
}
