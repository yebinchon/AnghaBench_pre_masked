
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_4__ {int CR3; int CR1; int CR2; int CR4; int HIRQ; } ;
struct TYPE_6__ {TYPE_1__ reg; int status; TYPE_2__* filter; } ;
struct TYPE_5__ {int FAD; int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
  u8 VAR_3;

  VAR_3 = VAR_2->reg.CR3 >> 8;

  VAR_2->filter[VAR_3].FAD = ((VAR_2->reg.CR1 & 0xFF) << 16) | VAR_2->reg.CR2;
  VAR_2->filter[VAR_3].range = ((VAR_2->reg.CR3 & 0xFF) << 16) | VAR_2->reg.CR4;


  FUNC_0(VAR_2->status);
  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
