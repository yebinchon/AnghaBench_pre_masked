
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_52__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_52__ {unsigned short used; unsigned short indx; } ;
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
 TYPE_1__* VAR_51 ;
 TYPE_1__* VAR_52 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_53, unsigned char *VAR_54, ucs4_t VAR_55, int VAR_56)
{
  if (VAR_56 >= 2) {
    const Summary16 *VAR_57 = ((void*)0);
    if (VAR_55 < 0x21a00) {
      if (VAR_55 < 0x6e00) {
        if (VAR_55 >= 0x3400 && VAR_55 < 0x3450)
          VAR_57 = &VAR_30[(VAR_55>>4)-0x340];
        else if (VAR_55 >= 0x3600 && VAR_55 < 0x3980)
          VAR_57 = &VAR_31[(VAR_55>>4)-0x360];
        else if (VAR_55 >= 0x3b00 && VAR_55 < 0x3ba0)
          VAR_57 = &VAR_32[(VAR_55>>4)-0x3b0];
        else if (VAR_55 >= 0x3d00 && VAR_55 < 0x3e00)
          VAR_57 = &VAR_33[(VAR_55>>4)-0x3d0];
        else if (VAR_55 >= 0x3f00 && VAR_55 < 0x41f0)
          VAR_57 = &VAR_34[(VAR_55>>4)-0x3f0];
        else if (VAR_55 >= 0x4300 && VAR_55 < 0x4750)
          VAR_57 = &VAR_35[(VAR_55>>4)-0x430];
        else if (VAR_55 >= 0x4a00 && VAR_55 < 0x4ab0)
          VAR_57 = &VAR_36[(VAR_55>>4)-0x4a0];
        else if (VAR_55 >= 0x4c00 && VAR_55 < 0x4d90)
          VAR_57 = &VAR_37[(VAR_55>>4)-0x4c0];
        else if (VAR_55 >= 0x4f00 && VAR_55 < 0x4fc0)
          VAR_57 = &VAR_38[(VAR_55>>4)-0x4f0];
        else if (VAR_55 >= 0x5600 && VAR_55 < 0x5700)
          VAR_57 = &VAR_39[(VAR_55>>4)-0x560];
        else if (VAR_55 >= 0x5900 && VAR_55 < 0x5d80)
          VAR_57 = &VAR_40[(VAR_55>>4)-0x590];
        else if (VAR_55 >= 0x5f00 && VAR_55 < 0x5f40)
          VAR_57 = &VAR_41[(VAR_55>>4)-0x5f0];
        else if (VAR_55 >= 0x6600 && VAR_55 < 0x6770)
          VAR_57 = &VAR_42[(VAR_55>>4)-0x660];
      } else {
        if (VAR_55 >= 0x6e00 && VAR_55 < 0x6e60)
          VAR_57 = &VAR_43[(VAR_55>>4)-0x6e0];
        else if (VAR_55 >= 0x7100 && VAR_55 < 0x7230)
          VAR_57 = &VAR_44[(VAR_55>>4)-0x710];
        else if (VAR_55 >= 0x7400 && VAR_55 < 0x74a0)
          VAR_57 = &VAR_45[(VAR_55>>4)-0x740];
        else if (VAR_55 >= 0x7900 && VAR_55 < 0x79d0)
          VAR_57 = &VAR_46[(VAR_55>>4)-0x790];
        else if (VAR_55 >= 0x7d00 && VAR_55 < 0x7da0)
          VAR_57 = &VAR_47[(VAR_55>>4)-0x7d0];
        else if (VAR_55 >= 0x8100 && VAR_55 < 0x8170)
          VAR_57 = &VAR_48[(VAR_55>>4)-0x810];
        else if (VAR_55 >= 0x8500 && VAR_55 < 0x85a0)
          VAR_57 = &VAR_49[(VAR_55>>4)-0x850];
        else if (VAR_55 >= 0x8a00 && VAR_55 < 0x8b00)
          VAR_57 = &VAR_50[(VAR_55>>4)-0x8a0];
        else if (VAR_55 >= 0x9700 && VAR_55 < 0x9860)
          VAR_57 = &VAR_51[(VAR_55>>4)-0x970];
        else if (VAR_55 >= 0x9f00 && VAR_55 < 0x9fc0)
          VAR_57 = &VAR_52[(VAR_55>>4)-0x9f0];
        else if (VAR_55 >= 0x20100 && VAR_55 < 0x20240)
          VAR_57 = &VAR_3[(VAR_55>>4)-0x2010];
        else if (VAR_55 >= 0x20a00 && VAR_55 < 0x20ba0)
          VAR_57 = &VAR_4[(VAR_55>>4)-0x20a0];
      }
    } else {
      if (VAR_55 < 0x26b00) {
        if (VAR_55 >= 0x21a00 && VAR_55 < 0x21a70)
          VAR_57 = &VAR_5[(VAR_55>>4)-0x21a0];
        else if (VAR_55 >= 0x21d00 && VAR_55 < 0x21e30)
          VAR_57 = &VAR_6[(VAR_55>>4)-0x21d0];
        else if (VAR_55 >= 0x22100 && VAR_55 < 0x221d0)
          VAR_57 = &VAR_7[(VAR_55>>4)-0x2210];
        else if (VAR_55 >= 0x22700 && VAR_55 < 0x227a0)
          VAR_57 = &VAR_8[(VAR_55>>4)-0x2270];
        else if (VAR_55 >= 0x23200 && VAR_55 < 0x23260)
          VAR_57 = &VAR_9[(VAR_55>>4)-0x2320];
        else if (VAR_55 >= 0x23500 && VAR_55 < 0x23620)
          VAR_57 = &VAR_10[(VAR_55>>4)-0x2350];
        else if (VAR_55 >= 0x23b00 && VAR_55 < 0x23b20)
          VAR_57 = &VAR_11[(VAR_55>>4)-0x23b0];
        else if (VAR_55 >= 0x23e00 && VAR_55 < 0x240f0)
          VAR_57 = &VAR_12[(VAR_55>>4)-0x23e0];
        else if (VAR_55 >= 0x24200 && VAR_55 < 0x242c0)
          VAR_57 = &VAR_13[(VAR_55>>4)-0x2420];
        else if (VAR_55 >= 0x24b00 && VAR_55 < 0x24b10)
          VAR_57 = &VAR_14[(VAR_55>>4)-0x24b0];
        else if (VAR_55 >= 0x25400 && VAR_55 < 0x254a0)
          VAR_57 = &VAR_15[(VAR_55>>4)-0x2540];
        else if (VAR_55 >= 0x25a00 && VAR_55 < 0x25a60)
          VAR_57 = &VAR_16[(VAR_55>>4)-0x25a0];
      } else {
        if (VAR_55 >= 0x26b00 && VAR_55 < 0x26c50)
          VAR_57 = &VAR_17[(VAR_55>>4)-0x26b0];
        else if (VAR_55 >= 0x26e00 && VAR_55 < 0x26e90)
          VAR_57 = &VAR_18[(VAR_55>>4)-0x26e0];
        else if (VAR_55 >= 0x27000 && VAR_55 < 0x270e0)
          VAR_57 = &VAR_19[(VAR_55>>4)-0x2700];
        else if (VAR_55 >= 0x27200 && VAR_55 < 0x27400)
          VAR_57 = &VAR_20[(VAR_55>>4)-0x2720];
        else if (VAR_55 >= 0x27b00 && VAR_55 < 0x27cd0)
          VAR_57 = &VAR_21[(VAR_55>>4)-0x27b0];
        else if (VAR_55 >= 0x28600 && VAR_55 < 0x286c0)
          VAR_57 = &VAR_22[(VAR_55>>4)-0x2860];
        else if (VAR_55 >= 0x28900 && VAR_55 < 0x28970)
          VAR_57 = &VAR_23[(VAR_55>>4)-0x2890];
        else if (VAR_55 >= 0x28b00 && VAR_55 < 0x28bc0)
          VAR_57 = &VAR_24[(VAR_55>>4)-0x28b0];
        else if (VAR_55 >= 0x29000 && VAR_55 < 0x29080)
          VAR_57 = &VAR_25[(VAR_55>>4)-0x2900];
        else if (VAR_55 >= 0x29800 && VAR_55 < 0x29950)
          VAR_57 = &VAR_26[(VAR_55>>4)-0x2980];
        else if (VAR_55 >= 0x29e00 && VAR_55 < 0x29ec0)
          VAR_57 = &VAR_27[(VAR_55>>4)-0x29e0];
        else if (VAR_55 >= 0x2a100 && VAR_55 < 0x2a1c0)
          VAR_57 = &VAR_28[(VAR_55>>4)-0x2a10];
        else if (VAR_55 >= 0x2a300 && VAR_55 < 0x2a360)
          VAR_57 = &VAR_29[(VAR_55>>4)-0x2a30];
      }
    }
    if (VAR_57) {
      unsigned short VAR_58 = VAR_57->used;
      unsigned int VAR_59 = VAR_55 & 0x0f;
      if (VAR_58 & ((unsigned short) 1 << VAR_59)) {
        unsigned short VAR_60;

        VAR_58 &= ((unsigned short) 1 << VAR_59) - 1;

        VAR_58 = (VAR_58 & 0x5555) + ((VAR_58 & 0xaaaa) >> 1);
        VAR_58 = (VAR_58 & 0x3333) + ((VAR_58 & 0xcccc) >> 2);
        VAR_58 = (VAR_58 & 0x0f0f) + ((VAR_58 & 0xf0f0) >> 4);
        VAR_58 = (VAR_58 & 0x00ff) + (VAR_58 >> 8);
        VAR_60 = VAR_2[VAR_57->indx + VAR_58];
        VAR_54[0] = (VAR_60 >> 8); VAR_54[1] = (VAR_60 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
