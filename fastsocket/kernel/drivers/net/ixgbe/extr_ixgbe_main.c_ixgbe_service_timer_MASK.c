
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int flags; int timer_event_accumulator; int service_timer; int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3)
{
 struct ixgbe_adapter *VAR_4 = (struct ixgbe_adapter *)VAR_3;
 unsigned long VAR_5;
 bool VAR_6 = 1;


 if (VAR_4->flags & VAR_1)
  VAR_5 = VAR_0 / 10;
 else
  VAR_5 = VAR_0 * 2;
 FUNC_2(&VAR_4->service_timer, VAR_5 + VAR_2);

 if (VAR_6)
  FUNC_1(VAR_4);
}
