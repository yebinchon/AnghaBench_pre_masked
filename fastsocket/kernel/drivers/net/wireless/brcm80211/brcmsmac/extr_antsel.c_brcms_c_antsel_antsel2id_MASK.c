
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct antsel_info {scalar_t__ antsel_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;

u8 FUNC_0(struct antsel_info *VAR_4, u16 VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_4->antsel_type == VAR_1) {

  VAR_6 = VAR_3[(VAR_5 & 0xf)];
  return VAR_6;

 } else if (VAR_4->antsel_type == VAR_0) {

  VAR_6 = VAR_2[(VAR_5 & 0xf)];
  return VAR_6;
 }

 return VAR_6;
}
