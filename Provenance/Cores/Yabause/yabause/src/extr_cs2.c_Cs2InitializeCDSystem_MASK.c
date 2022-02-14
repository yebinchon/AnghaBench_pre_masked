
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int CR1; int HIRQ; } ;
struct TYPE_4__ {int status; int FAD; int speed1x; TYPE_1__ reg; scalar_t__ isdiskchanged; scalar_t__ isbufferfull; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (int) ;

void FUNC_1(void) {
  u16 VAR_7 = 0;
  u8 VAR_8 = VAR_6->reg.CR1 & 0xFF;

  if ((VAR_6->status & 0xF) != VAR_4 && (VAR_6->status & 0xF) != VAR_3)
  {
     VAR_6->status = VAR_5;
     VAR_6->FAD = 150;
  }

  if (VAR_8 & 0x1)
  {

  }

  if (VAR_8 & 0x2)
  {

  }

  if (VAR_8 & 0x4)
  {

  }

  if (VAR_8 & 0x8)
  {

  }

  if (VAR_8 & 0x10)
     VAR_6->speed1x = 1;
  else
     VAR_6->speed1x = 0;

  VAR_7 = VAR_6->reg.HIRQ & 0xFFE5;
  VAR_6->isbufferfull = 0;

  if (VAR_6->isdiskchanged)
     VAR_7 |= VAR_1;
  else
     VAR_7 &= ~VAR_1;

  FUNC_0(VAR_6->status);
  VAR_6->reg.HIRQ = VAR_7 | VAR_0 | VAR_2;
}
