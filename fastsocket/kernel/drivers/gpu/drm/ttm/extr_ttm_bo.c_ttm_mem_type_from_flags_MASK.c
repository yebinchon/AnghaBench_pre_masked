
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(uint32_t VAR_2, uint32_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++)
  if (VAR_2 & (1 << VAR_4)) {
   *VAR_3 = VAR_4;
   return 0;
  }
 return -VAR_0;
}
