
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_0,
  unsigned int VAR_1)
{
 int VAR_2, VAR_3 = 4;

 for (VAR_2 = 0; VAR_2 < 7; VAR_2++) {
  if (VAR_1 * VAR_3 >= VAR_0)
   return VAR_2;
  VAR_3 <<= 1;
 }

 return 7;
}
