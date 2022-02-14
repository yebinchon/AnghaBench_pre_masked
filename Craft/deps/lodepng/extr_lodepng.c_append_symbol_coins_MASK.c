
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int weight; int symbols; } ;
typedef TYPE_1__ Coin ;


 int FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static unsigned FUNC_1(Coin* VAR_0, const unsigned* VAR_1, unsigned VAR_2, size_t VAR_3)
{
  unsigned VAR_4;
  unsigned VAR_5 = 0;
  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
    if(VAR_1[VAR_4] != 0)
    {
      VAR_0[VAR_5].weight = VAR_1[VAR_4] / (float)VAR_3;
      FUNC_0(&VAR_0[VAR_5].symbols, VAR_4);
      VAR_5++;
    }
  }
  return 0;
}
