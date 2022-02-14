
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {scalar_t__ version; int lock; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_3, bool VAR_4)
{
 struct sdhci_host *VAR_5;
 u16 VAR_6;
 unsigned long VAR_7;

 VAR_5 = FUNC_0(VAR_3);


 if (VAR_5->version < VAR_2)
  return;

 FUNC_3(&VAR_5->lock, VAR_7);

 VAR_6 = FUNC_1(VAR_5, VAR_1);





 if (VAR_4 && !(VAR_6 & VAR_0)) {
  VAR_6 |= VAR_0;
  FUNC_2(VAR_5, VAR_6, VAR_1);
 } else if (!VAR_4 && (VAR_6 & VAR_0)) {
  VAR_6 &= ~VAR_0;
  FUNC_2(VAR_5, VAR_6, VAR_1);
 }

 FUNC_4(&VAR_5->lock, VAR_7);
}
