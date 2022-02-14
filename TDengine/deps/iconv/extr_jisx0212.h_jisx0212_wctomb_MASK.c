
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_6__ {unsigned short used; unsigned short indx; } ;
typedef TYPE_1__ Summary16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_7, unsigned char *VAR_8, ucs4_t VAR_9, int VAR_10)
{
  if (VAR_10 >= 2) {
    const Summary16 *VAR_11 = ((void*)0);
    if (VAR_9 >= 0x0000 && VAR_9 < 0x0460)
      VAR_11 = &VAR_3[(VAR_9>>4)];
    else if (VAR_9 >= 0x2100 && VAR_9 < 0x2130)
      VAR_11 = &VAR_4[(VAR_9>>4)-0x210];
    else if (VAR_9 >= 0x4e00 && VAR_9 < 0x9fb0)
      VAR_11 = &VAR_5[(VAR_9>>4)-0x4e0];
    else if (VAR_9 >= 0xff00 && VAR_9 < 0xff60)
      VAR_11 = &VAR_6[(VAR_9>>4)-0xff0];
    if (VAR_11) {
      unsigned short VAR_12 = VAR_11->used;
      unsigned int VAR_13 = VAR_9 & 0x0f;
      if (VAR_12 & ((unsigned short) 1 << VAR_13)) {
        unsigned short VAR_14;

        VAR_12 &= ((unsigned short) 1 << VAR_13) - 1;

        VAR_12 = (VAR_12 & 0x5555) + ((VAR_12 & 0xaaaa) >> 1);
        VAR_12 = (VAR_12 & 0x3333) + ((VAR_12 & 0xcccc) >> 2);
        VAR_12 = (VAR_12 & 0x0f0f) + ((VAR_12 & 0xf0f0) >> 4);
        VAR_12 = (VAR_12 & 0x00ff) + (VAR_12 >> 8);
        VAR_14 = VAR_2[VAR_11->indx + VAR_12];
        VAR_8[0] = (VAR_14 >> 8); VAR_8[1] = (VAR_14 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
