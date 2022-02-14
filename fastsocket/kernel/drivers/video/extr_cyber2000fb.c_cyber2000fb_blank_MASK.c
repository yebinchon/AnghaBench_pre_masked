
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {int dummy; } ;
struct cfb_info {int ramdac_powerdown; TYPE_1__* palette; } ;
struct TYPE_2__ {int red; int green; int blue; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,unsigned int,struct cfb_info*) ;
 int FUNC_1 (struct cfb_info*) ;
 int FUNC_2 (int,int,struct cfb_info*) ;

__attribute__((used)) static int FUNC_3(int VAR_9, struct fb_info *VAR_10)
{
 struct cfb_info *VAR_11 = (struct cfb_info *)VAR_10;
 unsigned int VAR_12 = 0;
 int VAR_13;

 switch (VAR_9) {
 case 129:
  VAR_12 = VAR_3 | VAR_1;
  break;
 case 131:
  VAR_12 = VAR_4 | VAR_1;
  break;
 case 128:
  VAR_12 = VAR_3 | VAR_2;
  break;
 case 130:
 default:
  break;
 }

 FUNC_0(VAR_0, VAR_12, VAR_11);

 if (VAR_9 <= 1) {

  VAR_11->ramdac_powerdown &= ~(VAR_7 | VAR_6 |
        VAR_8);
  FUNC_1(VAR_11);
 }




 if (VAR_9) {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   FUNC_2(VAR_13, 0x3c8, VAR_11);
   FUNC_2(0, 0x3c9, VAR_11);
   FUNC_2(0, 0x3c9, VAR_11);
   FUNC_2(0, 0x3c9, VAR_11);
  }
 } else {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   FUNC_2(VAR_13, 0x3c8, VAR_11);
   FUNC_2(VAR_11->palette[VAR_13].red, 0x3c9, VAR_11);
   FUNC_2(VAR_11->palette[VAR_13].green, 0x3c9, VAR_11);
   FUNC_2(VAR_11->palette[VAR_13].blue, 0x3c9, VAR_11);
  }
 }

 if (VAR_9 >= 2) {

  VAR_11->ramdac_powerdown |= VAR_7 | VAR_6 |
      VAR_8;
  FUNC_1(VAR_11);
 }

 return 0;
}
