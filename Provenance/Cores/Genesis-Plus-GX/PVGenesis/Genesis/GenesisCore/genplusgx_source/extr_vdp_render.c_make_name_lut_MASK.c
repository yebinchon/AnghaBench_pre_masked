
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
  int VAR_1, VAR_2;
  int VAR_3, VAR_4;
  int VAR_5, VAR_6;
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < 0x400; VAR_7 += 1)
  {

    VAR_1 = VAR_7 & 3;
    VAR_2 = (VAR_7 >> 2) & 3;
    VAR_4 = (VAR_7 >> 4) & 3;
    VAR_3 = (VAR_7 >> 6) & 3;
    VAR_5 = (VAR_7 >> 8) & 1;
    VAR_6 = (VAR_7 >> 9) & 1;

    if ((VAR_2 > VAR_4) || VAR_1 > VAR_3)
    {

      VAR_0[VAR_7] = -1;
    }
    else
    {

      if(VAR_5) VAR_1 = (VAR_3 - VAR_1);
      if(VAR_6) VAR_2 = (VAR_4 - VAR_2);


      VAR_0[VAR_7] = VAR_2 + (VAR_1 * (VAR_4 + 1));
    }
  }
}
