
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_3__ {int CR1; int CR3; int CR4; int HIRQ; scalar_t__ CR2; } ;
struct TYPE_4__ {int* TOC; int status; TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_0(void) {

  switch (VAR_2->reg.CR1 & 0xFF) {
    case 0:
            VAR_2->reg.CR3 = (u16)(0x0100 | ((VAR_2->TOC[101] & 0xFF0000) >> 16));
            VAR_2->reg.CR4 = (u16)VAR_2->TOC[101];
            break;
    case 1:
            VAR_2->reg.CR3 = 0x0100;
            VAR_2->reg.CR4 = 0;
            break;
    default:
            VAR_2->reg.CR3 = 0xFFFF;
            VAR_2->reg.CR4 = 0xFFFF;
            break;
  }

  VAR_2->status = VAR_1;
  VAR_2->reg.CR1 = VAR_2->status << 8;
  VAR_2->reg.CR2 = 0;

  VAR_2->reg.HIRQ |= VAR_0;
}
