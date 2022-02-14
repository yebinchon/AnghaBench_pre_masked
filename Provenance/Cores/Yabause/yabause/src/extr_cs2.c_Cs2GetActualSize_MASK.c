
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct TYPE_3__ {int HIRQ; scalar_t__ CR4; scalar_t__ CR3; void* CR2; void* CR1; } ;
struct TYPE_4__ {int status; int calcsize; TYPE_1__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_0(void) {
  VAR_2->reg.CR1 = (u16)((VAR_2->status << 8) | ((VAR_2->calcsize >> 16) & 0xFF));
  VAR_2->reg.CR2 = (u16)VAR_2->calcsize;
  VAR_2->reg.CR3 = 0;
  VAR_2->reg.CR4 = 0;
  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
