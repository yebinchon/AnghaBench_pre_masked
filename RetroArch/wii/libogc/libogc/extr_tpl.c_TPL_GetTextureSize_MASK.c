
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
__attribute__((used)) static u32 FUNC_0(u32 VAR_0,u32 VAR_1,u32 VAR_2)
{
 u32 VAR_3 = 0;

 switch(VAR_2) {
   case 134:
   case 137:
   case 135:
    VAR_3 = ((VAR_0+7)>>3)*((VAR_1+7)>>3)*32;
    break;
   case 133:
   case 132:
   case 136:
    VAR_3 = ((VAR_0+7)>>3)*((VAR_1+7)>>2)*32;
    break;
   case 131:
   case 138:
   case 130:
   case 129:
    VAR_3 = ((VAR_0+3)>>2)*((VAR_1+3)>>2)*32;
    break;
   case 128:
    VAR_3 = ((VAR_0+3)>>2)*((VAR_1+3)>>2)*32*2;
    break;
   default:
    break;
 }
 return VAR_3;
}
