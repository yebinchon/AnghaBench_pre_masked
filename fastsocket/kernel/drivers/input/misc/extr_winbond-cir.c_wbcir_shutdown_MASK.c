
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wbcir_data {scalar_t__ sbase; scalar_t__ wbase; } ;
struct device {int dummy; } ;
struct pnp_dev {struct device dev; } ;
typedef int match ;
typedef int mask ;


 scalar_t__ VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__*,int ,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__*,int) ;
 struct wbcir_data* FUNC_6 (struct pnp_dev*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_7 (scalar_t__,int,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static void
FUNC_9(struct pnp_dev *VAR_15)
{
 struct device *VAR_16 = &VAR_15->dev;
 struct wbcir_data *VAR_17 = FUNC_6(VAR_15);
 int VAR_18 = 1;
 u8 VAR_19[11];
 u8 VAR_20[11];
 u8 VAR_21 = 0;
 int VAR_22;

 FUNC_3(VAR_19, 0, sizeof(VAR_19));
 FUNC_3(VAR_20, 0, sizeof(VAR_20));

 if (VAR_14 == VAR_0 || !FUNC_2(VAR_16)) {
  VAR_18 = 0;
  goto finish;
 }

 switch (VAR_12) {
 case 129:
  if (VAR_14 > 0xFFF) {
   VAR_18 = 0;
   FUNC_1(VAR_16, "RC5 - Invalid wake scancode\n");
   break;
  }


  VAR_20[0] = 0xFF;
  VAR_20[1] = 0x17;

  VAR_19[0] = (VAR_14 & 0x003F);
  VAR_19[0] |= (VAR_14 & 0x0180) >> 1;
  VAR_19[1] = (VAR_14 & 0x0E00) >> 9;
  if (!(VAR_14 & 0x0040))
   VAR_19[1] |= 0x10;

  break;

 case 130:
  if (VAR_14 > 0xFFFFFF) {
   VAR_18 = 0;
   FUNC_1(VAR_16, "NEC - Invalid wake scancode\n");
   break;
  }

  VAR_20[0] = VAR_20[1] = VAR_20[2] = VAR_20[3] = 0xFF;

  VAR_19[1] = FUNC_0((VAR_14 & 0xFF));
  VAR_19[0] = ~VAR_19[1];

  VAR_19[3] = FUNC_0((VAR_14 & 0xFF00) >> 8);
  if (VAR_14 > 0xFFFF)
   VAR_19[2] = FUNC_0((VAR_14 & 0xFF0000) >> 16);
  else
   VAR_19[2] = ~VAR_19[3];

  break;

 case 128:

  if (VAR_13 == 0) {
   if (VAR_14 > 0xFFFF) {
    VAR_18 = 0;
    FUNC_1(VAR_16, "RC6 - Invalid wake scancode\n");
    break;
   }


   VAR_19[0] = FUNC_8(VAR_14 >> 0);
   VAR_20[0] = 0xFF;
   VAR_19[1] = FUNC_8(VAR_14 >> 4);
   VAR_20[1] = 0xFF;


   VAR_19[2] = FUNC_8(VAR_14 >> 8);
   VAR_20[2] = 0xFF;
   VAR_19[3] = FUNC_8(VAR_14 >> 12);
   VAR_20[3] = 0xFF;


   VAR_19[4] = 0x50;
   VAR_20[4] = 0xF0;
   VAR_19[5] = 0x09;
   VAR_20[5] = 0x0F;

   VAR_21 = 44;

  } else if (VAR_13 == 6) {
   VAR_22 = 0;


   VAR_19[VAR_22] = FUNC_8(VAR_14 >> 0);
   VAR_20[VAR_22++] = 0xFF;
   VAR_19[VAR_22] = FUNC_8(VAR_14 >> 4);
   VAR_20[VAR_22++] = 0xFF;


   VAR_19[VAR_22] = FUNC_8(VAR_14 >> 8);
   VAR_20[VAR_22++] = 0xFF;
   VAR_19[VAR_22] = FUNC_8(VAR_14 >> 12);
   VAR_20[VAR_22++] = 0x3F;


   VAR_19[VAR_22] = FUNC_8(VAR_14 >> 16);
   VAR_20[VAR_22++] = 0xFF;
   VAR_19[VAR_22] = FUNC_8(VAR_14 >> 20);
   VAR_20[VAR_22++] = 0xFF;

   if (VAR_14 & 0x80000000) {

    VAR_19[VAR_22] = FUNC_8(VAR_14 >> 24);
    VAR_20[VAR_22++] = 0xFF;
    VAR_19[VAR_22] = FUNC_8(VAR_14 >> 28);
    VAR_20[VAR_22++] = 0xFF;
    VAR_21 = 76;
   } else if (VAR_14 <= 0x007FFFFF) {
    VAR_21 = 60;
   } else {
    VAR_18 = 0;
    FUNC_1(VAR_16, "RC6 - Invalid wake scancode\n");
    break;
   }


   VAR_19[VAR_22] = 0x93;
   VAR_20[VAR_22++] = 0xFF;
   VAR_19[VAR_22] = 0x0A;
   VAR_20[VAR_22++] = 0x0F;

  } else {
   VAR_18 = 0;
   FUNC_1(VAR_16, "RC6 - Invalid wake mode\n");
  }

  break;

 default:
  VAR_18 = 0;
  break;
 }

finish:
 if (VAR_18) {

  FUNC_7(VAR_17->wbase + VAR_10,
          VAR_2 | VAR_4,
          0x3F);
  FUNC_5(VAR_17->wbase + VAR_8, VAR_19, 11);
  FUNC_7(VAR_17->wbase + VAR_10,
          VAR_3 | VAR_4,
          0x3F);
  FUNC_5(VAR_17->wbase + VAR_8, VAR_20, 11);


  FUNC_4(VAR_21, VAR_17->wbase + VAR_6);


  FUNC_7(VAR_17->wbase + VAR_11, 0x17, 0x17);


  FUNC_7(VAR_17->wbase + VAR_9, 0x01, 0x07);


  FUNC_7(VAR_17->wbase + VAR_7, 0x01, 0x01);

 } else {

  FUNC_7(VAR_17->wbase + VAR_9, 0x00, 0x07);


  FUNC_7(VAR_17->wbase + VAR_7, 0x00, 0x01);
 }


 FUNC_4(VAR_1, VAR_17->sbase + VAR_5);
}
