
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(int VAR_3)
{
 int VAR_4;

 VAR_4 = VAR_2;
 while (VAR_4 < VAR_3) {
  if (VAR_4 < (int)VAR_1)
   VAR_4 *= 2;
  else
   VAR_4 += VAR_0;
 }

 return (VAR_4);
}
