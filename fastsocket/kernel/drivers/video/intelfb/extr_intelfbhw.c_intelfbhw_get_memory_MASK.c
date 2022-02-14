
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int device; } ;


 int FUNC_0 (char*,...) ;


 int VAR_0 ;




 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 struct pci_dev* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;
 int FUNC_7 (struct pci_dev*,int) ;

int FUNC_8(struct pci_dev *VAR_5, int *VAR_6,
    int *VAR_7)
{
 struct pci_dev *VAR_8;
 u16 VAR_9;
 int VAR_10;

 if (!VAR_5 || !VAR_6 || !VAR_7)
  return 1;


 if (!(VAR_8 = FUNC_5(0, FUNC_3(0, 0)))) {
  FUNC_0("cannot find bridge device\n");
  return 1;
 }


 VAR_9 = 0;
 FUNC_6(VAR_8, VAR_2, &VAR_9);
 FUNC_4(VAR_8);

 switch (VAR_5->device) {
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:



  if (FUNC_7(VAR_5, 2) & 0x08000000)
   *VAR_6 = FUNC_2(128);
  else
   *VAR_6 = FUNC_2(256);
  break;
 default:
  if ((VAR_9 & VAR_4) == VAR_3)
   *VAR_6 = FUNC_2(64);
  else
   *VAR_6 = FUNC_2(128);
  break;
 }



 VAR_10 = (*VAR_6 / FUNC_2(1)) + 4;
 switch(VAR_5->device) {
 case 136:
 case 135:
  switch (VAR_9 & VAR_0) {
  case 146:
   *VAR_7 = FUNC_1(512) - FUNC_1(VAR_10);
   return 0;
  case 147:
   *VAR_7 = FUNC_2(1) - FUNC_1(VAR_10);
   return 0;
  case 145:
   *VAR_7 = FUNC_2(8) - FUNC_1(VAR_10);
   return 0;
  case 148:
   FUNC_0("only local memory found\n");
   return 1;
  case 149:
   FUNC_0("video memory is disabled\n");
   return 1;
  default:
   FUNC_0("unexpected GMCH_GMS value: 0x%02x\n",
    VAR_9 & VAR_0);
   return 1;
  }
  break;
 default:
  switch (VAR_9 & VAR_1) {
  case 142:
   *VAR_7 = FUNC_2(1) - FUNC_1(VAR_10);
   return 0;
  case 140:
   *VAR_7 = FUNC_2(4) - FUNC_1(VAR_10);
   return 0;
  case 139:
   *VAR_7 = FUNC_2(8) - FUNC_1(VAR_10);
   return 0;
  case 143:
   *VAR_7 = FUNC_2(16) - FUNC_1(VAR_10);
   return 0;
  case 141:
   *VAR_7 = FUNC_2(32) - FUNC_1(VAR_10);
   return 0;
  case 138:
   *VAR_7 = FUNC_2(48) - FUNC_1(VAR_10);
   return 0;
  case 137:
   *VAR_7 = FUNC_2(64) - FUNC_1(VAR_10);
   return 0;
  case 144:
   FUNC_0("video memory is disabled\n");
   return 0;
  default:
   FUNC_0("unexpected GMCH_GMS value: 0x%02x\n",
    VAR_9 & VAR_1);
   return 1;
  }
 }
}
