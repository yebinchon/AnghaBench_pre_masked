
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* reg; } ;
struct TYPE_4__ {TYPE_1__ video; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

void FUNC_1(void)
{
  int VAR_10 = 192;
  VAR_9 = 0;
  VAR_8 = 24;
  VAR_6 = VAR_3;

  if ((VAR_4.video.reg[0] & 6) == 6 && (VAR_4.video.reg[1] & 0x18)) {
    if (VAR_4.video.reg[1] & 0x08) {
      VAR_8 = 0;
      VAR_10 = 240;
    }
    else {
      VAR_8 = 8;
      VAR_10 = 224;
    }
  }

  if (VAR_6 != VAR_7 || VAR_10 != VAR_5) {
    FUNC_0(VAR_8, VAR_10, 1);
    VAR_7 = VAR_6;
    VAR_5 = VAR_10;
  }

  VAR_0 = (char *)VAR_1 + VAR_8 * VAR_2;
}
