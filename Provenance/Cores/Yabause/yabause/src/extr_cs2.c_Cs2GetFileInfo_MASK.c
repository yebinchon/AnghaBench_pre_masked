
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int CR3; int CR4; int CR1; int CR2; int HIRQ; } ;
struct TYPE_4__ {int infotranstype; int status; TYPE_1__ reg; scalar_t__ transfercount; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int) ;

void FUNC_1(void) {
  u32 VAR_3;

  VAR_3 = ((VAR_2->reg.CR3 & 0xFF) << 16) | VAR_2->reg.CR4;

  if (VAR_3 == 0xFFFFFF)
  {
     VAR_2->transfercount = 0;
     VAR_2->infotranstype = 2;

     VAR_2->reg.CR1 = VAR_2->status << 8;
     VAR_2->reg.CR2 = 0x05F4;
     VAR_2->reg.CR3 = 0;
     VAR_2->reg.CR4 = 0;
  }
  else
  {
     FUNC_0(VAR_3);

     VAR_2->transfercount = 0;
     VAR_2->infotranstype = 1;

     VAR_2->reg.CR1 = VAR_2->status << 8;
     VAR_2->reg.CR2 = 0x06;
     VAR_2->reg.CR3 = 0;
     VAR_2->reg.CR4 = 0;
  }

  VAR_2->reg.HIRQ |= VAR_0 | VAR_1;
}
