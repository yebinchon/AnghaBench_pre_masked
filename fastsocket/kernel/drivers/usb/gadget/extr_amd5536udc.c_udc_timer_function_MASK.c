
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {TYPE_1__* regs; } ;
struct TYPE_6__ {void* expires; } ;
struct TYPE_5__ {int sts; int ctl; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_8 ;
 TYPE_3__* VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_12)
{
 u32 VAR_13;

 FUNC_4(&VAR_10);

 if (VAR_7 > 0) {




  if (VAR_7 > 1) {

   VAR_13 = FUNC_3(&VAR_9->regs->ctl);
   VAR_13 |= FUNC_0(VAR_1);
   FUNC_6(VAR_13, &VAR_9->regs->ctl);
   VAR_7 = -1;
  } else if (FUNC_3(&VAR_9->regs->sts)
    & FUNC_0(VAR_2)) {




   VAR_11.expires = VAR_5 + VAR_0/VAR_3;
   if (!VAR_8) {
    FUNC_1(&VAR_11);
   }
  } else {







   VAR_7++;

   VAR_11.expires = VAR_5 + VAR_0*VAR_4;
   if (!VAR_8) {
    FUNC_1(&VAR_11);
   }
  }

 } else
  VAR_7 = -1;
 FUNC_5(&VAR_10);
 if (VAR_8)
  FUNC_2(&VAR_6);

}
