
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int CR1; int CR2; int CR3; int CR4; int HIRQ; } ;
struct TYPE_6__ {int status; TYPE_1__ reg; scalar_t__ infotranstype; scalar_t__ transfercount; int TOC; TYPE_2__* cdi; } ;
struct TYPE_5__ {int (* ReadTOC ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int ) ;

void FUNC_1(void) {
  VAR_3->cdi->ReadTOC(VAR_3->TOC);

  VAR_3->transfercount = 0;
  VAR_3->infotranstype = 0;

  VAR_3->reg.CR1 = VAR_3->status << 8;
  VAR_3->reg.CR2 = 0xCC;
  VAR_3->reg.CR3 = 0x0;
  VAR_3->reg.CR4 = 0x0;
  VAR_3->reg.HIRQ |= VAR_0 | VAR_1;
  VAR_3->status = VAR_2;
}
