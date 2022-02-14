
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
int FUNC_1(uint16_t VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5,5,0x7F);

 if ((VAR_6 & 0x70) == 0x30 || (VAR_6 & 0x70) == 0x70) {

  return VAR_2;
 } else if ((VAR_6 & 0x78) == 0x28) {

  return VAR_4;
 } else if ((VAR_6 & 0x78) == 0x68) {
  return VAR_3;
 } else if ((VAR_6 & 0x28) == 0x08) {
  return VAR_0;
 }


 return VAR_1;
}
