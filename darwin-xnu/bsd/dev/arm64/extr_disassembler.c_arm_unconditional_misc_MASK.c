
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static
int FUNC_2(uint32_t VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2,20,0x7F);

 if ((VAR_3 & 0x60) == 0x20) {

  return VAR_0;
 }

 if ((VAR_3 & 0x71) == 0x40) {
  return FUNC_1(VAR_2);
 }

 return VAR_1;
}
