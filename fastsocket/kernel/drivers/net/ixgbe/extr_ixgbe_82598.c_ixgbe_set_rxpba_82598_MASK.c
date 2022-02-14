
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;



__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_5, int VAR_6, u32 VAR_7,
      int VAR_8)
{
 u32 VAR_9 = VAR_2;
 u8 VAR_10 = 0;

 if (!VAR_6)
  return;


 switch (VAR_8) {
 case 128:

  VAR_9 = VAR_3;
  for (; VAR_10 < 4; VAR_10++)
   FUNC_2(VAR_5, FUNC_0(VAR_10), VAR_9);

  VAR_9 = VAR_1;

 case 129:
 default:

  for (; VAR_10 < VAR_0; VAR_10++)
   FUNC_2(VAR_5, FUNC_0(VAR_10), VAR_9);
  break;
 }


 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  FUNC_2(VAR_5, FUNC_1(VAR_10), VAR_4);

 return;
}
