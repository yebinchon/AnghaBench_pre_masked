
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_8__ {scalar_t__ expires; } ;
struct TYPE_5__ {TYPE_4__ timer; } ;
struct TYPE_6__ {TYPE_1__ hfc; } ;
struct IsdnCardState {TYPE_2__ hw; int lock; TYPE_3__* bcs; } ;
struct TYPE_7__ {scalar_t__ mode; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct IsdnCardState *VAR_2)
{
 int VAR_3 = 0;
 u_long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 if (VAR_2->bcs[0].mode) {
  VAR_3 |= 1;
  FUNC_1(&VAR_2->bcs[0]);
 }
 if (VAR_2->bcs[1].mode) {
  VAR_3 |= 2;
  FUNC_1(&VAR_2->bcs[1]);
 }
 FUNC_3(&VAR_2->lock, VAR_4);
 VAR_3 = VAR_0/100;
 if (!VAR_3)
  VAR_3 = 1;
 VAR_2->hw.hfc.timer.expires = VAR_1 + VAR_3;
 FUNC_0(&VAR_2->hw.hfc.timer);
}
