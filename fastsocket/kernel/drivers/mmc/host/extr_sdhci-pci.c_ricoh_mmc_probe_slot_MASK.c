
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_pci_slot {TYPE_1__* host; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct sdhci_pci_slot *VAR_7)
{
 VAR_7->host->caps =
  ((0x21 << VAR_5)
   & VAR_4) |

  ((0x21 << VAR_3)
   & VAR_2) |

  VAR_6 |
  VAR_1 |
  VAR_0;
 return 0;
}
