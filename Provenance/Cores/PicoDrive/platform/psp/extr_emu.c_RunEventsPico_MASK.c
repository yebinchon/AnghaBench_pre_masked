
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* reg; } ;
struct TYPE_6__ {TYPE_1__ video; } ;
struct TYPE_5__ {int* pen_pos; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int* VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_0 (unsigned int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_12, unsigned int VAR_13)
{
 FUNC_0(VAR_12);

 if (VAR_9 != 0)
 {
  VAR_7[0] &= ~0x0f;
  if (VAR_13 & VAR_3) { VAR_11--; if (VAR_11 < 8) VAR_11 = 8; }
  if (VAR_13 & VAR_0) { VAR_11++; if (VAR_11 > 224-VAR_5) VAR_11 = 224-VAR_5; }
  if (VAR_13 & VAR_1) { VAR_10--; if (VAR_10 < 0) VAR_10 = 0; }
  if (VAR_13 & VAR_2) {
   int VAR_14 = (VAR_6.video.reg[12]&1) ? 319 : 255;
   VAR_10++;
   if (VAR_10 > VAR_14-VAR_4)
    VAR_10 = VAR_14-VAR_4;
  }
  VAR_8.pen_pos[0] = VAR_10;
  if (!(VAR_6.video.reg[12]&1)) VAR_8.pen_pos[0] += VAR_10/4;
  VAR_8.pen_pos[0] += 0x3c;
  VAR_8.pen_pos[1] = VAR_9 == 1 ? (0x2f8 + VAR_11) : (0x1fc + VAR_11);
 }
}
