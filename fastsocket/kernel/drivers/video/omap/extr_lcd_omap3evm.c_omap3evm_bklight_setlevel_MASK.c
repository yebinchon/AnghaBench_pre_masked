
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lcd_panel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct lcd_panel *VAR_3,
      unsigned int VAR_4)
{
 u8 VAR_5;
 if ((VAR_4 >= 0) && (VAR_4 <= 100)) {
  VAR_5 = (125 * (100 - VAR_4)) / 100 + 2;
  FUNC_0(VAR_0, VAR_5, VAR_1);
  VAR_2 = VAR_4;
 }
 return 0;
}
