
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {int flags; int data; } ;
struct mmc_data {int blocks; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_7,
 struct mmc_data *VAR_8)
{
 u16 VAR_9;

 if (VAR_8 == ((void*)0))
  return;

 FUNC_0(!VAR_7->data);

 VAR_9 = VAR_3;
 if (VAR_8->blocks > 1)
  VAR_9 |= VAR_5;
 if (VAR_8->flags & VAR_0)
  VAR_9 |= VAR_6;
 if (VAR_7->flags & VAR_1)
  VAR_9 |= VAR_4;

 FUNC_1(VAR_7, VAR_9, VAR_2);
}
