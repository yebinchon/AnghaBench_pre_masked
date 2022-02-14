
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_16__ {unsigned short used; unsigned short indx; } ;
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_17, unsigned char *VAR_18, ucs4_t VAR_19, int VAR_20)
{
  if (VAR_20 >= 2) {
    const Summary16 *VAR_21 = ((void*)0);
    if (VAR_19 >= 0x0000 && VAR_19 < 0x02d0)
      VAR_21 = &VAR_3[(VAR_19>>4)];
    else if (VAR_19 >= 0x0400 && VAR_19 < 0x0460)
      VAR_21 = &VAR_4[(VAR_19>>4)-0x040];
    else if (VAR_19 >= 0x1e00 && VAR_19 < 0x1ed0)
      VAR_21 = &VAR_5[(VAR_19>>4)-0x1e0];
    else if (VAR_19 >= 0x2100 && VAR_19 < 0x21f0)
      VAR_21 = &VAR_7[(VAR_19>>4)-0x210];
    else if (VAR_19 >= 0x2300 && VAR_19 < 0x2580)
      VAR_21 = &VAR_8[(VAR_19>>4)-0x230];
    else if (VAR_19 >= 0x2700 && VAR_19 < 0x2740)
      VAR_21 = &VAR_9[(VAR_19>>4)-0x270];
    else if (VAR_19 >= 0x2e00 && VAR_19 < 0x3240)
      VAR_21 = &VAR_12[(VAR_19>>4)-0x2e0];
    else if (VAR_19 >= 0x3400 && VAR_19 < 0x9fc0)
      VAR_21 = &VAR_14[(VAR_19>>4)-0x340];
    else if (VAR_19 >= 0xf900 && VAR_19 < 0xf910)
      VAR_21 = &VAR_15[(VAR_19>>4)-0xf90];
    else if (VAR_19 >= 0xff00 && VAR_19 < 0xfff0)
      VAR_21 = &VAR_16[(VAR_19>>4)-0xff0];
    else if (VAR_19 >= 0x20000 && VAR_19 < 0x291f0)
      VAR_21 = &VAR_6[(VAR_19>>4)-0x2000];
    else if (VAR_19 >= 0x29400 && VAR_19 < 0x29600)
      VAR_21 = &VAR_10[(VAR_19>>4)-0x2940];
    else if (VAR_19 >= 0x29700 && VAR_19 < 0x2a6b0)
      VAR_21 = &VAR_11[(VAR_19>>4)-0x2970];
    else if (VAR_19 >= 0x2f800 && VAR_19 < 0x2f9e0)
      VAR_21 = &VAR_13[(VAR_19>>4)-0x2f80];
    if (VAR_21) {
      unsigned short VAR_22 = VAR_21->used;
      unsigned int VAR_23 = VAR_19 & 0x0f;
      if (VAR_22 & ((unsigned short) 1 << VAR_23)) {
        unsigned short VAR_24;

        VAR_22 &= ((unsigned short) 1 << VAR_23) - 1;

        VAR_22 = (VAR_22 & 0x5555) + ((VAR_22 & 0xaaaa) >> 1);
        VAR_22 = (VAR_22 & 0x3333) + ((VAR_22 & 0xcccc) >> 2);
        VAR_22 = (VAR_22 & 0x0f0f) + ((VAR_22 & 0xf0f0) >> 4);
        VAR_22 = (VAR_22 & 0x00ff) + (VAR_22 >> 8);
        VAR_24 = VAR_2[VAR_21->indx + VAR_22];
        VAR_18[0] = (VAR_24 >> 8); VAR_18[1] = (VAR_24 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
