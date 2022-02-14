
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;
struct TYPE_6__ {TYPE_1__* hwif; } ;
typedef TYPE_2__ ide_drive_t ;
struct TYPE_5__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t const VAR_2 ;
 int** VAR_3 ;
 int** VAR_4 ;
 int FUNC_0 (struct pci_dev*,size_t,int*) ;
 int FUNC_1 (struct pci_dev*,size_t,int) ;
 size_t FUNC_2 (TYPE_2__*) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(ide_drive_t *VAR_5, const u8 VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_3(VAR_5->hwif->dev);
 u32 VAR_8 = 0;
 u8 VAR_9 = FUNC_2(VAR_5), VAR_10, VAR_11;

 FUNC_0(VAR_7, VAR_9, &VAR_8);

 VAR_8 |= 0x04;
 VAR_8 &= 0xfffff00f;

 VAR_10 = (VAR_8 & 0x08) ? VAR_1 : VAR_0;
 VAR_11 = VAR_6 - VAR_2;
 VAR_8 |= VAR_4[VAR_10][VAR_11] << 4;
 VAR_8 |= VAR_3[VAR_10][VAR_11] << 8;

 FUNC_1(VAR_7, VAR_9, VAR_8);
}
