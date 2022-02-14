
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CR1; int CR2; int CR3; int CR4; int HIRQ; } ;
struct TYPE_4__ {int status; TYPE_1__ reg; scalar_t__ mpgauth; scalar_t__ isdiskchanged; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_0(void) {
  if ((VAR_3->status & 0xF) != VAR_2 && (VAR_3->status & 0xF) != VAR_1)
     VAR_3->isdiskchanged = 0;

  VAR_3->reg.CR1 = VAR_3->status << 8;

  VAR_3->reg.CR2 = 0x0201;


  if (VAR_3->mpgauth)
     VAR_3->reg.CR3 = 0x1;
  else
     VAR_3->reg.CR3 = 0;


  VAR_3->reg.CR4 = 0x0400;
  VAR_3->reg.HIRQ |= VAR_0;
}
