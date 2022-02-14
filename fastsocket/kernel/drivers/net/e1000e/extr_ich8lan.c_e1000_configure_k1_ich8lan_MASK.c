
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int *) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int,int) ;

s32 FUNC_6(struct e1000_hw *VAR_8, bool VAR_9)
{
 s32 VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = 0;
 u16 VAR_14 = 0;

 VAR_10 = FUNC_0(VAR_8, VAR_6,
           &VAR_14);
 if (VAR_10)
  return VAR_10;

 if (VAR_9)
  VAR_14 |= VAR_7;
 else
  VAR_14 &= ~VAR_7;

 VAR_10 = FUNC_1(VAR_8, VAR_6,
            VAR_14);
 if (VAR_10)
  return VAR_10;

 FUNC_5(20, 40);
 VAR_12 = FUNC_3(VAR_1);
 VAR_11 = FUNC_3(VAR_0);

 VAR_13 = VAR_11 & ~(VAR_5 | VAR_4);
 VAR_13 |= VAR_3;
 FUNC_4(VAR_0, VAR_13);

 FUNC_4(VAR_1, VAR_12 | VAR_2);
 FUNC_2();
 FUNC_5(20, 40);
 FUNC_4(VAR_0, VAR_11);
 FUNC_4(VAR_1, VAR_12);
 FUNC_2();
 FUNC_5(20, 40);

 return 0;
}
