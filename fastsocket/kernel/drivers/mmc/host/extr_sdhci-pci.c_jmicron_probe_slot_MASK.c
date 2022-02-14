
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_pci_slot {TYPE_3__* host; TYPE_2__* chip; } ;
struct TYPE_6__ {int quirks; scalar_t__ ioaddr; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {scalar_t__ revision; scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sdhci_pci_slot *VAR_5)
{
 if (VAR_5->chip->pdev->revision == 0) {
  u16 VAR_6;

  VAR_6 = FUNC_1(VAR_5->host->ioaddr + VAR_1);
  VAR_6 = (VAR_6 & VAR_3) >>
   VAR_4;






  if (VAR_6 < 0xAC)
   VAR_5->host->quirks |= VAR_2;
 }





 if (VAR_5->chip->pdev->device == VAR_0)
  FUNC_0(VAR_5->host, 1);

 return 0;
}
