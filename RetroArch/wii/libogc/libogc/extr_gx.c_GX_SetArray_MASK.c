
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;

void FUNC_2(u32 VAR_4,void *VAR_5,u8 VAR_6)
{
 u32 VAR_7 = 0;

 if(VAR_4==VAR_1) VAR_4 = VAR_2;
 if(VAR_4>=VAR_3 && VAR_4<=VAR_0) {
  VAR_7 = VAR_4-VAR_3;
  FUNC_0((0xA0+VAR_7),(u32)FUNC_1(VAR_5));
  FUNC_0((0xB0+VAR_7),(u32)VAR_6);
 }
}
