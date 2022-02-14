
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(void)
{



  int VAR_3 = 320/4, *VAR_4 = (int *)(VAR_0+8);
  VAR_2 |= VAR_1;
  while (VAR_3--)
  {
    *VAR_4++ &= 0xbfbfbfbf;
  }
}
