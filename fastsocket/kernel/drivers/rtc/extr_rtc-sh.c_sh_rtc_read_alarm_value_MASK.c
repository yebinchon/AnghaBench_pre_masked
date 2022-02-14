
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_rtc {scalar_t__ regbase; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct sh_rtc *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0xff;

 VAR_3 = FUNC_1(VAR_1->regbase + VAR_2);
 if (VAR_3 & VAR_0) {
  VAR_3 &= ~VAR_0;
  VAR_4 = FUNC_0(VAR_3);
 }

 return VAR_4;
}
