
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vfeStopAckPending; int vstate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{




 VAR_5->vstate = VAR_4;


 if (VAR_5->vfeStopAckPending == VAR_1) {
  VAR_5->vfeStopAckPending = VAR_0;
  FUNC_0(VAR_3);
 } else {
  FUNC_1();
  FUNC_0(VAR_2);
 }
}
