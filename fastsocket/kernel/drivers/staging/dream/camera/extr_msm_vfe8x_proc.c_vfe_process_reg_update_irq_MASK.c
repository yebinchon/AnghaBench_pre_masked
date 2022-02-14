
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vfeStartAckPendingFlag; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 FUNC_0("vfe_process_reg_update_irq: ackPendingFlag is %d\n",
 VAR_4->vfeStartAckPendingFlag);
 if (VAR_4->vfeStartAckPendingFlag == VAR_1) {
  FUNC_1(VAR_2);
  VAR_4->vfeStartAckPendingFlag = VAR_0;
 } else
  FUNC_1(VAR_3);
}
