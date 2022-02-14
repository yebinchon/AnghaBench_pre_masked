
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct twl4030_keypad {int dbg_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct twl4030_keypad *VAR_1, u8 VAR_2, u32 VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3);

 if (VAR_4 < 0)
  FUNC_0(VAR_1->dbg_dev,
   "Could not write TWL4030: %X - ret %d[%x]\n",
    VAR_3, VAR_4, VAR_4);

 return VAR_4;
}
