
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int** VAR_4 ;
 int** VAR_5 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int) ;
 int** VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_7, const u8 VAR_8)
{
 struct pci_dev *VAR_9 = FUNC_3(VAR_7->hwif->dev);
 u32 VAR_10 = 0;
 u8 VAR_11 = FUNC_2(VAR_7), VAR_12, VAR_13;

 FUNC_0(VAR_9, VAR_11, &VAR_10);

 VAR_10 &= 0xc0c00fff;
 VAR_12 = (VAR_10 & 0x08) ? VAR_1 : VAR_0;
 if (VAR_8 >= VAR_2) {
  VAR_10 &= ~0x04;
  VAR_13 = VAR_8 - VAR_2 + 5;
 } else
  VAR_13 = VAR_8 - VAR_3;
 VAR_10 |= VAR_5[VAR_12][VAR_13] << 12;
 VAR_10 |= VAR_4[VAR_12][VAR_13] << 16;
 VAR_10 |= VAR_6[VAR_12][VAR_13] << 24;

 FUNC_1(VAR_9, VAR_11, VAR_10);
}
