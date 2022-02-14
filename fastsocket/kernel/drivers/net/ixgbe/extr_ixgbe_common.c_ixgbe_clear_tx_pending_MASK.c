
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct ixgbe_hw *VAR_5)
{
 u32 VAR_6, VAR_7;





 if (!(VAR_5->mac.flags & VAR_0))
  return;






 VAR_7 = FUNC_0(VAR_5, VAR_3);
 FUNC_2(VAR_5, VAR_3, VAR_7 | VAR_4);


 VAR_6 = FUNC_0(VAR_5, VAR_1);
 FUNC_2(VAR_5, VAR_1,
   VAR_6 | VAR_2);


 FUNC_1(VAR_5);
 FUNC_3(20);


 FUNC_2(VAR_5, VAR_1, VAR_6);
 FUNC_2(VAR_5, VAR_3, VAR_7);
}
