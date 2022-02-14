
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
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*,char*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_hw *VAR_7, u32 VAR_8)
{
 int VAR_9;


 FUNC_2(VAR_7, VAR_4, VAR_0);
 FUNC_2(VAR_7, VAR_5, VAR_1);
 FUNC_2(VAR_7, VAR_2, VAR_8);
 FUNC_1(VAR_7);
 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
  if (FUNC_0(VAR_7, VAR_2) &
                     VAR_3)
   break;
  FUNC_4(1000, 2000);
 }

 if (VAR_9 >= VAR_6)
  FUNC_3(VAR_7, "Flow Director poll time exceeded!\n");
}
