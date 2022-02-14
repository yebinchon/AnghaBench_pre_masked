
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_3__ {int timer; } ;
struct TYPE_4__ {TYPE_1__ saphir; } ;
struct IsdnCardState {TYPE_2__ hw; int lock; int (* readisac ) (struct IsdnCardState*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct IsdnCardState*,int ) ;

__attribute__((used)) static void
FUNC_4(struct IsdnCardState *VAR_3)
{
 u_long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);

 VAR_3->readisac(VAR_3, VAR_1);
 FUNC_2(&VAR_3->lock, VAR_4);
 FUNC_0(&VAR_3->hw.saphir.timer, VAR_2+1*VAR_0);
}
