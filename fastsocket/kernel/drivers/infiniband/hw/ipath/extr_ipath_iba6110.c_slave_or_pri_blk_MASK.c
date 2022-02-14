
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
typedef int u16 ;
struct pci_dev {int dev; } ;
struct ipath_devdata {int ipath_ht_slave_off; int ipath_lbus_width; int ipath_lbus_speed; int ipath_lbus_info; int ipath_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ipath_devdata*,char*,...) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int,int*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int,int*) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int,int) ;
 int FUNC_7 (struct pci_dev*,int,int) ;
 int FUNC_8 (int ,int,char*,int,int) ;

__attribute__((used)) static void FUNC_9(struct ipath_devdata *VAR_2, struct pci_dev *VAR_3,
        int VAR_4, u8 VAR_5)
{
 u8 VAR_6 = 0, VAR_7, VAR_8, VAR_9;
 u16 VAR_10 = 0;
 int VAR_11;

 VAR_2->ipath_ht_slave_off = VAR_4;


 if ((VAR_5 >> 2) & 1)
  VAR_8 = 4;
 else
  VAR_8 = 0;
 FUNC_1(VAR_1, "HT%u (Link %c) connected to processor\n",
     VAR_8 ? 1 : 0,
     VAR_8 ? 'B' : 'A');

 VAR_8 += VAR_4;





 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_9 = VAR_4 + VAR_11 * 4 + 0x4;
  if (FUNC_5(VAR_3, VAR_9, &VAR_10))
   FUNC_3(VAR_2, "Couldn't read HT link control%d "
          "register\n", VAR_11);
  else if (VAR_10 & (0xf << 8)) {
   FUNC_1(VAR_1, "Clear linkctrl%d CRC Error "
       "bits %x\n", VAR_11, VAR_10 & (0xf << 8));



   FUNC_7(VAR_3, VAR_9,
           VAR_10 & (0xf << 8));
  }
 }





 for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
  VAR_9 = VAR_4 + VAR_11 * 4 + 0xd;
  if (FUNC_4(VAR_3, VAR_9, &VAR_7))
   FUNC_0(&VAR_3->dev, "Couldn't read linkerror%d "
     "of HT slave/primary block\n", VAR_11);
  else if (VAR_7 & 0xf0) {
   FUNC_1(VAR_1, "HT linkerr%d bits 0x%x set, "
       "clearing\n", VAR_7 >> 4, VAR_11);




   if (FUNC_6
       (VAR_3, VAR_9, VAR_7))
    FUNC_2("Failed write to clear HT "
       "linkerror%d\n", VAR_11);
   if (FUNC_4(VAR_3, VAR_9, &VAR_7))
    FUNC_0(&VAR_3->dev, "Couldn't reread "
      "linkerror%d of HT slave/primary "
      "block\n", VAR_11);
   else if (VAR_7 & 0xf0)
    FUNC_0(&VAR_3->dev, "HT linkerror%d bits "
      "0x%x couldn't be cleared\n",
      VAR_11, VAR_7 >> 4);
  }
 }






 if (FUNC_4(VAR_3, VAR_8 + 7, &VAR_6))
  FUNC_3(VAR_2, "Couldn't read HT link width "
         "config register\n");
 else {
  u32 VAR_12;
  switch (VAR_6 & 7) {
  case 5:
   VAR_12 = 4;
   break;
  case 4:
   VAR_12 = 2;
   break;
  case 3:
   VAR_12 = 32;
   break;
  case 1:
   VAR_12 = 16;
   break;
  case 0:
  default:
   VAR_12 = 8;
   break;
  }

  VAR_2->ipath_lbus_width = VAR_12;

  if (VAR_6 != 0x11) {
   FUNC_3(VAR_2, "Not configured for 16 bit HT "
          "(%x)\n", VAR_6);
   if (!(VAR_6 & 0xf)) {
    FUNC_2("Will ignore HT lane1 errors\n");
    VAR_2->ipath_flags |= VAR_0;
   }
  }
 }





 if (FUNC_4(VAR_3, VAR_8 + 0xd, &VAR_6))
  FUNC_3(VAR_2, "Couldn't read HT link frequency "
         "config register\n");
 else {
  u32 VAR_13;
  switch (VAR_6 & 0xf) {
  case 6:
   VAR_13 = 1000;
   break;
  case 5:
   VAR_13 = 800;
   break;
  case 4:
   VAR_13 = 600;
   break;
  case 3:
   VAR_13 = 500;
   break;
  case 2:
   VAR_13 = 400;
   break;
  case 1:
   VAR_13 = 300;
   break;
  default:



  case 0:
   VAR_13 = 200;
   break;
  }
  VAR_2->ipath_lbus_speed = VAR_13;
 }

 FUNC_8(VAR_2->ipath_lbus_info, sizeof(VAR_2->ipath_lbus_info),
  "HyperTransport,%uMHz,x%u\n",
  VAR_2->ipath_lbus_speed,
  VAR_2->ipath_lbus_width);
}
