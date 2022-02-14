
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ab3100 {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

u8 FUNC_0(struct ab3100 *VAR_3)
{
 u8 VAR_4 = VAR_2;

 switch (VAR_3->chip_id & 0xf0) {
 case 0xa0:
  VAR_4 = VAR_0;
  break;
 case 0xc0:
  VAR_4 = VAR_1;
  break;
 }
 return VAR_4;
}
