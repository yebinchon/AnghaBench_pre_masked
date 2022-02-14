
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_2(int VAR_6)
{
 u32 VAR_7;


 if (VAR_6 < VAR_5)
  VAR_6 = VAR_5;
 if (VAR_6 > VAR_1)
  VAR_6 = VAR_1;



 VAR_7 = (VAR_2 & FUNC_1(0xF));


 VAR_2 = ( 0
  | FUNC_0(VAR_6)
  | FUNC_1(VAR_7));

 VAR_3 |= VAR_4;

 return (VAR_0/(3*(1 << VAR_6)));
}
