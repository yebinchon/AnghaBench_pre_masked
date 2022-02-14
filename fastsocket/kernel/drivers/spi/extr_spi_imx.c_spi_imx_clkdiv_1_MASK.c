
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1,
  unsigned int VAR_2)
{
 int VAR_3, VAR_4;

 if (FUNC_0())
  VAR_4 = 18;
 else
  VAR_4 = 16;

 for (VAR_3 = 2; VAR_3 < VAR_4; VAR_3++)
  if (VAR_2 * VAR_0[VAR_3] >= VAR_1)
   return VAR_3;

 return VAR_4;
}
