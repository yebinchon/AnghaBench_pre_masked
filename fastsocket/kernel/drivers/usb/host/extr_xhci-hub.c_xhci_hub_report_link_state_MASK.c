
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(u32 *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = VAR_7 & VAR_1;




 if (VAR_8 == VAR_5)
  return;




 if (VAR_7 & VAR_0) {







  if (VAR_8 != VAR_3 &&
      VAR_8 != VAR_4) {
   VAR_8 = VAR_3;
  }




  VAR_8 |= VAR_2;
 } else {
  if (VAR_8 == VAR_3)
   VAR_8 |= VAR_2;
 }


 *VAR_6 |= VAR_8;
}
