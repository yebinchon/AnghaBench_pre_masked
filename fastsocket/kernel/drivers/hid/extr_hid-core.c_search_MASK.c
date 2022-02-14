
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __s32 ;



__attribute__((used)) static __inline__ int FUNC_0(__s32 *VAR_0, __s32 VAR_1, unsigned VAR_2)
{
 while (VAR_2--) {
  if (*VAR_0++ == VAR_1)
   return 0;
 }
 return -1;
}
