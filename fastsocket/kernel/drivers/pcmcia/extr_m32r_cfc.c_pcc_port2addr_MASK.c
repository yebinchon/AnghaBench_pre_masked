
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_long ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static inline u_long FUNC_0(unsigned long VAR_3, int VAR_4) {
 u_long VAR_5 = 0;
 u_long VAR_6;

 if (VAR_4 == 1) {
  VAR_6 = (VAR_3&1) << 11;
  VAR_3 -= VAR_3 & 1;
  VAR_5 = VAR_1 - VAR_0 + VAR_6 + VAR_3;
 } else if (VAR_4 == 2)
  VAR_5 = VAR_2 - VAR_0 + VAR_3;

 return VAR_5;
}
