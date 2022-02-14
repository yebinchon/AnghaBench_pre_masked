
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long FUNC_0 (unsigned long*) ;

__attribute__((used)) static inline unsigned long *FUNC_1(unsigned long *VAR_0,
       long VAR_1)
{
 long VAR_2 = FUNC_0(VAR_0) + VAR_1;
 int VAR_3 = 0;

 if (VAR_1 < 0)
  VAR_2 -= 0x3e;
 if (VAR_2 < 0) {
  while (VAR_2 <= -0x3f) {
   VAR_3--;
   VAR_2 += 0x3f;
  }
 } else {
  while (VAR_2 >= 0x3f) {
   VAR_3++;
   VAR_2 -= 0x3f;
  }
 }

 return VAR_0 + VAR_1 + VAR_3;
}
