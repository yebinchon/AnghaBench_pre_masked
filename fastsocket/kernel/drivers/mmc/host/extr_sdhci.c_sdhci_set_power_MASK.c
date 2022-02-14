
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int quirks; int pwr; } ;


 int FUNC_0 () ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_8, unsigned short VAR_9)
{
 u8 VAR_10;

 if (VAR_9 == (unsigned short)-1)
  VAR_10 = 0;
 else {
  switch (1 << VAR_9) {
  case 132:
   VAR_10 = VAR_0;
   break;
  case 131:
  case 130:
   VAR_10 = VAR_1;
   break;
  case 129:
  case 128:
   VAR_10 = VAR_2;
   break;
  default:
   FUNC_0();
  }
 }

 if (VAR_8->pwr == VAR_10)
  return;

 VAR_8->pwr = VAR_10;

 if (VAR_10 == 0) {
  FUNC_2(VAR_8, 0, VAR_3);
  return;
 }





 if (!(VAR_8->quirks & VAR_7))
  FUNC_2(VAR_8, 0, VAR_3);





 if (VAR_8->quirks & VAR_6)
  FUNC_2(VAR_8, VAR_10, VAR_3);

 VAR_10 |= VAR_4;

 FUNC_2(VAR_8, VAR_10, VAR_3);





 if (VAR_8->quirks & VAR_5)
  FUNC_1(10);
}
