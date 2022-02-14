
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CR1; int CR3; int HIRQ; scalar_t__ CR4; scalar_t__ CR2; } ;
struct TYPE_4__ {int status; int lastbuffer; TYPE_1__ reg; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(void) {
  VAR_1->reg.CR1 = (VAR_1->status << 8);
  VAR_1->reg.CR2 = 0;
  VAR_1->reg.CR3 = VAR_1->lastbuffer << 8;
  VAR_1->reg.CR4 = 0;
  VAR_1->reg.HIRQ |= VAR_0;
}
