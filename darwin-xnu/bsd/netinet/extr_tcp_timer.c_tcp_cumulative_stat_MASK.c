
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef scalar_t__ int32_t ;



__attribute__((used)) static inline void
FUNC_0(u_int32_t VAR_0, u_int32_t *VAR_1, u_int32_t *VAR_2)
{

 int32_t VAR_3 = (int32_t) (VAR_0 - *VAR_1);
 if (VAR_3 > 0)
  *VAR_2 = VAR_3;
 else
  *VAR_2 = 0;
 *VAR_1 = VAR_0;
 return;
}
