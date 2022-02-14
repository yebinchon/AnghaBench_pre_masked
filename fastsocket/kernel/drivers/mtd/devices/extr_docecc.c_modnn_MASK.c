
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gf ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline gf
FUNC_0(int VAR_2)
{
  while (VAR_2 >= VAR_1) {
    VAR_2 -= VAR_1;
    VAR_2 = (VAR_2 >> VAR_0) + (VAR_2 & VAR_1);
  }
  return VAR_2;
}
