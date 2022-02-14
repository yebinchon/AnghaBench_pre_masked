
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int CR1; int CR3; int CR4; int HIRQ; scalar_t__ CR2; } ;
struct TYPE_4__ {int status; int numfiles; TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_0(void) {

  VAR_2->reg.CR1 = VAR_2->status << 8;
  VAR_2->reg.CR2 = (u16)(VAR_2->numfiles - 2);
  VAR_2->reg.CR3 = 0x0100;
  VAR_2->reg.CR4 = 0x0002;

  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
