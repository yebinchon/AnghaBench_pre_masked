
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;



__attribute__((used)) static inline u64 FUNC_0(u64 VAR_0, unsigned int VAR_1)
{
 if (VAR_1) {
  if (VAR_1 < 64)
   VAR_0 = VAR_0 >> VAR_1 | ((VAR_0 << (64 - VAR_1)) != 0);
  else
   VAR_0 = VAR_0 != 0;
 }
 return VAR_0;
}
