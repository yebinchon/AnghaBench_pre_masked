
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u8 FUNC_0(u16 VAR_4, u16 VAR_5)
{
 u8 VAR_6 = 0;

 if (VAR_4 & VAR_5 & VAR_0) {
  VAR_6 = VAR_3 | VAR_2;
 } else if (VAR_4 & VAR_5 & VAR_1) {
  if (VAR_4 & VAR_0)
   VAR_6 = VAR_2;
  if (VAR_5 & VAR_0)
   VAR_6 = VAR_3;
 }

 return VAR_6;
}
