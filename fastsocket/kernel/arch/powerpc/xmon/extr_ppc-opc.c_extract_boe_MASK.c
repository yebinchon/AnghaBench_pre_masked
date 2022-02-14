
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long,int) ;

__attribute__((used)) static long
FUNC_1 (unsigned long VAR_0,
      int VAR_1,
      int *VAR_2)
{
  long VAR_3;

  VAR_3 = (VAR_0 >> 21) & 0x1f;
  if (!FUNC_0 (VAR_3, VAR_1))
    *VAR_2 = 1;
  return VAR_3 & 0x1e;
}
