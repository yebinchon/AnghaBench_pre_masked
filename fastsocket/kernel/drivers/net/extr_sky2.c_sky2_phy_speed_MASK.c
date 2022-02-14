
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sky2_hw {int flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static u16 FUNC_0(const struct sky2_hw *VAR_6, u16 VAR_7)
{
 if (VAR_6->flags & VAR_1)
  return VAR_5;

 if (!(VAR_6->flags & VAR_2)) {
  if (VAR_7 & 129)
   return VAR_4;
  else
   return VAR_3;
 }

 switch (VAR_7 & VAR_0) {
 case 128:
  return VAR_5;
 case 129:
  return VAR_4;
 default:
  return VAR_3;
 }
}
