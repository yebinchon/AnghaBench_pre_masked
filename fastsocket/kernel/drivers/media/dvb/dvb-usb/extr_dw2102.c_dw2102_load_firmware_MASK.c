
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int idProduct; } ;
struct usb_device {TYPE_1__ descriptor; int dev; } ;
struct firmware {int size; int data; } ;
struct TYPE_10__ {int * i2c_algo; TYPE_2__* adapter; } ;
struct TYPE_9__ {void* rc_key_map_size; void* rc_key_map; } ;
struct TYPE_8__ {void* rc_key_map_size; void* rc_key_map; } ;
struct TYPE_7__ {int * tuner_attach; } ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int FUNC_1 (struct usb_device*,int,int,int ,int*,int,int ) ;
 int FUNC_2 (char*,...) ;
 int VAR_9 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (int,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int) ;
 void* VAR_10 ;
 void* VAR_11 ;
 int FUNC_8 (struct firmware const**,char const*,int *) ;
 TYPE_3__ VAR_12 ;

__attribute__((used)) static int FUNC_9(struct usb_device *VAR_13,
   const struct firmware *VAR_14)
{
 u8 *VAR_15, *VAR_16;
 int VAR_17 = 0, VAR_18;
 u8 VAR_19;
 u8 VAR_20[] = {0, 0, 0, 0, 0, 0, 0};
 const struct firmware *VAR_21;
 const char *VAR_22 = "dvb-usb-dw2101.fw";

 switch (VAR_13->descriptor.idProduct) {
 case 0x2101:
  VAR_17 = FUNC_8(&VAR_21, VAR_22, &VAR_13->dev);
  if (VAR_17 != 0) {
   FUNC_2(VAR_9, VAR_22);
   return VAR_17;
  }
  break;
 default:
  VAR_21 = VAR_14;
  break;
 }
 FUNC_3("start downloading DW210X firmware");
 VAR_16 = FUNC_5(VAR_21->size, VAR_3);
 VAR_19 = 1;

 FUNC_1(VAR_13, 0xa0, 0x7f92, 0, &VAR_19, 1, VAR_1);
 FUNC_1(VAR_13, 0xa0, 0xe600, 0, &VAR_19, 1, VAR_1);

 if (VAR_16 != ((void*)0)) {
  FUNC_6(VAR_16, VAR_21->data, VAR_21->size);
  for (VAR_18 = 0; VAR_18 < VAR_21->size; VAR_18 += 0x40) {
   VAR_15 = (u8 *) VAR_16 + VAR_18;
   if (FUNC_1(VAR_13, 0xa0, VAR_18, 0, VAR_15 , 0x40,
     VAR_1) != 0x40) {
    FUNC_2("error while transferring firmware");
    VAR_17 = -VAR_2;
    break;
   }
  }

  VAR_19 = 0;
  if (VAR_17 || FUNC_1(VAR_13, 0xa0, 0x7f92, 0, &VAR_19, 1,
     VAR_1) != 1) {
   FUNC_2("could not restart the USB controller CPU.");
   VAR_17 = -VAR_2;
  }
  if (VAR_17 || FUNC_1(VAR_13, 0xa0, 0xe600, 0, &VAR_19, 1,
     VAR_1) != 1) {
   FUNC_2("could not restart the USB controller CPU.");
   VAR_17 = -VAR_2;
  }

  switch (VAR_13->descriptor.idProduct) {
  case 129:
   VAR_12.rc_key_map = VAR_10;
   VAR_12.rc_key_map_size =
     FUNC_0(VAR_10);
   break;
  case 128:
   VAR_8.rc_key_map = VAR_11;
   VAR_8.rc_key_map_size =
     FUNC_0(VAR_11);
  case 131:
   VAR_19 = 1;
   FUNC_1(VAR_13, 0xc4, 0x0000, 0, &VAR_19, 1,
     VAR_1);

  case 130:
   VAR_19 = 0;
   FUNC_1(VAR_13, 0xbf, 0x0040, 0, &VAR_19, 0,
     VAR_1);
   break;
  case 133:
  case 132:
   FUNC_1(VAR_13, 0xbf, 0x0040, 0, &VAR_19, 0,
     VAR_1);
   FUNC_1(VAR_13, 0xb9, 0x0000, 0, &VAR_20[0], 2,
     VAR_0);

   FUNC_1(VAR_13, 0xb5, 0, 0, &VAR_20[0], 2,
     VAR_0);
   if ((VAR_20[0] == 0xa1) || (VAR_20[0] == 0x80)) {
    VAR_6.i2c_algo = &VAR_5;
    VAR_6.adapter->tuner_attach = &VAR_7;
    break;
   } else {

    VAR_20[0] = 0xd0;
    VAR_20[1] = 1;
    VAR_20[2] = 0;
    FUNC_1(VAR_13, 0xc2, 0, 0, &VAR_20[0], 3,
      VAR_1);
    FUNC_1(VAR_13, 0xc3, 0xd1, 0, &VAR_20[0], 3,
      VAR_0);
    if (VAR_20[2] == 0x11) {
     VAR_6.i2c_algo = &VAR_4;
     break;
    }
   }
  case 0x2101:
   FUNC_1(VAR_13, 0xbc, 0x0030, 0, &VAR_20[0], 2,
     VAR_0);
   FUNC_1(VAR_13, 0xba, 0x0000, 0, &VAR_20[0], 7,
     VAR_0);
   FUNC_1(VAR_13, 0xba, 0x0000, 0, &VAR_20[0], 7,
     VAR_0);
   FUNC_1(VAR_13, 0xb9, 0x0000, 0, &VAR_20[0], 2,
     VAR_0);
   break;
  }

  FUNC_7(100);
  FUNC_4(VAR_16);
 }
 return VAR_17;
}
