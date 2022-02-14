
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0,char *VAR_1)



{
    int VAR_2;

    VAR_2 = 0;
    if(VAR_0[0] == '@')
    {
      if(VAR_0[1] == '(')
      {
        if(VAR_0[2] != 0)
        {
        do
        {
           VAR_1[VAR_2] = VAR_0[VAR_2];
           VAR_2++;
        }
        while((VAR_0[VAR_2-1] != ')') && (VAR_0[VAR_2] != 0));

        }
      }
      else
        while((VAR_0[VAR_2] != ',') && (VAR_0[VAR_2] != 0))
        {
           VAR_1[VAR_2] = VAR_0[VAR_2];
           VAR_2++;
        }
    }
    else
      while((VAR_0[VAR_2] != ',') && (VAR_0[VAR_2] != 0))
      {
          VAR_1[VAR_2] = VAR_0[VAR_2];
          VAR_2++;
      }

    VAR_1[VAR_2] = 0;

    return VAR_2;
}
