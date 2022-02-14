
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int HIRQ; } ;
struct TYPE_4__ {int status; int datatranstype; TYPE_1__ reg; scalar_t__ cdwnum; scalar_t__ isonesectorstored; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int) ;

void FUNC_1(void) {
  if ((VAR_5->status & 0xF) != VAR_3 &&
      (VAR_5->status & 0xF) != VAR_2)
     VAR_5->status = VAR_4;
  VAR_5->isonesectorstored = 0;
  VAR_5->datatranstype = -1;
  VAR_5->cdwnum = 0;
  FUNC_0(VAR_5->status);
  VAR_5->reg.HIRQ |= VAR_0 | VAR_1;
}
