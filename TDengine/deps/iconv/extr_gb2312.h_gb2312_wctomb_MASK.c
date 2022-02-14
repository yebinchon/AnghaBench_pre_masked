
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_8__ {unsigned short used; unsigned short indx; } ;
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

__attribute__((used)) static int
FUNC_0 (conv_t VAR_9, unsigned char *VAR_10, ucs4_t VAR_11, int VAR_12)
{
  if (VAR_12 >= 2) {
    const Summary16 *VAR_13 = ((void*)0);
    if (VAR_11 >= 0x0000 && VAR_11 < 0x0460)
      VAR_13 = &VAR_3[(VAR_11>>4)];
    else if (VAR_11 >= 0x2000 && VAR_11 < 0x2650)
      VAR_13 = &VAR_4[(VAR_11>>4)-0x200];
    else if (VAR_11 >= 0x3000 && VAR_11 < 0x3230)
      VAR_13 = &VAR_5[(VAR_11>>4)-0x300];
    else if (VAR_11 >= 0x4e00 && VAR_11 < 0x9cf0)
      VAR_13 = &VAR_6[(VAR_11>>4)-0x4e0];
    else if (VAR_11 >= 0x9e00 && VAR_11 < 0x9fb0)
      VAR_13 = &VAR_7[(VAR_11>>4)-0x9e0];
    else if (VAR_11 >= 0xff00 && VAR_11 < 0xfff0)
      VAR_13 = &VAR_8[(VAR_11>>4)-0xff0];
    if (VAR_13) {
      unsigned short VAR_14 = VAR_13->used;
      unsigned int VAR_15 = VAR_11 & 0x0f;
      if (VAR_14 & ((unsigned short) 1 << VAR_15)) {
        unsigned short VAR_16;

        VAR_14 &= ((unsigned short) 1 << VAR_15) - 1;

        VAR_14 = (VAR_14 & 0x5555) + ((VAR_14 & 0xaaaa) >> 1);
        VAR_14 = (VAR_14 & 0x3333) + ((VAR_14 & 0xcccc) >> 2);
        VAR_14 = (VAR_14 & 0x0f0f) + ((VAR_14 & 0xf0f0) >> 4);
        VAR_14 = (VAR_14 & 0x00ff) + (VAR_14 >> 8);
        VAR_16 = VAR_2[VAR_13->indx + VAR_14];
        VAR_10[0] = (VAR_16 >> 8); VAR_10[1] = (VAR_16 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
