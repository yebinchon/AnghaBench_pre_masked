
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 int VAR_1;
 int VAR_2 = (VAR_0 - 12) % 9;

 if (VAR_2 == 0)
  VAR_1 = VAR_0;
 else
  VAR_1 = VAR_0 + 9 - VAR_2;
 if (VAR_1 > 64)
  VAR_1 = 64;
 return VAR_1;
}
