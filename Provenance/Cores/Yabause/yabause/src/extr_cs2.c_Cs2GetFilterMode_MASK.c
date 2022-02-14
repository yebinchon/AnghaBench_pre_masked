
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_5__ {int CR3; int CR1; int HIRQ; scalar_t__ CR4; scalar_t__ CR2; } ;
struct TYPE_6__ {int status; TYPE_2__ reg; TYPE_1__* filter; } ;
struct TYPE_4__ {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;

void FUNC_0(void) {
  u8 VAR_3;

  VAR_3 = VAR_2->reg.CR3 >> 8;

  VAR_2->reg.CR1 = (VAR_2->status << 8) | VAR_2->filter[VAR_3].mode;
  VAR_2->reg.CR2 = 0;
  VAR_2->reg.CR3 = 0;
  VAR_2->reg.CR4 = 0;
  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
