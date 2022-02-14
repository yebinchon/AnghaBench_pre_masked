
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HuffmanTree ;


 size_t* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *,unsigned int*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_4 (unsigned char const*,size_t*,int *,size_t) ;
 int FUNC_5 (unsigned int*) ;
 scalar_t__ FUNC_6 (int) ;
 unsigned int FUNC_7 (size_t*,unsigned char const*,int) ;

__attribute__((used)) static unsigned FUNC_8(HuffmanTree* VAR_4, HuffmanTree* VAR_5,
                                      const unsigned char* VAR_6, size_t* VAR_7, size_t VAR_8)
{

  unsigned VAR_9 = 0;
  unsigned VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  size_t VAR_15 = VAR_8 * 8;


  unsigned* VAR_16 = 0;
  unsigned* VAR_17 = 0;

  unsigned* VAR_18 = 0;
  HuffmanTree VAR_19;

  if((*VAR_7) >> 3 >= VAR_8 - 2) return 49;


  VAR_11 = FUNC_7(VAR_7, VAR_6, 5) + 257;

  VAR_12 = FUNC_7(VAR_7, VAR_6, 5) + 1;

  VAR_13 = FUNC_7(VAR_7, VAR_6, 4) + 4;

  FUNC_2(&VAR_19);

  while(!VAR_9)
  {


    VAR_18 = (unsigned*)FUNC_6(VAR_1 * sizeof(unsigned));
    if(!VAR_18) FUNC_0(83 );

    for(VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
    {
      if(VAR_14 < VAR_13) VAR_18[VAR_0[VAR_14]] = FUNC_7(VAR_7, VAR_6, 3);
      else VAR_18[VAR_0[VAR_14]] = 0;
    }

    VAR_9 = FUNC_3(&VAR_19, VAR_18, VAR_1, 7);
    if(VAR_9) break;


    VAR_16 = (unsigned*)FUNC_6(VAR_2 * sizeof(unsigned));
    VAR_17 = (unsigned*)FUNC_6(VAR_3 * sizeof(unsigned));
    if(!VAR_16 || !VAR_17) FUNC_0(83 );
    for(VAR_14 = 0; VAR_14 < VAR_2; VAR_14++) VAR_16[VAR_14] = 0;
    for(VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) VAR_17[VAR_14] = 0;


    VAR_14 = 0;
    while(VAR_14 < VAR_11 + VAR_12)
    {
      unsigned VAR_20 = FUNC_4(VAR_6, VAR_7, &VAR_19, VAR_15);
      if(VAR_20 <= 15)
      {
        if(VAR_14 < VAR_11) VAR_16[VAR_14] = VAR_20;
        else VAR_17[VAR_14 - VAR_11] = VAR_20;
        VAR_14++;
      }
      else if(VAR_20 == 16)
      {
        unsigned VAR_21 = 3;
        unsigned VAR_22;

        if(*VAR_7 >= VAR_15) FUNC_0(50);
        if (VAR_14 == 0) FUNC_0(54);

        VAR_21 += FUNC_7(VAR_7, VAR_6, 2);

        if(VAR_14 < VAR_11 + 1) VAR_22 = VAR_16[VAR_14 - 1];
        else VAR_22 = VAR_17[VAR_14 - VAR_11 - 1];

        for(VAR_10 = 0; VAR_10 < VAR_21; VAR_10++)
        {
          if(VAR_14 >= VAR_11 + VAR_12) FUNC_0(13);
          if(VAR_14 < VAR_11) VAR_16[VAR_14] = VAR_22;
          else VAR_17[VAR_14 - VAR_11] = VAR_22;
          VAR_14++;
        }
      }
      else if(VAR_20 == 17)
      {
        unsigned VAR_23 = 3;
        if(*VAR_7 >= VAR_15) FUNC_0(50);

        VAR_23 += FUNC_7(VAR_7, VAR_6, 3);


        for(VAR_10 = 0; VAR_10 < VAR_23; VAR_10++)
        {
          if(VAR_14 >= VAR_11 + VAR_12) FUNC_0(14);

          if(VAR_14 < VAR_11) VAR_16[VAR_14] = 0;
          else VAR_17[VAR_14 - VAR_11] = 0;
          VAR_14++;
        }
      }
      else if(VAR_20 == 18)
      {
        unsigned VAR_24 = 11;
        if(*VAR_7 >= VAR_15) FUNC_0(50);

        VAR_24 += FUNC_7(VAR_7, VAR_6, 7);


        for(VAR_10 = 0; VAR_10 < VAR_24; VAR_10++)
        {
          if(VAR_14 >= VAR_11 + VAR_12) FUNC_0(15);

          if(VAR_14 < VAR_11) VAR_16[VAR_14] = 0;
          else VAR_17[VAR_14 - VAR_11] = 0;
          VAR_14++;
        }
      }
      else
      {
        if(VAR_20 == (unsigned)(-1))
        {


          VAR_9 = (*VAR_7) > VAR_15 ? 10 : 11;
        }
        else VAR_9 = 16;
        break;
      }
    }
    if(VAR_9) break;

    if(VAR_16[256] == 0) FUNC_0(64);


    VAR_9 = FUNC_3(VAR_4, VAR_16, VAR_2, 15);
    if(VAR_9) break;
    VAR_9 = FUNC_3(VAR_5, VAR_17, VAR_3, 15);

    break;
  }

  FUNC_5(VAR_18);
  FUNC_5(VAR_16);
  FUNC_5(VAR_17);
  FUNC_1(&VAR_19);

  return VAR_9;
}
