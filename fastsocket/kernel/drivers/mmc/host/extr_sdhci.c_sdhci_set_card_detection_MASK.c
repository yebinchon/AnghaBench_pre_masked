
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdhci_host*,int) ;
 int FUNC_1 (struct sdhci_host*,int) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_3, bool VAR_4)
{
 u32 VAR_5 = VAR_1 | VAR_0;

 if (VAR_3->quirks & VAR_2)
  return;

 if (VAR_4)
  FUNC_1(VAR_3, VAR_5);
 else
  FUNC_0(VAR_3, VAR_5);
}
