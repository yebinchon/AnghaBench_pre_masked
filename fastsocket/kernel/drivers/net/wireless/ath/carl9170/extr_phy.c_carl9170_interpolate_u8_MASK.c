
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int,int) ;

__attribute__((used)) static u8 FUNC_1(u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4, u8 VAR_5)
{

 s32 VAR_6;

 VAR_6 = FUNC_0(VAR_1 << 8, VAR_2 << 8,
  VAR_3 << 8, VAR_4 << 8, VAR_5 << 8);






 return (VAR_6 >> 8) + ((VAR_6 & (1 << (8 - 1))) >> (8 - 1));

}
