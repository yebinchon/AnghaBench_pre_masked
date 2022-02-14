
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_50__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_50__ {unsigned short used; unsigned short indx; } ;
typedef TYPE_1__ Summary16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 TYPE_1__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 TYPE_1__* VAR_14 ;
 TYPE_1__* VAR_15 ;
 TYPE_1__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 TYPE_1__* VAR_18 ;
 TYPE_1__* VAR_19 ;
 TYPE_1__* VAR_20 ;
 TYPE_1__* VAR_21 ;
 TYPE_1__* VAR_22 ;
 TYPE_1__* VAR_23 ;
 TYPE_1__* VAR_24 ;
 TYPE_1__* VAR_25 ;
 TYPE_1__* VAR_26 ;
 TYPE_1__* VAR_27 ;
 TYPE_1__* VAR_28 ;
 TYPE_1__* VAR_29 ;
 TYPE_1__* VAR_30 ;
 TYPE_1__* VAR_31 ;
 TYPE_1__* VAR_32 ;
 TYPE_1__* VAR_33 ;
 TYPE_1__* VAR_34 ;
 TYPE_1__* VAR_35 ;
 TYPE_1__* VAR_36 ;
 TYPE_1__* VAR_37 ;
 TYPE_1__* VAR_38 ;
 TYPE_1__* VAR_39 ;
 TYPE_1__* VAR_40 ;
 TYPE_1__* VAR_41 ;
 TYPE_1__* VAR_42 ;
 TYPE_1__* VAR_43 ;
 TYPE_1__* VAR_44 ;
 TYPE_1__* VAR_45 ;
 TYPE_1__* VAR_46 ;
 TYPE_1__* VAR_47 ;
 TYPE_1__* VAR_48 ;
 TYPE_1__* VAR_49 ;
 TYPE_1__* VAR_50 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_51, unsigned char *VAR_52, ucs4_t VAR_53, int VAR_54)
{
  if (VAR_54 >= 2) {
    const Summary16 *VAR_55 = ((void*)0);
    if (VAR_53 < 0x9f00) {
      if (VAR_53 < 0x6900) {
        if (VAR_53 >= 0x3500 && VAR_53 < 0x3560)
          VAR_55 = &VAR_26[(VAR_53>>4)-0x350];
        else if (VAR_53 >= 0x3c00 && VAR_53 < 0x3ee0)
          VAR_55 = &VAR_27[(VAR_53>>4)-0x3c0];
        else if (VAR_53 >= 0x4000 && VAR_53 < 0x4080)
          VAR_55 = &VAR_28[(VAR_53>>4)-0x400];
        else if (VAR_53 >= 0x4200 && VAR_53 < 0x42b0)
          VAR_55 = &VAR_29[(VAR_53>>4)-0x420];
        else if (VAR_53 >= 0x4b00 && VAR_53 < 0x4c90)
          VAR_55 = &VAR_30[(VAR_53>>4)-0x4b0];
        else if (VAR_53 >= 0x4e00 && VAR_53 < 0x51b0)
          VAR_55 = &VAR_31[(VAR_53>>4)-0x4e0];
        else if (VAR_53 >= 0x5300 && VAR_53 < 0x5440)
          VAR_55 = &VAR_32[(VAR_53>>4)-0x530];
        else if (VAR_53 >= 0x5700 && VAR_53 < 0x58e0)
          VAR_55 = &VAR_33[(VAR_53>>4)-0x570];
        else if (VAR_53 >= 0x5a00 && VAR_53 < 0x5fd0)
          VAR_55 = &VAR_34[(VAR_53>>4)-0x5a0];
        else if (VAR_53 >= 0x6100 && VAR_53 < 0x6130)
          VAR_55 = &VAR_35[(VAR_53>>4)-0x610];
        else if (VAR_53 >= 0x6500 && VAR_53 < 0x6590)
          VAR_55 = &VAR_36[(VAR_53>>4)-0x650];
        else if (VAR_53 >= 0x6700 && VAR_53 < 0x6770)
          VAR_55 = &VAR_37[(VAR_53>>4)-0x670];
      } else {
        if (VAR_53 >= 0x6900 && VAR_53 < 0x6a70)
          VAR_55 = &VAR_38[(VAR_53>>4)-0x690];
        else if (VAR_53 >= 0x6c00 && VAR_53 < 0x6e00)
          VAR_55 = &VAR_39[(VAR_53>>4)-0x6c0];
        else if (VAR_53 >= 0x7000 && VAR_53 < 0x74c0)
          VAR_55 = &VAR_40[(VAR_53>>4)-0x700];
        else if (VAR_53 >= 0x7600 && VAR_53 < 0x78f0)
          VAR_55 = &VAR_41[(VAR_53>>4)-0x760];
        else if (VAR_53 >= 0x7a00 && VAR_53 < 0x7e70)
          VAR_55 = &VAR_42[(VAR_53>>4)-0x7a0];
        else if (VAR_53 >= 0x8200 && VAR_53 < 0x8300)
          VAR_55 = &VAR_43[(VAR_53>>4)-0x820];
        else if (VAR_53 >= 0x8500 && VAR_53 < 0x8610)
          VAR_55 = &VAR_44[(VAR_53>>4)-0x850];
        else if (VAR_53 >= 0x8800 && VAR_53 < 0x88a0)
          VAR_55 = &VAR_45[(VAR_53>>4)-0x880];
        else if (VAR_53 >= 0x8b00 && VAR_53 < 0x8b90)
          VAR_55 = &VAR_46[(VAR_53>>4)-0x8b0];
        else if (VAR_53 >= 0x8e00 && VAR_53 < 0x8fd0)
          VAR_55 = &VAR_47[(VAR_53>>4)-0x8e0];
        else if (VAR_53 >= 0x9100 && VAR_53 < 0x9400)
          VAR_55 = &VAR_48[(VAR_53>>4)-0x910];
        else if (VAR_53 >= 0x9700 && VAR_53 < 0x99f0)
          VAR_55 = &VAR_49[(VAR_53>>4)-0x970];
      }
    } else {
      if (VAR_53 < 0x25600) {
        if (VAR_53 >= 0x9f00 && VAR_53 < 0x9fb0)
          VAR_55 = &VAR_50[(VAR_53>>4)-0x9f0];
        else if (VAR_53 >= 0x21400 && VAR_53 < 0x21440)
          VAR_55 = &VAR_3[(VAR_53>>4)-0x2140];
        else if (VAR_53 >= 0x21900 && VAR_53 < 0x21990)
          VAR_55 = &VAR_4[(VAR_53>>4)-0x2190];
        else if (VAR_53 >= 0x21d00 && VAR_53 < 0x21dc0)
          VAR_55 = &VAR_5[(VAR_53>>4)-0x21d0];
        else if (VAR_53 >= 0x22000 && VAR_53 < 0x22080)
          VAR_55 = &VAR_6[(VAR_53>>4)-0x2200];
        else if (VAR_53 >= 0x22700 && VAR_53 < 0x22720)
          VAR_55 = &VAR_7[(VAR_53>>4)-0x2270];
        else if (VAR_53 >= 0x23200 && VAR_53 < 0x23400)
          VAR_55 = &VAR_8[(VAR_53>>4)-0x2320];
        else if (VAR_53 >= 0x23c00 && VAR_53 < 0x23c70)
          VAR_55 = &VAR_9[(VAR_53>>4)-0x23c0];
        else if (VAR_53 >= 0x24100 && VAR_53 < 0x24150)
          VAR_55 = &VAR_10[(VAR_53>>4)-0x2410];
        else if (VAR_53 >= 0x24500 && VAR_53 < 0x24510)
          VAR_55 = &VAR_11[(VAR_53>>4)-0x2450];
        else if (VAR_53 >= 0x24900 && VAR_53 < 0x24a20)
          VAR_55 = &VAR_12[(VAR_53>>4)-0x2490];
        else if (VAR_53 >= 0x25100 && VAR_53 < 0x251d0)
          VAR_55 = &VAR_13[(VAR_53>>4)-0x2510];
      } else {
        if (VAR_53 >= 0x25600 && VAR_53 < 0x256a0)
          VAR_55 = &VAR_14[(VAR_53>>4)-0x2560];
        else if (VAR_53 >= 0x25c00 && VAR_53 < 0x25d40)
          VAR_55 = &VAR_15[(VAR_53>>4)-0x25c0];
        else if (VAR_53 >= 0x26b00 && VAR_53 < 0x26b20)
          VAR_55 = &VAR_16[(VAR_53>>4)-0x26b0];
        else if (VAR_53 >= 0x26d00 && VAR_53 < 0x26d80)
          VAR_55 = &VAR_17[(VAR_53>>4)-0x26d0];
        else if (VAR_53 >= 0x26f00 && VAR_53 < 0x26fc0)
          VAR_55 = &VAR_18[(VAR_53>>4)-0x26f0];
        else if (VAR_53 >= 0x27100 && VAR_53 < 0x27110)
          VAR_55 = &VAR_19[(VAR_53>>4)-0x2710];
        else if (VAR_53 >= 0x28700 && VAR_53 < 0x28710)
          VAR_55 = &VAR_20[(VAR_53>>4)-0x2870];
        else if (VAR_53 >= 0x28900 && VAR_53 < 0x28af0)
          VAR_55 = &VAR_21[(VAR_53>>4)-0x2890];
        else if (VAR_53 >= 0x28d00 && VAR_53 < 0x28dc0)
          VAR_55 = &VAR_22[(VAR_53>>4)-0x28d0];
        else if (VAR_53 >= 0x29900 && VAR_53 < 0x29950)
          VAR_55 = &VAR_23[(VAR_53>>4)-0x2990];
        else if (VAR_53 >= 0x29c00 && VAR_53 < 0x29c80)
          VAR_55 = &VAR_24[(VAR_53>>4)-0x29c0];
        else if (VAR_53 >= 0x2a100 && VAR_53 < 0x2a2c0)
          VAR_55 = &VAR_25[(VAR_53>>4)-0x2a10];
      }
    }
    if (VAR_55) {
      unsigned short VAR_56 = VAR_55->used;
      unsigned int VAR_57 = VAR_53 & 0x0f;
      if (VAR_56 & ((unsigned short) 1 << VAR_57)) {
        unsigned short VAR_58;

        VAR_56 &= ((unsigned short) 1 << VAR_57) - 1;

        VAR_56 = (VAR_56 & 0x5555) + ((VAR_56 & 0xaaaa) >> 1);
        VAR_56 = (VAR_56 & 0x3333) + ((VAR_56 & 0xcccc) >> 2);
        VAR_56 = (VAR_56 & 0x0f0f) + ((VAR_56 & 0xf0f0) >> 4);
        VAR_56 = (VAR_56 & 0x00ff) + (VAR_56 >> 8);
        VAR_58 = VAR_2[VAR_55->indx + VAR_56];
        VAR_52[0] = (VAR_58 >> 8); VAR_52[1] = (VAR_58 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
