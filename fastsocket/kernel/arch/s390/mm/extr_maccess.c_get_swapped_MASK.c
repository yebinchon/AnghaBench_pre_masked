
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _lowcore {int dummy; } ;


 unsigned long FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(unsigned long VAR_0)
{
 unsigned long VAR_1 = FUNC_0();

 if (VAR_0 < sizeof(struct _lowcore))
  return VAR_0 + VAR_1;
 if (VAR_0 >= VAR_1 && VAR_0 < VAR_1 + sizeof(struct _lowcore))
  return VAR_0 - VAR_1;
 return VAR_0;
}
