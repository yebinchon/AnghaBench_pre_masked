
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int revision; } ;
struct TYPE_3__ {int throttle; int fdma; scalar_t__ bmisx; } ;
struct TYPE_4__ {TYPE_1__ piix4; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_7)
{
 u8 VAR_8 = 0;
 u8 VAR_9 = 0;


 if (!VAR_7)
  return -VAR_1;





 switch (VAR_7->revision) {
 case 0:
  FUNC_0((VAR_0, "Found PIIX4 A-step\n"));
  break;
 case 1:
  FUNC_0((VAR_0, "Found PIIX4 B-step\n"));
  break;
 case 2:
  FUNC_0((VAR_0, "Found PIIX4E\n"));
  break;
 case 3:
  FUNC_0((VAR_0, "Found PIIX4M\n"));
  break;
 default:
  FUNC_0((VAR_0, "Found unknown PIIX4\n"));
  break;
 }

 switch (VAR_7->revision) {

 case 0:
 case 1:







  VAR_6.piix4.throttle = 1;

 case 2:
 case 3:
  VAR_7 = FUNC_2(VAR_5,
         VAR_3,
         VAR_2, VAR_2, ((void*)0));
  if (VAR_7) {
   VAR_6.piix4.bmisx = FUNC_4(VAR_7, 4);
   FUNC_1(VAR_7);
  }
  VAR_7 = FUNC_2(VAR_5,
         VAR_4,
         VAR_2, VAR_2, ((void*)0));
  if (VAR_7) {
   FUNC_3(VAR_7, 0x76, &VAR_8);
   FUNC_3(VAR_7, 0x77, &VAR_9);
   if ((VAR_8 & 0x80) || (VAR_9 & 0x80))
    VAR_6.piix4.fdma = 1;
   FUNC_1(VAR_7);
  }

  break;
 }

 if (VAR_6.piix4.bmisx)
  FUNC_0((VAR_0,
      "Bus master activity detection (BM-IDE) erratum enabled\n"));
 if (VAR_6.piix4.fdma)
  FUNC_0((VAR_0,
      "Type-F DMA livelock erratum (C3 disabled)\n"));

 return 0;
}
