
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned FUNC_0(const unsigned char* VAR_0, size_t VAR_1)
{
  size_t VAR_2, VAR_3 = 0;
  unsigned VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
  for(VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
  {
    if(!VAR_3 && VAR_0[4 * VAR_2 + 3] == 0)
    {
      VAR_4 = VAR_0[4 * VAR_2 + 0]; VAR_5 = VAR_0[4 * VAR_2 + 1]; VAR_6 = VAR_0[4 * VAR_2 + 2];
      VAR_3 = 1;
      VAR_2 = (size_t)(-1);
    }
    else if(VAR_0[4 * VAR_2 + 3] != 255) return 2;

    else if(VAR_3 && VAR_4 == VAR_0[VAR_2 * 4 + 0] && VAR_5 == VAR_0[VAR_2 * 4 + 1] && VAR_6 == VAR_0[VAR_2 * 4 + 2]) return 2;
  }
  return VAR_3;
}
