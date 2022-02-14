
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_range {scalar_t__ begin; scalar_t__ end; } ;
typedef scalar_t__ pinmux_enum_t ;



__attribute__((used)) static int FUNC_0(pinmux_enum_t VAR_0, struct pinmux_range *VAR_1)
{
 if (VAR_0 < VAR_1->begin)
  return 0;

 if (VAR_0 > VAR_1->end)
  return 0;

 return 1;
}
