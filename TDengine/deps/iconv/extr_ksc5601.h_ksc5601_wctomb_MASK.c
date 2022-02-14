
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_9__ {unsigned short used; unsigned short indx; } ;
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_10, unsigned char *VAR_11, ucs4_t VAR_12, int VAR_13)
{
  if (VAR_13 >= 2) {
    const Summary16 *VAR_14 = ((void*)0);
    if (VAR_12 >= 0x0000 && VAR_12 < 0x0460)
      VAR_14 = &VAR_3[(VAR_12>>4)];
    else if (VAR_12 >= 0x2000 && VAR_12 < 0x2670)
      VAR_14 = &VAR_4[(VAR_12>>4)-0x200];
    else if (VAR_12 >= 0x3000 && VAR_12 < 0x33e0)
      VAR_14 = &VAR_5[(VAR_12>>4)-0x300];
    else if (VAR_12 >= 0x4e00 && VAR_12 < 0x9fa0)
      VAR_14 = &VAR_6[(VAR_12>>4)-0x4e0];
    else if (VAR_12 >= 0xac00 && VAR_12 < 0xd7a0)
      VAR_14 = &VAR_7[(VAR_12>>4)-0xac0];
    else if (VAR_12 >= 0xf900 && VAR_12 < 0xfa10)
      VAR_14 = &VAR_8[(VAR_12>>4)-0xf90];
    else if (VAR_12 >= 0xff00 && VAR_12 < 0xfff0)
      VAR_14 = &VAR_9[(VAR_12>>4)-0xff0];
    if (VAR_14) {
      unsigned short VAR_15 = VAR_14->used;
      unsigned int VAR_16 = VAR_12 & 0x0f;
      if (VAR_15 & ((unsigned short) 1 << VAR_16)) {
        unsigned short VAR_17;

        VAR_15 &= ((unsigned short) 1 << VAR_16) - 1;

        VAR_15 = (VAR_15 & 0x5555) + ((VAR_15 & 0xaaaa) >> 1);
        VAR_15 = (VAR_15 & 0x3333) + ((VAR_15 & 0xcccc) >> 2);
        VAR_15 = (VAR_15 & 0x0f0f) + ((VAR_15 & 0xf0f0) >> 4);
        VAR_15 = (VAR_15 & 0x00ff) + (VAR_15 >> 8);
        VAR_17 = VAR_2[VAR_14->indx + VAR_15];
        VAR_11[0] = (VAR_17 >> 8); VAR_11[1] = (VAR_17 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
