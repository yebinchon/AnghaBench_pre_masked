
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hue; } ;
struct uvd {int videosize; scalar_t__ debug; int video_endp; TYPE_2__* dev; TYPE_1__ vpic; } ;
struct TYPE_5__ {int dev; } ;


 short VAR_0 ;
 short VAR_1 ;
 int FUNC_0 (short,short,int) ;




 int FUNC_1 (int *,char*,short) ;
 short VAR_2 ;
 int FUNC_2 (struct uvd*,int,int) ;
 int FUNC_3 (struct uvd*,int ,int,int) ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_6(struct uvd *VAR_14)
{
 unsigned short VAR_15, VAR_16, VAR_17;

 FUNC_3(VAR_14, 0, 0x0000, 0x0100);

 switch (VAR_14->videosize) {
 case 131:
  FUNC_3(VAR_14, 0, 0x0050, 0x0111);
  FUNC_3(VAR_14, 0, 0x00d0, 0x0111);
  break;
 case 130:
 case 129:
 case 128:
  FUNC_3(VAR_14, 0, 0x0040, 0x0111);
  FUNC_3(VAR_14, 0, 0x00c0, 0x0111);
  break;
 }
 FUNC_3(VAR_14, 0, 0x009b, 0x010f);
 FUNC_3(VAR_14, 0, 0x00bb, 0x010f);
 FUNC_2(VAR_14, 0x000a, 0x005c);
 FUNC_2(VAR_14, 0x0004, 0x0000);
 FUNC_2(VAR_14, 0x0006, 0x00fb);
 FUNC_2(VAR_14, 0x0008, 0x0000);
 FUNC_2(VAR_14, 0x000c, 0x0009);
 FUNC_2(VAR_14, 0x0012, 0x000a);
 FUNC_2(VAR_14, 0x002a, 0x0000);
 FUNC_2(VAR_14, 0x002c, 0x0000);
 FUNC_2(VAR_14, 0x002e, 0x0008);






 FUNC_2(VAR_14, 0x0030, 0x0000);





 switch (VAR_14->videosize) {
 case 131:
  FUNC_2(VAR_14, 0x0014, 0x0002);
  FUNC_2(VAR_14, 0x0016, 0x0002);
  FUNC_2(VAR_14, 0x0018, 0x004a);
  break;
 case 130:
  FUNC_2(VAR_14, 0x0014, 0x0009);
  FUNC_2(VAR_14, 0x0016, 0x0005);
  FUNC_2(VAR_14, 0x0018, 0x0044);
  break;
 case 129:

  FUNC_2(VAR_14, 0x0014, 0x0009);
  FUNC_2(VAR_14, 0x0016, 0x0003);
  FUNC_2(VAR_14, 0x0018, 0x0044);
  break;
 case 128:
  FUNC_2(VAR_14, 0x0014, 0x0003);
  FUNC_2(VAR_14, 0x0016, 0x0002);
  FUNC_2(VAR_14, 0x0018, 0x004a);
  break;
 }

 FUNC_2(VAR_14, VAR_7, 0x005a);
 {
  short VAR_18=31, VAR_19;

  FUNC_0(VAR_2, VAR_1, VAR_0);
  VAR_19 = VAR_0 - VAR_2 + VAR_1;
  switch (VAR_14->videosize) {
  case 131:
   VAR_18 = 6 + VAR_19*4;
   break;
  case 130:
   VAR_18 = 8 + VAR_19*3;
   break;
  case 129:
   VAR_18 = 10 + VAR_19*2;
   break;
  case 128:
   VAR_18 = 28 + VAR_19/2;
   break;
  }
  if (VAR_14->debug > 0)
   FUNC_1(&VAR_14->dev->dev, "Framerate (hardware): %hd.\n",
     VAR_18);
  FUNC_0(VAR_18, 0, 31);
  FUNC_2(VAR_14, VAR_13, VAR_18);
 }







 switch (VAR_14->videosize) {
 case 131:
  FUNC_2(VAR_14, 0x0026, 0x00c2);
  break;
 case 130:
  FUNC_2(VAR_14, 0x0026, 0x0044);
  break;
 case 129:
  FUNC_2(VAR_14, 0x0026, 0x0046);
  break;
 case 128:
  FUNC_2(VAR_14, 0x0026, 0x0048);
  break;
 }

 FUNC_2(VAR_14, VAR_12, VAR_6);

 if (VAR_3 >= 0) {
  FUNC_0(VAR_3, 0, 255);
  VAR_15 = VAR_3;
 } else
  VAR_15 = 0x002f;

 if (VAR_4 >= 0) {
  FUNC_0(VAR_4, 0, 255);
  VAR_16 = VAR_4;
 } else
  VAR_16 = 0x0034;

 if (VAR_5 >= 0) {
  FUNC_0(VAR_5, 0, 255);
  VAR_17 = VAR_5;
 } else
  VAR_17 = 0x00a0;

 FUNC_2(VAR_14, VAR_8, VAR_15);
 FUNC_2(VAR_14, VAR_11, VAR_16);
 FUNC_2(VAR_14, VAR_9, VAR_17);
 FUNC_2(VAR_14, VAR_10, VAR_14->vpic.hue >> 9); ;


 FUNC_2(VAR_14, 0x0030, 0x0004);

 FUNC_3(VAR_14, 0, 0x00c0, 0x010c);
 FUNC_4(VAR_14->dev, FUNC_5(VAR_14->dev, VAR_14->video_endp));
}
