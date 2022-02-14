
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgb_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgb_hw*,int ) ;
 int FUNC_1 (struct ixgb_hw*,int ,int) ;
 int FUNC_2 (struct ixgb_hw*,int*) ;
 int FUNC_3 (struct ixgb_hw*,int*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ixgb_hw *VAR_3,
      u16 VAR_4,
      u16 VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;





 VAR_7 = 0x01 << (VAR_5 - 1);
 VAR_6 = FUNC_0(VAR_3, VAR_0);
 VAR_6 &= ~(VAR_2 | VAR_1);
 do {





  VAR_6 &= ~VAR_1;

  if (VAR_4 & VAR_7)
   VAR_6 |= VAR_1;

  FUNC_1(VAR_3, VAR_0, VAR_6);

  FUNC_4(50);

  FUNC_3(VAR_3, &VAR_6);
  FUNC_2(VAR_3, &VAR_6);

  VAR_7 = VAR_7 >> 1;

 } while (VAR_7);


 VAR_6 &= ~VAR_1;
 FUNC_1(VAR_3, VAR_0, VAR_6);
 return;
}
