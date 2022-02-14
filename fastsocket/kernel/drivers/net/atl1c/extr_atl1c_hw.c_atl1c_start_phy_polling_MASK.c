
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct atl1c_hw {int ctrl_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct atl1c_hw*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct atl1c_hw*) ;
 int FUNC_3 (int) ;

void FUNC_4(struct atl1c_hw *VAR_8, u16 VAR_9)
{
 u32 VAR_10;

 if (!(VAR_8->ctrl_flags & VAR_0))
  return;

 VAR_10 = VAR_5 |
  FUNC_1(VAR_2, VAR_9) |
  FUNC_1(VAR_4, 1) |
  VAR_6 |
  VAR_3;
 FUNC_0(VAR_8, VAR_7, VAR_10);
 FUNC_2(VAR_8);
 VAR_10 |= VAR_1;
 VAR_10 &= ~VAR_6;
 FUNC_0(VAR_8, VAR_7, VAR_10);
 FUNC_3(30);
}
