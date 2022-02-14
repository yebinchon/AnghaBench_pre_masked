
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sisusb_usb_data {int vramsize; TYPE_1__* sisusb_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,char*,char const*,int) ;
 int FUNC_1 (struct sisusb_usb_data*,int ,int,int*) ;

__attribute__((used)) static void
FUNC_2(struct sisusb_usb_data *VAR_1)
{
 u8 VAR_2, VAR_3, VAR_4;
 int VAR_5 = 0;
 char *VAR_6 = ((void*)0);
 const char *VAR_7[] = { "SDR SDRAM", "SDR SGRAM",
     "DDR SDRAM", "DDR SGRAM" };
 static const int VAR_8[4] = {64, 64, 128, 128};
 static const int VAR_9[4] = {32, 32, 64, 64};
 static const int VAR_10[4] = {64+32, 64+32 , (64+32)*2, (64+32)*2};

 FUNC_1(VAR_1, VAR_0, 0x14, &VAR_2);
 FUNC_1(VAR_1, VAR_0, 0x15, &VAR_3);
 FUNC_1(VAR_1, VAR_0, 0x3a, &VAR_4);
 VAR_1->vramsize = (1 << ((VAR_2 & 0xf0) >> 4)) * 1024 * 1024;
 VAR_4 &= 0x03;
 switch ((VAR_2 >> 2) & 0x03) {
 case 0: VAR_6 = "1 ch/1 r";
  if (VAR_3 & 0x10) {
   VAR_5 = 32;
  } else {
   VAR_5 = VAR_8[(VAR_2 & 0x03)];
  }
  break;
 case 1: VAR_6 = "1 ch/2 r";
  VAR_1->vramsize <<= 1;
  VAR_5 = VAR_8[(VAR_2 & 0x03)];
  break;
 case 2: VAR_6 = "asymmeric";
  VAR_1->vramsize += VAR_1->vramsize/2;
  VAR_5 = VAR_10[(VAR_2 & 0x03)];
  break;
 case 3: VAR_6 = "2 channel";
  VAR_1->vramsize <<= 1;
  VAR_5 = VAR_9[(VAR_2 & 0x03)];
  break;
 }

 FUNC_0(&VAR_1->sisusb_dev->dev, "%dMB %s %s, bus width %d\n", (VAR_1->vramsize >> 20), VAR_6,
   VAR_7[VAR_4], VAR_5);
}
