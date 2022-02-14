
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned char *VAR_1)
{
  unsigned VAR_2;
  VAR_1[0] = 0;
  VAR_1[1] = 1;
  VAR_1 += 2;

  for (VAR_2 = 2; VAR_2 < VAR_0 * 2; VAR_2++)
  {
    size_t VAR_3 = ((size_t)1 << ((VAR_2 >> 1) - 1));
    size_t VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
      VAR_1[VAR_4] = (unsigned char)VAR_2;
    VAR_1 += VAR_3;
  }
}
