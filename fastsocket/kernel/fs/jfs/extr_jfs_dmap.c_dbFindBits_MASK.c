
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u32 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 u32 VAR_6;



 VAR_5 = 1 << VAR_3;
 FUNC_1(VAR_5 <= VAR_0);




 VAR_2 = ~VAR_2;
 VAR_6 = VAR_1 << (VAR_0 - VAR_5);



 for (VAR_4 = 0; VAR_6 != 0; VAR_4 += VAR_5, VAR_6 >>= VAR_5) {
  if ((VAR_6 & VAR_2) == VAR_6)
   break;
 }

 FUNC_0(VAR_4 < 32);



 return (VAR_4);
}
