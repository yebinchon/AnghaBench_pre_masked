
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_2, u8 VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 & ~0x3;
 int VAR_6 = (VAR_4 & 0x3) * 8;


 if (VAR_4 == VAR_1)
  VAR_3 &= ~VAR_0;

 FUNC_0(VAR_2->ioaddr + VAR_5 , 0xff << VAR_6, VAR_3 << VAR_6);
}
