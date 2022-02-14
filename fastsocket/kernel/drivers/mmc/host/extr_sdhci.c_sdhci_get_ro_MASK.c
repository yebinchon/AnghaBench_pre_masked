
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int flags; int quirks; int lock; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_4)
{
 struct sdhci_host *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_4);

 FUNC_2(&VAR_5->lock, VAR_6);

 if (VAR_5->flags & VAR_0)
  VAR_7 = 0;
 else
  VAR_7 = FUNC_1(VAR_5, VAR_1);

 FUNC_3(&VAR_5->lock, VAR_6);

 if (VAR_5->quirks & VAR_2)
  return !!(VAR_7 & VAR_3);
 return !(VAR_7 & VAR_3);
}
