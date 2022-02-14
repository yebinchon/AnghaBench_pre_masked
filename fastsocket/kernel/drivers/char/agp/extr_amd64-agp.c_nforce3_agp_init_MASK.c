
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; int bus; } ;
struct TYPE_5__ {unsigned int size; int size_value; } ;
struct TYPE_4__ {struct pci_dev* misc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ) ;
 unsigned int FUNC_2 () ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_2__* VAR_9 ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (struct pci_dev*) ;
 struct pci_dev* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 int FUNC_8 (struct pci_dev*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 struct pci_dev *VAR_15;
 int VAR_16;
 unsigned VAR_17 = FUNC_2();

 FUNC_3(&VAR_10->dev, "setting up Nforce3 AGP\n");

 VAR_15 = FUNC_6(VAR_10->bus, FUNC_1(11, 0));
 if (VAR_15 == ((void*)0)) {
  FUNC_3(&VAR_10->dev, "can't find Nforce3 secondary device\n");
  return -VAR_1;
 }

 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_9); VAR_16++)
  if (VAR_9[VAR_16].size == VAR_17)
   break;

 if (VAR_16 == FUNC_0(VAR_9)) {
  FUNC_3(&VAR_10->dev, "no NForce3 size found for %d\n", VAR_17);
  return -VAR_1;
 }

 FUNC_7(VAR_15, VAR_7, &VAR_11);
 VAR_11 &= ~(0xf);
 VAR_11 |= VAR_9[VAR_16].size_value;
 FUNC_8(VAR_15, VAR_7, VAR_11);


 FUNC_7 (FUNC_4(0)->misc, VAR_0,
          &VAR_12);


 if ( (VAR_12 & 0x7fff) >> (32 - 25) ) {
  FUNC_3(&VAR_10->dev, "aperture base > 4G\n");
  return -VAR_1;
 }

 VAR_12 = (VAR_12 & 0x7fff) << 25;

 FUNC_7(VAR_10, VAR_2, &VAR_13);
 VAR_13 &= ~VAR_8;
 VAR_13 |= VAR_12;
 FUNC_8(VAR_10, VAR_2, VAR_13);

 VAR_14 = VAR_12 + (VAR_17 * 1024 * 1024) - 1;
 FUNC_8(VAR_15, VAR_3, VAR_12);
 FUNC_8(VAR_15, VAR_5, VAR_14);
 FUNC_8(VAR_15, VAR_4, VAR_12);
 FUNC_8(VAR_15, VAR_6, VAR_14);

 FUNC_5(VAR_15);

 return 0;
}
