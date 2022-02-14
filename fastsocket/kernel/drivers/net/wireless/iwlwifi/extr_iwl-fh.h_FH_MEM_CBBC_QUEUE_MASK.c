
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline unsigned int FUNC_1(unsigned int VAR_3)
{
 if (VAR_3 < 16)
  return VAR_0 + 4 * VAR_3;
 if (VAR_3 < 20)
  return VAR_1 + 4 * (VAR_3 - 16);
 FUNC_0(VAR_3 >= 32);
 return VAR_2 + 4 * (VAR_3 - 20);
}
