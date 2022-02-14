
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ata_link {TYPE_2__* ap; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct ata_link*,unsigned int) ;
 int FUNC_1 (struct pci_dev*,unsigned int,int *) ;
 struct pci_dev* FUNC_2 (int ) ;

__attribute__((used)) static u32 FUNC_3(struct ata_link *VAR_2,
       unsigned int VAR_3, u32 *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_2(VAR_2->ap->host->dev);
 unsigned int VAR_6 = FUNC_0(VAR_2, VAR_3);

 if (VAR_3 == VAR_1)
  return -VAR_0;

 FUNC_1(VAR_5, VAR_6, VAR_4);
 return 0;
}
