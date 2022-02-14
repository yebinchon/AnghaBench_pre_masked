
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void FUNC_0(void)
{
  int VAR_7;






    if(VAR_6)
    {
      if(VAR_4[0] == 0x0d)
      {
        VAR_1 = 0x9b;
      }
    }
    else
    {
      VAR_1 = VAR_4[0];
    }

    VAR_3--;

    for(VAR_7 = 0; VAR_7 <= VAR_3; VAR_7++)
    {
      VAR_4[VAR_7] = VAR_4[VAR_7+1];
    }


    if(VAR_6 && VAR_5 && (VAR_4[0] == 0x0a))
    {
      for(VAR_7 = 0; VAR_7 <= VAR_3; VAR_7++)
      {
        VAR_4[VAR_7] = VAR_4[VAR_7+1];
      }
    }



  VAR_2 = 1;
  VAR_0;
}
