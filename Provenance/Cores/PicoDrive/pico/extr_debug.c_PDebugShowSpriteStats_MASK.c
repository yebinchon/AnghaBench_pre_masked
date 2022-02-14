
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* reg; } ;
struct TYPE_4__ {int pal; } ;
struct TYPE_6__ {TYPE_2__ video; TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char** VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned short*,int ,int) ;

void FUNC_1(unsigned short *VAR_7, int VAR_8)
{
  int VAR_9, VAR_10, VAR_11, VAR_12;
  unsigned short *VAR_13;
  unsigned char *VAR_14;

  VAR_12 = (320-4*4-1) / VAR_3;
  VAR_9 = 240;
  if (!VAR_4.m.pal || !(VAR_4.video.reg[1]&8))
    VAR_9 = 224, VAR_7 += VAR_8*8;

  for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
  {
    VAR_13 = VAR_7 + VAR_8*VAR_10;
    VAR_14 = &VAR_2[VAR_10][0];


    for (VAR_11 = 0; VAR_11 < (VAR_14[0] & 0x7f); VAR_11++) {
      FUNC_0(VAR_13, (VAR_14[3+VAR_11] & 0x80) ? VAR_6 : VAR_1, VAR_12);
      VAR_13 += VAR_12;
    }


    VAR_13 = VAR_7 + VAR_8*VAR_10 + 320-4*4;
    if (VAR_14[1] & 0x40) FUNC_0(VAR_13+4*0, VAR_1, 4);
    if (VAR_14[1] & 0x80) FUNC_0(VAR_13+4*1, VAR_6, 4);
    if (VAR_14[1] & 0x20) FUNC_0(VAR_13+4*2, VAR_0, 4);
    if (VAR_14[1] & 0x10) FUNC_0(VAR_13+4*3, VAR_5, 4);
  }


  for (VAR_10 = VAR_12*5; VAR_10 <= 320-4*4-1; VAR_10 += VAR_12*5) {
    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
      VAR_7[VAR_10 + VAR_11*VAR_8] = 0x182;
  }
}
