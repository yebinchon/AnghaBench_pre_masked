
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {unsigned char* packet; struct input_dev* dev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*,int ,unsigned char) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct psmouse *VAR_14)
{
 struct input_dev *VAR_15 = VAR_14->dev;
 unsigned char *VAR_16 = VAR_14->packet;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;


 VAR_17 = (VAR_16[0] & 0xc0) >> 6;
 FUNC_1(VAR_15, VAR_11, VAR_17 != 0);

 switch (VAR_17) {
 case 1:


  FUNC_0(VAR_15, VAR_4, (VAR_16[1] << 8) | VAR_16[2]);


  FUNC_0(VAR_15, VAR_5, VAR_13 -
   ((VAR_16[4] << 8) | VAR_16[5]));
  break;

 case 2:




  VAR_18 = ((VAR_16[0] & 0x10) << 4) | VAR_16[1];

  VAR_19 = VAR_12 - (((VAR_16[0] & 0x20) << 3) | VAR_16[2]);


  VAR_20 = ((VAR_16[3] & 0x10) << 4) | VAR_16[4];

  VAR_21 = VAR_12 - (((VAR_16[3] & 0x20) << 3) | VAR_16[5]);


  FUNC_0(VAR_15, VAR_4, VAR_18 << 2);
  FUNC_0(VAR_15, VAR_5, VAR_19 << 2);


  FUNC_0(VAR_15, VAR_0, VAR_18);
  FUNC_0(VAR_15, VAR_1, VAR_19);
  FUNC_0(VAR_15, VAR_2, VAR_20);
  FUNC_0(VAR_15, VAR_3, VAR_21);
  break;
 }

 FUNC_1(VAR_15, VAR_9, VAR_17 == 1);
 FUNC_1(VAR_15, VAR_8, VAR_17 == 2);
 FUNC_1(VAR_15, VAR_10, VAR_17 == 3);
 FUNC_1(VAR_15, VAR_6, VAR_16[0] & 0x01);
 FUNC_1(VAR_15, VAR_7, VAR_16[0] & 0x02);

 FUNC_2(VAR_15);
}
