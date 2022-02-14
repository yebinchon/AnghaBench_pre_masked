
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CR1; int CR2; int HIRQ; scalar_t__ CR4; scalar_t__ CR3; } ;
struct TYPE_4__ {int status; TYPE_1__ reg; scalar_t__ mpgauth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;

void FUNC_0(void) {

  if (VAR_4->mpgauth)
     VAR_4->reg.CR1 = VAR_4->status << 8;
  else
     VAR_4->reg.CR1 = 0xFF00;


  if (VAR_4->reg.CR2 == 0x0001)
     VAR_4->reg.HIRQ |= VAR_0 | VAR_1 | VAR_2 | VAR_3;
  else
     VAR_4->reg.HIRQ |= VAR_0 | VAR_2 | VAR_3;

  VAR_4->reg.CR2 = 0;
  VAR_4->reg.CR3 = 0;
  VAR_4->reg.CR4 = 0;


}
