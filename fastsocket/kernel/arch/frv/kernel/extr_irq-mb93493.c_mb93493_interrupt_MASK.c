
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void volatile*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 volatile void *VAR_4 = VAR_3;
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 VAR_5 = VAR_5 & (VAR_5 >> 16) & 0xffff;


 while (VAR_5) {
  int VAR_6;

  asm("scan %1,gr0,%0" : "=r"(VAR_6) : "r"(VAR_5));
  VAR_6 = 31 - VAR_6;
  VAR_5 &= ~(1 << VAR_6);

  FUNC_0(VAR_0 + VAR_6);
 }

 return VAR_1;
}
