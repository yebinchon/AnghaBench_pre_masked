
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned
FUNC_0(unsigned VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = VAR_0 * 1000;
 unsigned VAR_4, VAR_5;

 if ((VAR_3 + VAR_2) < VAR_1)
  return VAR_1 / 1000;

 VAR_4 = (VAR_3 + VAR_2 - 1) / VAR_2;
 VAR_5 = (VAR_1 + VAR_2 - 1) / VAR_2;

 if (VAR_4 >= VAR_5)
  VAR_5 = VAR_4 + 1;

 return (VAR_5 * VAR_2) / 1000;
}
