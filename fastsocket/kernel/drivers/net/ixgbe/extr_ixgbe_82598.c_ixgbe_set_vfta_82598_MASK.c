
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_1, u32 VAR_2, u32 VAR_3,
    bool VAR_4)
{
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (VAR_2 > 4095)
  return VAR_0;


 VAR_5 = (VAR_2 >> 5) & 0x7F;


 VAR_8 = ((VAR_2 >> 3) & 0x03);
 VAR_6 = (VAR_2 & 0x7) << 2;


 VAR_7 = FUNC_0(VAR_1, FUNC_2(VAR_8, VAR_5));
 VAR_7 &= (~(0x0F << VAR_6));
 VAR_7 |= (VAR_3 << VAR_6);
 FUNC_3(VAR_1, FUNC_2(VAR_8, VAR_5), VAR_7);


 VAR_6 = VAR_2 & 0x1F;

 VAR_7 = FUNC_0(VAR_1, FUNC_1(VAR_5));
 if (VAR_4)

  VAR_7 |= (1 << VAR_6);
 else

  VAR_7 &= ~(1 << VAR_6);
 FUNC_3(VAR_1, FUNC_1(VAR_5), VAR_7);

 return 0;
}
