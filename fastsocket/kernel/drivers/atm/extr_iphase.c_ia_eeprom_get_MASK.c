
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u32 ;
typedef int u16 ;
typedef int IADEV ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16 FUNC_3 (IADEV *VAR_3, u32 VAR_4)
{
 u_short VAR_5;
        u32 VAR_6;
 int VAR_7;




 FUNC_2(VAR_0 + VAR_4);




 VAR_5 = 0;
 for (VAR_7=15; VAR_7>=0; VAR_7--) {
  FUNC_1(VAR_6);
  VAR_5 |= (VAR_6 << VAR_7);
 }
 VAR_2;
 FUNC_0(~VAR_1);
 return VAR_5;
}
