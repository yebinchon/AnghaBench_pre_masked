
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_0, int VAR_1)
{
 u8 VAR_2;

 VAR_2 = FUNC_0(VAR_0->ioaddr + 0xC0);

 if (VAR_1)
  VAR_2 |= 0x01;
 else
  VAR_2 &= ~0x01;

 FUNC_1(VAR_2, VAR_0->ioaddr + 0xC0);
}
