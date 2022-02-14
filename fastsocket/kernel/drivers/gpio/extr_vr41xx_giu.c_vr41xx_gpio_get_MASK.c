
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gpio_chip {unsigned int ngpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_5, unsigned VAR_6)
{
 u16 VAR_7, VAR_8;

 if (VAR_6 >= VAR_5->ngpio)
  return -VAR_0;

 if (VAR_6 < 16) {
  VAR_7 = FUNC_0(VAR_2);
  VAR_8 = 1 << VAR_6;
 } else if (VAR_6 < 32) {
  VAR_7 = FUNC_0(VAR_1);
  VAR_8 = 1 << (VAR_6 - 16);
 } else if (VAR_6 < 48) {
  VAR_7 = FUNC_0(VAR_4);
  VAR_8 = 1 << (VAR_6 - 32);
 } else {
  VAR_7 = FUNC_0(VAR_3);
  VAR_8 = 1 << (VAR_6 - 48);
 }

 if (VAR_7 & VAR_8)
  return 1;

 return 0;
}
