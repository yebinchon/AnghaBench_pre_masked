
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static bool FUNC_1(struct ixgbe_hw *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;

 VAR_8 = FUNC_0(VAR_7, VAR_2);
 if ((VAR_8 & VAR_4) != VAR_3)
  return 0;

 VAR_9 = FUNC_0(VAR_7, VAR_5);
 if (!(VAR_9 & VAR_6))
  return 0;

 VAR_10 = FUNC_0(VAR_7, VAR_0);
 if (VAR_10 & VAR_1)
  return 0;

 return 1;
}
