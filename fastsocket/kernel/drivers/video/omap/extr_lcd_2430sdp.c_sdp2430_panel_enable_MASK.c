
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lcd_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct lcd_panel *VAR_17)
{
 u8 VAR_18, VAR_19;
 u8 VAR_20, VAR_21;

 if (FUNC_1()) {
  VAR_19 = VAR_11;
  VAR_18 = VAR_3;
  VAR_21 = VAR_12;
  VAR_20 = VAR_4;

  if (FUNC_2() > VAR_7) {
   FUNC_3(VAR_8, VAR_5,
     VAR_13);
   FUNC_3(VAR_8, VAR_6,
     VAR_14);
  }
 } else {
  VAR_19 = VAR_9;
  VAR_18 = VAR_1;
  VAR_21 = VAR_10;
  VAR_20 = VAR_2;
 }

 FUNC_0(VAR_16, 1);
 FUNC_0(VAR_15, 1);

 if (0 != FUNC_3(VAR_8, VAR_18, VAR_19))
  return -VAR_0;
 if (0 != FUNC_3(VAR_8, VAR_20, VAR_21))
  return -VAR_0;

 return 0;
}
