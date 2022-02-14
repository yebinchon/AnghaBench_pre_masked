
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* reg; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_5__ {int* pen_pos; int page; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int* VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_0 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_1(unsigned int VAR_11)
{
 int VAR_12;

 if (VAR_11 & VAR_2) {
  VAR_8++;
  if (VAR_8 > 2)
   VAR_8 = 0;
  switch (VAR_8) {
   case 2: FUNC_0("Input: Pen on Pad"); break;
   case 1: FUNC_0("Input: Pen on Storyware"); break;
   case 0: FUNC_0("Input: Joystick");
    VAR_7.pen_pos[0] = VAR_7.pen_pos[1] = 0x8000;
    break;
  }
 }
 if (VAR_11 & VAR_1) {
  VAR_7.page--;
  if (VAR_7.page < 0)
   VAR_7.page = 0;
  FUNC_0("Page %i", VAR_7.page);
 }
 if (VAR_11 & VAR_0) {
  VAR_7.page++;
  if (VAR_7.page > 6)
   VAR_7.page = 6;
  FUNC_0("Page %i", VAR_7.page);
 }

 if (VAR_8 == 0)
  return;


 if (VAR_6[0] & 1) VAR_10--;
 if (VAR_6[0] & 2) VAR_10++;
 if (VAR_6[0] & 4) VAR_9--;
 if (VAR_6[0] & 8) VAR_9++;
 VAR_6[0] &= ~0x0f;

 VAR_12 = (VAR_5.video.reg[12]&1) ? 319 : 255;
 if (VAR_10 < 8)
  VAR_10 = 8;
 if (VAR_10 > 224 - VAR_4)
  VAR_10 = 224 - VAR_4;
 if (VAR_9 < 0)
  VAR_9 = 0;
 if (VAR_9 > VAR_12 - VAR_3)
  VAR_9 = VAR_12 - VAR_3;

 VAR_7.pen_pos[0] = VAR_9;
 if (!(VAR_5.video.reg[12] & 1))
  VAR_7.pen_pos[0] += VAR_9 / 4;
 VAR_7.pen_pos[0] += 0x3c;
 VAR_7.pen_pos[1] = VAR_8 == 1 ? (0x2f8 + VAR_10) : (0x1fc + VAR_10);
}
