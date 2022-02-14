
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sdhci_host*,int,int) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_5)
{
 u32 VAR_6 = VAR_1 | VAR_3;
 u32 VAR_7 = VAR_2 | VAR_0;

 if (VAR_5->flags & VAR_4)
  FUNC_0(VAR_5, VAR_6, VAR_7);
 else
  FUNC_0(VAR_5, VAR_7, VAR_6);
}
