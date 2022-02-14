
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static inline void
FUNC_0(void *VAR_2, int VAR_3)
{




 volatile short *VAR_4 = (volatile short *)(((unsigned long)VAR_2 & ~VAR_1) |
            VAR_0);

 VAR_3 = VAR_3 > 8192 ? 8192 : VAR_3;

 while(VAR_3 > 0) {
  *VAR_4;
  VAR_4 += (32/sizeof(short));
  VAR_3 -= 32;
 }
}
