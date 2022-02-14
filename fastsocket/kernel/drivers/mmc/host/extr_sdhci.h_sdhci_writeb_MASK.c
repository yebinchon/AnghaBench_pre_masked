
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct sdhci_host *VAR_0, u8 VAR_1, int VAR_2)
{
 FUNC_0(VAR_1, VAR_0->ioaddr + VAR_2);
}
