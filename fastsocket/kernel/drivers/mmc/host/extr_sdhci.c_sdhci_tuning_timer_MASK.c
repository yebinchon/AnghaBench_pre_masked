
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int lock; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_1)
{
 struct sdhci_host *VAR_2;
 unsigned long VAR_3;

 VAR_2 = (struct sdhci_host *)VAR_1;

 FUNC_0(&VAR_2->lock, VAR_3);

 VAR_2->flags |= VAR_0;

 FUNC_1(&VAR_2->lock, VAR_3);
}
