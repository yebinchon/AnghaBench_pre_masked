
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {unsigned int size; size_t* data; } ;
struct TYPE_13__ {TYPE_1__ symbols; } ;
typedef TYPE_2__ Coin ;


 int FUNC_0 (TYPE_2__*,TYPE_2__*) ;
 unsigned int FUNC_1 (TYPE_2__*,unsigned int const*,size_t,size_t) ;
 int FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,unsigned int) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,unsigned int) ;

unsigned FUNC_8(unsigned* VAR_0, const unsigned* VAR_1,
                                      size_t VAR_2, unsigned VAR_3)
{
  unsigned VAR_4, VAR_5;
  size_t VAR_6 = 0, VAR_7 = 0;
  unsigned VAR_8 = 0;
  Coin* VAR_9;
  Coin* VAR_10;
  unsigned VAR_11;
  unsigned VAR_12;

  if(VAR_2 == 0) return 80;

  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  {
    if(VAR_1[VAR_4] > 0)
    {
      VAR_7++;
      VAR_6 += VAR_1[VAR_4];
    }
  }

  for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) VAR_0[VAR_4] = 0;






  if(VAR_7 == 0)
  {
    VAR_0[0] = VAR_0[1] = 1;
  }
  else if(VAR_7 == 1)
  {
    for(VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
    {
      if(VAR_1[VAR_4])
      {
        VAR_0[VAR_4] = 1;
        VAR_0[VAR_4 == 0 ? 1 : 0] = 1;
        break;
      }
    }
  }
  else
  {



    VAR_12 = VAR_7 * 2;
    VAR_9 = (Coin*)FUNC_6(sizeof(Coin) * VAR_12);
    VAR_10 = (Coin*)FUNC_6(sizeof(Coin) * VAR_12);
    if(!VAR_9 || !VAR_10)
    {
      FUNC_5(VAR_9);
      FUNC_5(VAR_10);
      return 83;
    }
    FUNC_4(VAR_9, VAR_12);
    FUNC_4(VAR_10, VAR_12);


    VAR_8 = FUNC_1(VAR_9, VAR_1, VAR_2, VAR_6);
    VAR_11 = VAR_7;
    FUNC_7(VAR_9, VAR_11);
    if(!VAR_8)
    {
      unsigned VAR_13 = 0;
      for(VAR_5 = 1; VAR_5 <= VAR_3 && !VAR_8; VAR_5++)
      {
        unsigned VAR_14;
        Coin* VAR_15;

        VAR_15 = VAR_10; VAR_10 = VAR_9; VAR_9 = VAR_15;
        VAR_14 = VAR_13; VAR_13 = VAR_11; VAR_11 = VAR_14;

        FUNC_2(VAR_9, VAR_11);
        FUNC_4(VAR_9, VAR_11);

        VAR_11 = 0;


        for(VAR_4 = 0; VAR_4 + 1 < VAR_13; VAR_4 += 2)
        {

          Coin* VAR_16 = &VAR_9[VAR_11++];
          FUNC_3(VAR_16, &VAR_10[VAR_4]);
          FUNC_0(VAR_16, &VAR_10[VAR_4 + 1]);
        }

        if(VAR_5 < VAR_3)
        {
          VAR_8 = FUNC_1(VAR_9 + VAR_11, VAR_1, VAR_2, VAR_6);
          VAR_11 += VAR_7;
        }
        FUNC_7(VAR_9, VAR_11);
      }
    }

    if(!VAR_8)
    {

      for(VAR_4 = 0; VAR_4 < VAR_7 - 1; VAR_4++)
      {
        Coin* VAR_17 = &VAR_9[VAR_4];
        for(VAR_5 = 0; VAR_5 < VAR_17->symbols.size; VAR_5++) VAR_0[VAR_17->symbols.data[VAR_5]]++;
      }
    }

    FUNC_2(VAR_9, VAR_12);
    FUNC_5(VAR_9);
    FUNC_2(VAR_10, VAR_12);
    FUNC_5(VAR_10);
  }

  return VAR_8;
}
