
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline int FUNC_0(int VAR_0)
{
 if (VAR_0 < (23 << 9))
  VAR_0 = (23 << 9);
 else if (VAR_0 > (127 << 9))
  VAR_0 = (127 << 9);
 return (VAR_0 >> 9) - 119;
}
