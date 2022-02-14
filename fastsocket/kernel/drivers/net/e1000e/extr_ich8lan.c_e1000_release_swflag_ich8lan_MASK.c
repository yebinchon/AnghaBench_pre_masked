
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {TYPE_1__* adapter; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_1);

 if (VAR_4 & VAR_0) {
  VAR_4 &= ~VAR_0;
  FUNC_3(VAR_1, VAR_4);
 } else {
  FUNC_1("Semaphore unexpectedly released by sw/fw/hw\n");
 }

 FUNC_0(VAR_2, &VAR_3->adapter->state);
}
