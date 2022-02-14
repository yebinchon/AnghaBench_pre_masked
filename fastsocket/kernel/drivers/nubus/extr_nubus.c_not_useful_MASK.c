
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(void *VAR_0, int VAR_1)
{
 unsigned long VAR_2=(unsigned long)VAR_0;
 VAR_2 &= 3;
 if(VAR_1 & (1<<VAR_2))
  return 0;
 return 1;
}
