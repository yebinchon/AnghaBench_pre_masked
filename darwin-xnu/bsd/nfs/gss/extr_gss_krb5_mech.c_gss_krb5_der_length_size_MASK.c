
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0)
{
 return
  VAR_0 < (1 << 7) ? 1 :
  VAR_0 < (1 << 8) ? 2 :
  VAR_0 < (1 << 16) ? 3 :
  VAR_0 < (1 << 24) ? 4 : 5;
}
