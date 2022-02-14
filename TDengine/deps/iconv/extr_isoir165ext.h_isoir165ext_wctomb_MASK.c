
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_12__ {unsigned short used; unsigned short indx; } ;
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_13, unsigned char *VAR_14, ucs4_t VAR_15, int VAR_16)
{
  if (VAR_16 >= 2) {
    const Summary16 *VAR_17 = ((void*)0);
    if (VAR_15 >= 0x0000 && VAR_15 < 0x0200)
      VAR_17 = &VAR_3[(VAR_15>>4)];
    else if (VAR_15 >= 0x0300 && VAR_15 < 0x03c0)
      VAR_17 = &VAR_4[(VAR_15>>4)-0x030];
    else if (VAR_15 >= 0x1e00 && VAR_15 < 0x1fc0)
      VAR_17 = &VAR_5[(VAR_15>>4)-0x1e0];
    else if (VAR_15 >= 0x3000 && VAR_15 < 0x3040)
      VAR_17 = &VAR_6[(VAR_15>>4)-0x300];
    else if (VAR_15 >= 0x3200 && VAR_15 < 0x3400)
      VAR_17 = &VAR_7[(VAR_15>>4)-0x320];
    else if (VAR_15 >= 0x4e00 && VAR_15 < 0x7d00)
      VAR_17 = &VAR_8[(VAR_15>>4)-0x4e0];
    else if (VAR_15 >= 0x7e00 && VAR_15 < 0x92d0)
      VAR_17 = &VAR_9[(VAR_15>>4)-0x7e0];
    else if (VAR_15 >= 0x9400 && VAR_15 < 0x9cf0)
      VAR_17 = &VAR_10[(VAR_15>>4)-0x940];
    else if (VAR_15 >= 0x9e00 && VAR_15 < 0x9f90)
      VAR_17 = &VAR_11[(VAR_15>>4)-0x9e0];
    else if (VAR_15 >= 0xff00 && VAR_15 < 0xff50)
      VAR_17 = &VAR_12[(VAR_15>>4)-0xff0];
    if (VAR_17) {
      unsigned short VAR_18 = VAR_17->used;
      unsigned int VAR_19 = VAR_15 & 0x0f;
      if (VAR_18 & ((unsigned short) 1 << VAR_19)) {
        unsigned short VAR_20;

        VAR_18 &= ((unsigned short) 1 << VAR_19) - 1;

        VAR_18 = (VAR_18 & 0x5555) + ((VAR_18 & 0xaaaa) >> 1);
        VAR_18 = (VAR_18 & 0x3333) + ((VAR_18 & 0xcccc) >> 2);
        VAR_18 = (VAR_18 & 0x0f0f) + ((VAR_18 & 0xf0f0) >> 4);
        VAR_18 = (VAR_18 & 0x00ff) + (VAR_18 >> 8);
        VAR_20 = VAR_2[VAR_17->indx + VAR_18];
        VAR_14[0] = (VAR_20 >> 8); VAR_14[1] = (VAR_20 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
