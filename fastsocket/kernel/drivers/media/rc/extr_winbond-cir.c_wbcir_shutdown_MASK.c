
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wbcir_data {int irdata_active; int irq; int rxtrigger; scalar_t__ sbase; scalar_t__ wbase; } ;
struct device {int dummy; } ;
struct pnp_dev {struct device dev; } ;
typedef int match ;
typedef int mask ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (scalar_t__*,int ,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__*,int) ;
 struct wbcir_data* FUNC_8 (struct pnp_dev*) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_9 (struct wbcir_data*,int ) ;
 int FUNC_10 (scalar_t__,int,int) ;
 scalar_t__ FUNC_11 (scalar_t__) ;

__attribute__((used)) static void
FUNC_12(struct pnp_dev *VAR_17)
{
 struct device *VAR_18 = &VAR_17->dev;
 struct wbcir_data *VAR_19 = FUNC_8(VAR_17);
 int VAR_20 = 1;
 u8 VAR_21[11];
 u8 VAR_22[11];
 u8 VAR_23 = 0;
 int VAR_24;

 FUNC_5(VAR_21, 0, sizeof(VAR_21));
 FUNC_5(VAR_22, 0, sizeof(VAR_22));

 if (VAR_16 == VAR_0 || !FUNC_2(VAR_18)) {
  VAR_20 = 0;
  goto finish;
 }

 switch (VAR_14) {
 case 129:
  if (VAR_16 > 0xFFF) {
   VAR_20 = 0;
   FUNC_1(VAR_18, "RC5 - Invalid wake scancode\n");
   break;
  }


  VAR_22[0] = 0xFF;
  VAR_22[1] = 0x17;

  VAR_21[0] = (VAR_16 & 0x003F);
  VAR_21[0] |= (VAR_16 & 0x0180) >> 1;
  VAR_21[1] = (VAR_16 & 0x0E00) >> 9;
  if (!(VAR_16 & 0x0040))
   VAR_21[1] |= 0x10;

  break;

 case 130:
  if (VAR_16 > 0xFFFFFF) {
   VAR_20 = 0;
   FUNC_1(VAR_18, "NEC - Invalid wake scancode\n");
   break;
  }

  VAR_22[0] = VAR_22[1] = VAR_22[2] = VAR_22[3] = 0xFF;

  VAR_21[1] = FUNC_0((VAR_16 & 0xFF));
  VAR_21[0] = ~VAR_21[1];

  VAR_21[3] = FUNC_0((VAR_16 & 0xFF00) >> 8);
  if (VAR_16 > 0xFFFF)
   VAR_21[2] = FUNC_0((VAR_16 & 0xFF0000) >> 16);
  else
   VAR_21[2] = ~VAR_21[3];

  break;

 case 128:

  if (VAR_15 == 0) {
   if (VAR_16 > 0xFFFF) {
    VAR_20 = 0;
    FUNC_1(VAR_18, "RC6 - Invalid wake scancode\n");
    break;
   }


   VAR_21[0] = FUNC_11(VAR_16 >> 0);
   VAR_22[0] = 0xFF;
   VAR_21[1] = FUNC_11(VAR_16 >> 4);
   VAR_22[1] = 0xFF;


   VAR_21[2] = FUNC_11(VAR_16 >> 8);
   VAR_22[2] = 0xFF;
   VAR_21[3] = FUNC_11(VAR_16 >> 12);
   VAR_22[3] = 0xFF;


   VAR_21[4] = 0x50;
   VAR_22[4] = 0xF0;
   VAR_21[5] = 0x09;
   VAR_22[5] = 0x0F;

   VAR_23 = 44;

  } else if (VAR_15 == 6) {
   VAR_24 = 0;


   VAR_21[VAR_24] = FUNC_11(VAR_16 >> 0);
   VAR_22[VAR_24++] = 0xFF;
   VAR_21[VAR_24] = FUNC_11(VAR_16 >> 4);
   VAR_22[VAR_24++] = 0xFF;


   VAR_21[VAR_24] = FUNC_11(VAR_16 >> 8);
   VAR_22[VAR_24++] = 0xFF;
   VAR_21[VAR_24] = FUNC_11(VAR_16 >> 12);
   VAR_22[VAR_24++] = 0x3F;


   VAR_21[VAR_24] = FUNC_11(VAR_16 >> 16);
   VAR_22[VAR_24++] = 0xFF;
   VAR_21[VAR_24] = FUNC_11(VAR_16 >> 20);
   VAR_22[VAR_24++] = 0xFF;

   if (VAR_16 & 0x80000000) {

    VAR_21[VAR_24] = FUNC_11(VAR_16 >> 24);
    VAR_22[VAR_24++] = 0xFF;
    VAR_21[VAR_24] = FUNC_11(VAR_16 >> 28);
    VAR_22[VAR_24++] = 0xFF;
    VAR_23 = 76;
   } else if (VAR_16 <= 0x007FFFFF) {
    VAR_23 = 60;
   } else {
    VAR_20 = 0;
    FUNC_1(VAR_18, "RC6 - Invalid wake scancode\n");
    break;
   }


   VAR_21[VAR_24] = 0x93;
   VAR_22[VAR_24++] = 0xFF;
   VAR_21[VAR_24] = 0x0A;
   VAR_22[VAR_24++] = 0x0F;

  } else {
   VAR_20 = 0;
   FUNC_1(VAR_18, "RC6 - Invalid wake mode\n");
  }

  break;

 default:
  VAR_20 = 0;
  break;
 }

finish:
 if (VAR_20) {

  FUNC_10(VAR_19->wbase + VAR_12,
          VAR_4 | VAR_6,
          0x3F);
  FUNC_7(VAR_19->wbase + VAR_10, VAR_21, 11);
  FUNC_10(VAR_19->wbase + VAR_12,
          VAR_5 | VAR_6,
          0x3F);
  FUNC_7(VAR_19->wbase + VAR_10, VAR_22, 11);


  FUNC_6(VAR_23, VAR_19->wbase + VAR_8);


  FUNC_10(VAR_19->wbase + VAR_13, 0x17, 0x17);


  FUNC_10(VAR_19->wbase + VAR_11, 0x01, 0x07);


  FUNC_10(VAR_19->wbase + VAR_9, 0x01, 0x01);

 } else {

  FUNC_10(VAR_19->wbase + VAR_11, 0x00, 0x07);


  FUNC_10(VAR_19->wbase + VAR_9, 0x00, 0x01);
 }


 FUNC_9(VAR_19, VAR_2);
 FUNC_6(VAR_3, VAR_19->sbase + VAR_7);


 VAR_19->irdata_active = 0;
 FUNC_4(VAR_19->rxtrigger, VAR_1);







 FUNC_3(VAR_19->irq);
}
