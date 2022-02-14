
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dword ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0 (long *VAR_2, long *VAR_3, short *VAR_4, long VAR_5)
{
  int VAR_6, VAR_7;
  long VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;

  for (VAR_6 = 0; VAR_6 < VAR_1 - 1; VAR_6++)
  {
    VAR_11 = VAR_2[VAR_6];
    VAR_12 = VAR_2[VAR_6 + VAR_1];
    VAR_9 = VAR_3[VAR_6] >> 1;
    VAR_8 = VAR_9 << 1;
    if (VAR_8 >= 0)
    {
      for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
      {
        VAR_10 = VAR_4[VAR_7] - VAR_12 + (VAR_8 * (VAR_11 >> 16)) + (((dword)(((dword) VAR_9) * ((dword)(VAR_11 & 0xffff)))) >> 15);
        VAR_12 = VAR_11;
        VAR_11 = VAR_10;
      }
    }
    else
    {
      VAR_8 = -VAR_8;
      VAR_9 = -VAR_9;
      for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
      {
        VAR_10 = VAR_4[VAR_7] - VAR_12 - ((VAR_8 * (VAR_11 >> 16)) + (((dword)(((dword) VAR_9) * ((dword)(VAR_11 & 0xffff)))) >> 15));
        VAR_12 = VAR_11;
        VAR_11 = VAR_10;
      }
    }
    VAR_2[VAR_6] = VAR_11;
    VAR_2[VAR_6 + VAR_1] = VAR_12;
  }
  VAR_11 = VAR_2[VAR_6];
  VAR_12 = VAR_2[VAR_6 + VAR_1];
  VAR_8 = (VAR_3[VAR_6] >> 1) << 1;
  if (VAR_8 >= 0)
  {
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      VAR_10 = VAR_4[VAR_7] - VAR_12 + (VAR_8 * (VAR_11 >> 16)) + (((dword)(((dword)(VAR_8 >> 1)) * ((dword)(VAR_11 & 0xffff)))) >> 15);
      VAR_12 = VAR_11;
      VAR_11 = VAR_10;
      VAR_8 -= VAR_0;
    }
  }
  else
  {
    VAR_8 = -VAR_8;
    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      VAR_10 = VAR_4[VAR_7] - VAR_12 - ((VAR_8 * (VAR_11 >> 16)) + (((dword)(((dword)(VAR_8 >> 1)) * ((dword)(VAR_11 & 0xffff)))) >> 15));
      VAR_12 = VAR_11;
      VAR_11 = VAR_10;
      VAR_8 += VAR_0;
    }
  }
  VAR_3[VAR_6] = VAR_8;
  VAR_2[VAR_6] = VAR_11;
  VAR_2[VAR_6 + VAR_1] = VAR_12;
}
