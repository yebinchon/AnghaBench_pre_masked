
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;

s32 FUNC_6(struct e1000_hw *VAR_3, u16 VAR_4)
{
 u32 VAR_5;
 u32 VAR_6 = VAR_4;
 u32 VAR_7 = VAR_4 << 16;
 s32 VAR_8 = VAR_1;
 s32 VAR_9 = 0, VAR_10 = 200;

 while (VAR_9 < VAR_10) {
  if (FUNC_1(VAR_3)) {
   VAR_8 = -VAR_0;
   goto out;
  }

  VAR_5 = FUNC_4(VAR_2);
  if (!(VAR_5 & (VAR_7 | VAR_6)))
   break;


  FUNC_2(VAR_3);
  FUNC_3(5);
  VAR_9++;
 }

 if (VAR_9 == VAR_10) {
  FUNC_0("Driver can't access resource, SW_FW_SYNC timeout.\n");
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_5 |= VAR_6;
 FUNC_5(VAR_2, VAR_5);

 FUNC_2(VAR_3);
out:
 return VAR_8;
}
