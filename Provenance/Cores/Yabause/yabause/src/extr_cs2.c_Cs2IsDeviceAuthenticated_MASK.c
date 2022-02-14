
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CR1; int HIRQ; scalar_t__ CR4; scalar_t__ CR3; scalar_t__ CR2; } ;
struct TYPE_4__ {int status; TYPE_1__ reg; scalar_t__ satauth; scalar_t__ mpgauth; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_0(void) {
  VAR_1->reg.CR1 = (VAR_1->status << 8);
  if (VAR_1->reg.CR2)
     VAR_1->reg.CR2 = VAR_1->mpgauth;
  else
     VAR_1->reg.CR2 = VAR_1->satauth;
  VAR_1->reg.CR3 = 0;
  VAR_1->reg.CR4 = 0;
  VAR_1->reg.HIRQ |= VAR_0;
}
