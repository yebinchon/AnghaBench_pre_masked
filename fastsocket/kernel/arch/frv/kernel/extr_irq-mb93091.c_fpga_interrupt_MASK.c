
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 uint16_t VAR_4, VAR_5 = (unsigned long) VAR_3;

 VAR_4 = FUNC_1();
 VAR_5 = VAR_5 & ~VAR_4 & FUNC_0();


 while (VAR_5) {
  int VAR_6;

  asm("scan %1,gr0,%0" : "=r"(VAR_6) : "r"(VAR_5));
  VAR_6 = 31 - VAR_6;
  VAR_5 &= ~(1 << VAR_6);

  FUNC_2(VAR_0 + VAR_6);
 }

 return VAR_1;
}
