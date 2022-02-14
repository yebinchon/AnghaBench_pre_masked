
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_10__ {unsigned short used; unsigned short indx; } ;
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_11, unsigned char *VAR_12, ucs4_t VAR_13, int VAR_14)
{
  if (VAR_14 >= 2) {
    const Summary16 *VAR_15 = ((void*)0);
    if (VAR_13 >= 0x0000 && VAR_13 < 0x0100)
      VAR_15 = &VAR_3[(VAR_13>>4)];
    else if (VAR_13 >= 0x0200 && VAR_13 < 0x0460)
      VAR_15 = &VAR_4[(VAR_13>>4)-0x020];
    else if (VAR_13 >= 0x2000 && VAR_13 < 0x22c0)
      VAR_15 = &VAR_5[(VAR_13>>4)-0x200];
    else if (VAR_13 >= 0x2400 && VAR_13 < 0x2650)
      VAR_15 = &VAR_6[(VAR_13>>4)-0x240];
    else if (VAR_13 >= 0x3000 && VAR_13 < 0x33e0)
      VAR_15 = &VAR_7[(VAR_13>>4)-0x300];
    else if (VAR_13 >= 0x4e00 && VAR_13 < 0x9fb0)
      VAR_15 = &VAR_8[(VAR_13>>4)-0x4e0];
    else if (VAR_13 >= 0xfa00 && VAR_13 < 0xfa10)
      VAR_15 = &VAR_9[(VAR_13>>4)-0xfa0];
    else if (VAR_13 >= 0xfe00 && VAR_13 < 0xff70)
      VAR_15 = &VAR_10[(VAR_13>>4)-0xfe0];
    if (VAR_15) {
      unsigned short VAR_16 = VAR_15->used;
      unsigned int VAR_17 = VAR_13 & 0x0f;
      if (VAR_16 & ((unsigned short) 1 << VAR_17)) {
        unsigned short VAR_18;

        VAR_16 &= ((unsigned short) 1 << VAR_17) - 1;

        VAR_16 = (VAR_16 & 0x5555) + ((VAR_16 & 0xaaaa) >> 1);
        VAR_16 = (VAR_16 & 0x3333) + ((VAR_16 & 0xcccc) >> 2);
        VAR_16 = (VAR_16 & 0x0f0f) + ((VAR_16 & 0xf0f0) >> 4);
        VAR_16 = (VAR_16 & 0x00ff) + (VAR_16 >> 8);
        VAR_18 = VAR_2[VAR_15->indx + VAR_16];
        VAR_12[0] = (VAR_18 >> 8); VAR_12[1] = (VAR_18 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
