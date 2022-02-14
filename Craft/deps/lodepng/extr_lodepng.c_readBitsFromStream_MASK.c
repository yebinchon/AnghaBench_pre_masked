
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t,unsigned char const*) ;

__attribute__((used)) static unsigned FUNC_1(size_t* VAR_0, const unsigned char* VAR_1, size_t VAR_2)
{
  unsigned VAR_3 = 0, VAR_4;
  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
    VAR_3 += ((unsigned)FUNC_0(*VAR_0, VAR_1)) << VAR_4;
    (*VAR_0)++;
  }
  return VAR_3;
}
