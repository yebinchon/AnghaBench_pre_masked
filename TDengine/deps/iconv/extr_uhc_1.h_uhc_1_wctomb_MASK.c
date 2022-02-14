
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ucs4_t ;
typedef int conv_t ;
struct TYPE_3__ {unsigned short used; scalar_t__ indx; } ;
typedef TYPE_1__ Summary16 ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short* VAR_2 ;
 unsigned short* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int
FUNC_0 (conv_t VAR_5, unsigned char *VAR_6, ucs4_t VAR_7, int VAR_8)
{
  if (VAR_8 >= 2) {
    if (VAR_7 >= 0xac00 && VAR_7 < 0xc8b0) {
      const Summary16 *VAR_9 = &VAR_4[(VAR_7>>4)-0xac0];
      unsigned short VAR_10 = VAR_9->used;
      unsigned int VAR_11 = VAR_7 & 0x0f;
      if (VAR_10 & ((unsigned short) 1 << VAR_11)) {
        unsigned short VAR_12;

        VAR_10 &= ((unsigned short) 1 << VAR_11) - 1;

        VAR_10 = (VAR_10 & 0x5555) + ((VAR_10 & 0xaaaa) >> 1);
        VAR_10 = (VAR_10 & 0x3333) + ((VAR_10 & 0xcccc) >> 2);
        VAR_10 = (VAR_10 & 0x0f0f) + ((VAR_10 & 0xf0f0) >> 4);
        VAR_10 = (VAR_10 & 0x00ff) + (VAR_10 >> 8);
        VAR_10 += VAR_9->indx;
        VAR_12 = VAR_3[VAR_10>>7] + VAR_2[VAR_10];
        VAR_6[0] = (VAR_12 >> 8); VAR_6[1] = (VAR_12 & 0xff);
        return 2;
      }
    }
    return VAR_0;
  }
  return VAR_1;
}
