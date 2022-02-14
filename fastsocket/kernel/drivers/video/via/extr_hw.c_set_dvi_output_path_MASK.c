
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* chip_info; } ;
struct TYPE_3__ {int gfx_chip_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;





 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int,scalar_t__) ;
 TYPE_2__* VAR_23 ;

__attribute__((used)) static void FUNC_5(int VAR_24, int VAR_25)
{
 switch (VAR_25) {
 case 130:
  FUNC_4(VAR_8, VAR_21, 0x01, VAR_0);

  if (VAR_24 == VAR_16) {
   FUNC_4(VAR_12, VAR_21, 0x00, VAR_4);
   FUNC_4(VAR_9, VAR_21, 0x21, VAR_0 +
    VAR_5 + VAR_7);
  } else {
   FUNC_4(VAR_12, VAR_21, 0x10, VAR_4);
   FUNC_4(VAR_9, VAR_21, 0xA1, VAR_0 +
    VAR_5 + VAR_7);
  }

  FUNC_4(VAR_18, VAR_22, 0xC0, VAR_7 + VAR_6);

  FUNC_0();
  break;

 case 129:
  if (VAR_23->chip_info->gfx_chip_name == VAR_20) {
   if (VAR_24 == VAR_16)
    FUNC_4(VAR_11, VAR_21, 0x21,
            VAR_0 + VAR_5 + VAR_7);
   else
    FUNC_4(VAR_11, VAR_21, 0xA1,
            VAR_0 + VAR_5 + VAR_7);
  } else {
   if (VAR_24 == VAR_16)
    FUNC_4(VAR_15, VAR_21, 0x00, VAR_4);
   else
    FUNC_4(VAR_15, VAR_21, 0x10, VAR_4);
  }

  FUNC_4(VAR_18, VAR_22, 0x30, VAR_4 + VAR_5);
  FUNC_1();
  break;
 case 132:
  if (VAR_23->chip_info->gfx_chip_name != VAR_20) {
   if (VAR_24 == VAR_16) {
    FUNC_4(VAR_12, VAR_21, 0x00, VAR_4);
    FUNC_4(VAR_13, VAR_21, 0x03,
            VAR_0 + VAR_1 + VAR_4);
   } else {
    FUNC_4(VAR_12, VAR_21, 0x10, VAR_4);
    FUNC_4(VAR_13, VAR_21, 0x13,
            VAR_0 + VAR_1 + VAR_4);
   }
  }
  FUNC_4(VAR_19, VAR_22, 0x0C, VAR_2 + VAR_3);
  break;

 case 131:
  if (VAR_23->chip_info->gfx_chip_name == VAR_20)
   break;

  if (VAR_24 == VAR_16) {
   FUNC_4(VAR_14, VAR_21, 0x00, VAR_4);
   FUNC_4(VAR_15, VAR_21, 0x00, VAR_4);
  } else {
   FUNC_4(VAR_14, VAR_21, 0x10, VAR_4);
   FUNC_4(VAR_15, VAR_21, 0x10, VAR_4);
  }

  FUNC_4(VAR_19, VAR_22, 0x03, VAR_0 + VAR_1);
  FUNC_2();
  break;

 case 128:
  if (VAR_24 == VAR_16)
   FUNC_4(VAR_14, VAR_21, 0x00, VAR_4);
  else
   FUNC_4(VAR_14, VAR_21, 0x10, VAR_4);
  break;
 }

 if (VAR_24 == VAR_17) {
  FUNC_3();

  FUNC_4(VAR_10, VAR_21, 0x00, VAR_0);
 }
}
