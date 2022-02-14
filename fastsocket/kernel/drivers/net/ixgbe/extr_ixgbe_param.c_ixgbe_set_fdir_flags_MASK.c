
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_adapter {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;

void FUNC_2(struct ixgbe_adapter *VAR_2, u32 VAR_3)
{
 u32 *VAR_4 = &VAR_2->flags;


 *VAR_4 |= VAR_3;


 if (!FUNC_1(VAR_2)) {




  *VAR_4 &= ~(VAR_0 |
        VAR_1);
  FUNC_0("Flow Director disabled\n");
 }
}
