
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;
 int VAR_5 ;

void FUNC_2(void)
{
  int VAR_6 = (VAR_3.video.reg[0xC] & 8) >> 3;
  if (VAR_4 & VAR_2)
    VAR_6 = 0;

  FUNC_0(VAR_6);
  if (VAR_5 & VAR_1) {

    FUNC_1(VAR_0 + 0x40, VAR_0, 0x40*2);
    FUNC_1(VAR_0 + 0x80, VAR_0, 0x40*2);
  }
}
