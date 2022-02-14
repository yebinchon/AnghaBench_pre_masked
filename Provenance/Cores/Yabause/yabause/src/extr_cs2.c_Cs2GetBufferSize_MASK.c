
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int CR1; int CR3; int HIRQ; int CR4; scalar_t__ CR2; } ;
struct TYPE_4__ {int status; TYPE_1__ reg; scalar_t__ blockfreespace; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(void) {
  VAR_1->reg.CR1 = VAR_1->status << 8;
  VAR_1->reg.CR2 = (u16)VAR_1->blockfreespace;
  VAR_1->reg.CR3 = VAR_3 << 8;
  VAR_1->reg.CR4 = VAR_2;
  VAR_1->reg.HIRQ |= VAR_0;
}
