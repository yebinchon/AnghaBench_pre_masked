
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_11__ {unsigned short used; scalar_t__ indx; } ;
typedef TYPE_1__ Summary16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_12, unsigned char *VAR_13, ucs4_t VAR_14, int VAR_15)
{
  if (VAR_15 >= 2) {
    const Summary16 *VAR_16 = ((void*)0);
    if (VAR_14 >= 0x0000 && VAR_14 < 0x0100)
      VAR_16 = &VAR_3[(VAR_14>>4)];
    else if (VAR_14 >= 0x0200 && VAR_14 < 0x03d0)
      VAR_16 = &VAR_4[(VAR_14>>4)-0x020];
    else if (VAR_14 >= 0x2000 && VAR_14 < 0x22c0)
      VAR_16 = &VAR_5[(VAR_14>>4)-0x200];
    else if (VAR_14 >= 0x2400 && VAR_14 < 0x2650)
      VAR_16 = &VAR_7[(VAR_14>>4)-0x240];
    else if (VAR_14 >= 0x3000 && VAR_14 < 0x9fb0)
      VAR_16 = &VAR_9[(VAR_14>>4)-0x300];
    else if (VAR_14 >= 0xfa00 && VAR_14 < 0xfa30)
      VAR_16 = &VAR_10[(VAR_14>>4)-0xfa0];
    else if (VAR_14 >= 0xfe00 && VAR_14 < 0xfff0)
      VAR_16 = &VAR_11[(VAR_14>>4)-0xfe0];
    else if (VAR_14 >= 0x20000 && VAR_14 < 0x2a6e0)
      VAR_16 = &VAR_6[(VAR_14>>4)-0x2000];
    else if (VAR_14 >= 0x2f800 && VAR_14 < 0x2fa20)
      VAR_16 = &VAR_8[(VAR_14>>4)-0x2f80];
    if (VAR_16) {
      unsigned short VAR_17 = VAR_16->used;
      unsigned int VAR_18 = VAR_14 & 0x0f;
      if (VAR_17 & ((unsigned short) 1 << VAR_18)) {

        VAR_17 &= ((unsigned short) 1 << VAR_18) - 1;

        VAR_17 = (VAR_17 & 0x5555) + ((VAR_17 & 0xaaaa) >> 1);
        VAR_17 = (VAR_17 & 0x3333) + ((VAR_17 & 0xcccc) >> 2);
        VAR_17 = (VAR_17 & 0x0f0f) + ((VAR_17 & 0xf0f0) >> 4);
        VAR_17 = (VAR_17 & 0x00ff) + (VAR_17 >> 8);
        VAR_17 += VAR_16->indx;
        VAR_13[0] = VAR_2[3*VAR_17];
        VAR_13[1] = VAR_2[3*VAR_17+1];
        VAR_13[2] = VAR_2[3*VAR_17+2];
        return 3;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
