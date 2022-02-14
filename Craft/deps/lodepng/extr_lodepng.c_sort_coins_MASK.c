
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float weight; int symbols; } ;
typedef TYPE_1__ Coin ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(Coin* VAR_0, size_t VAR_1)
{
  size_t VAR_2 = VAR_1;
  unsigned char VAR_3 = 0;
  while((VAR_2 > 1) || VAR_3)
  {
    size_t VAR_4;
    VAR_2 = (VAR_2 * 10) / 13;
    if(VAR_2 == 9 || VAR_2 == 10) VAR_2 = 11;
    if(VAR_2 < 1) VAR_2 = 1;
    VAR_3 = 0;
    for(VAR_4 = 0; VAR_4 < VAR_1 - VAR_2; VAR_4++)
    {
      size_t VAR_5 = VAR_4 + VAR_2;
      if(VAR_0[VAR_5].weight < VAR_0[VAR_4].weight)
      {
        float VAR_6 = VAR_0[VAR_5].weight; VAR_0[VAR_5].weight = VAR_0[VAR_4].weight; VAR_0[VAR_4].weight = VAR_6;
        FUNC_0(&VAR_0[VAR_4].symbols, &VAR_0[VAR_5].symbols);
        VAR_3 = 1;
      }
    }
  }
}
