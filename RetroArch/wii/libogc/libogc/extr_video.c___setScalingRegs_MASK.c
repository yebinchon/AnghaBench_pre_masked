
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(u16 VAR_2,u16 VAR_3,s32 VAR_4)
{
 if(VAR_4) VAR_2 = FUNC_1(VAR_2,1,16);
 if(VAR_2<VAR_3) {
  VAR_1[37] = 0x1000|((VAR_3+(FUNC_1(VAR_2,8,16)-1))/VAR_3);
  VAR_1[56] = VAR_2;
  VAR_0 |= FUNC_0(37);
  VAR_0 |= FUNC_0(56);
 } else {
  VAR_1[37] = 0x100;
  VAR_0 |= FUNC_0(37);
 }
}
