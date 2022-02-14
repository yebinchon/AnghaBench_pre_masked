
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {unsigned char* data; size_t size; } ;
typedef TYPE_1__ uivector ;
typedef int ucvector ;
struct TYPE_21__ {size_t numcodes; } ;
struct TYPE_20__ {int lazymatching; int nicematch; int minmatch; int windowsize; scalar_t__ use_lz77; } ;
typedef TYPE_2__ LodePNGCompressSettings ;
typedef TYPE_3__ HuffmanTree ;
typedef int Hash ;


 int* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 unsigned int FUNC_5 (TYPE_3__*,int*,int,size_t,int) ;
 int VAR_1 ;
 int FUNC_6 (size_t*,int *,int) ;
 int FUNC_7 (size_t*,int *,unsigned int,int) ;
 int FUNC_8 (size_t*,int *,int ,scalar_t__) ;
 unsigned int FUNC_9 (TYPE_1__*,int *,unsigned char const*,size_t,size_t,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,unsigned int) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (TYPE_1__*,int,int ) ;
 int FUNC_15 (size_t*,int *,TYPE_1__*,TYPE_3__*,TYPE_3__*) ;

__attribute__((used)) static unsigned FUNC_16(ucvector* VAR_2, size_t* VAR_3, Hash* VAR_4,
                               const unsigned char* VAR_5, size_t VAR_6, size_t VAR_7,
                               const LodePNGCompressSettings* VAR_8, int VAR_9)
{
  unsigned VAR_10 = 0;
  uivector VAR_11;
  HuffmanTree VAR_12;
  HuffmanTree VAR_13;
  HuffmanTree VAR_14;
  uivector VAR_15;
  uivector VAR_16;
  uivector VAR_17;
  uivector VAR_18;
  uivector VAR_19;



  uivector VAR_20;
  size_t VAR_21 = VAR_7 - VAR_6;
  unsigned VAR_22 = VAR_9;
  size_t VAR_23, VAR_24, VAR_25;
  unsigned VAR_26, VAR_27, VAR_28;

  FUNC_11(&VAR_11);
  FUNC_4(&VAR_12);
  FUNC_4(&VAR_13);
  FUNC_4(&VAR_14);
  FUNC_11(&VAR_15);
  FUNC_11(&VAR_16);
  FUNC_11(&VAR_17);
  FUNC_11(&VAR_18);
  FUNC_11(&VAR_19);
  FUNC_11(&VAR_20);



  while(!VAR_10)
  {
    if(VAR_8->use_lz77)
    {
      VAR_10 = FUNC_9(&VAR_11, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8->windowsize,
                         VAR_8->minmatch, VAR_8->nicematch, VAR_8->lazymatching);
      if(VAR_10) break;
    }
    else
    {
      if(!FUNC_13(&VAR_11, VAR_21)) FUNC_0(83 );
      for(VAR_25 = VAR_6; VAR_25 < VAR_7; VAR_25++) VAR_11.data[VAR_25] = VAR_5[VAR_25];
    }

    if(!FUNC_14(&VAR_15, 286, 0)) FUNC_0(83 );
    if(!FUNC_14(&VAR_16, 30, 0)) FUNC_0(83 );


    for(VAR_25 = 0; VAR_25 < VAR_11.size; VAR_25++)
    {
      unsigned VAR_29 = VAR_11.data[VAR_25];
      VAR_15.data[VAR_29]++;
      if(VAR_29 > 256)
      {
        unsigned VAR_30 = VAR_11.data[VAR_25 + 2];
        VAR_16.data[VAR_30]++;
        VAR_25 += 3;
      }
    }
    VAR_15.data[256] = 1;


    VAR_10 = FUNC_5(&VAR_12, VAR_15.data, 257, VAR_15.size, 15);
    if(VAR_10) break;

    VAR_10 = FUNC_5(&VAR_13, VAR_16.data, 2, VAR_16.size, 15);
    if(VAR_10) break;

    VAR_23 = VAR_12.numcodes; if(VAR_23 > 286) VAR_23 = 286;
    VAR_24 = VAR_13.numcodes; if(VAR_24 > 30) VAR_24 = 30;

    for(VAR_25 = 0; VAR_25 < VAR_23; VAR_25++) FUNC_12(&VAR_18, FUNC_3(&VAR_12, (unsigned)VAR_25));
    for(VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) FUNC_12(&VAR_18, FUNC_3(&VAR_13, (unsigned)VAR_25));



    for(VAR_25 = 0; VAR_25 < (unsigned)VAR_18.size; VAR_25++)
    {
      unsigned VAR_31 = 0;
      while(VAR_25 + VAR_31 + 1 < (unsigned)VAR_18.size && VAR_18.data[VAR_25 + VAR_31 + 1] == VAR_18.data[VAR_25]) VAR_31++;

      if(VAR_18.data[VAR_25] == 0 && VAR_31 >= 2)
      {
        VAR_31++;
        if(VAR_31 <= 10)
        {
          FUNC_12(&VAR_19, 17);
          FUNC_12(&VAR_19, VAR_31 - 3);
        }
        else
        {
          if(VAR_31 > 138) VAR_31 = 138;
          FUNC_12(&VAR_19, 18);
          FUNC_12(&VAR_19, VAR_31 - 11);
        }
        VAR_25 += (VAR_31 - 1);
      }
      else if(VAR_31 >= 3)
      {
        size_t VAR_32;
        unsigned VAR_33 = VAR_31 / 6, VAR_34 = VAR_31 % 6;
        FUNC_12(&VAR_19, VAR_18.data[VAR_25]);
        for(VAR_32 = 0; VAR_32 < VAR_33; VAR_32++)
        {
          FUNC_12(&VAR_19, 16);
          FUNC_12(&VAR_19, 6 - 3);
        }
        if(VAR_34 >= 3)
        {
          FUNC_12(&VAR_19, 16);
          FUNC_12(&VAR_19, VAR_34 - 3);
        }
        else VAR_31 -= VAR_34;
        VAR_25 += VAR_31;
      }
      else
      {
        FUNC_12(&VAR_19, VAR_18.data[VAR_25]);
      }
    }



    if(!FUNC_14(&VAR_17, VAR_1, 0)) FUNC_0(83 );
    for(VAR_25 = 0; VAR_25 < VAR_19.size; VAR_25++)
    {
      VAR_17.data[VAR_19.data[VAR_25]]++;


      if(VAR_19.data[VAR_25] >= 16) VAR_25++;
    }

    VAR_10 = FUNC_5(&VAR_14, VAR_17.data,
                                            VAR_17.size, VAR_17.size, 7);
    if(VAR_10) break;

    if(!FUNC_13(&VAR_20, VAR_14.numcodes)) FUNC_0(83 );
    for(VAR_25 = 0; VAR_25 < VAR_14.numcodes; VAR_25++)
    {

      VAR_20.data[VAR_25] = FUNC_3(&VAR_14, VAR_0[VAR_25]);
    }
    while(VAR_20.data[VAR_20.size - 1] == 0 && VAR_20.size > 4)
    {

      if(!FUNC_13(&VAR_20, VAR_20.size - 1)) FUNC_0(83 );
    }
    if(VAR_10) break;
    FUNC_6(VAR_3, VAR_2, VAR_22);
    FUNC_6(VAR_3, VAR_2, 0);
    FUNC_6(VAR_3, VAR_2, 1);


    VAR_26 = (unsigned)(VAR_23 - 257);
    VAR_27 = (unsigned)(VAR_24 - 1);
    VAR_28 = (unsigned)VAR_20.size - 4;

    while(!VAR_20.data[VAR_28 + 4 - 1] && VAR_28 > 0) VAR_28--;
    FUNC_7(VAR_3, VAR_2, VAR_26, 5);
    FUNC_7(VAR_3, VAR_2, VAR_27, 5);
    FUNC_7(VAR_3, VAR_2, VAR_28, 4);


    for(VAR_25 = 0; VAR_25 < VAR_28 + 4; VAR_25++) FUNC_7(VAR_3, VAR_2, VAR_20.data[VAR_25], 3);


    for(VAR_25 = 0; VAR_25 < VAR_19.size; VAR_25++)
    {
      FUNC_8(VAR_3, VAR_2, FUNC_2(&VAR_14, VAR_19.data[VAR_25]),
                       FUNC_3(&VAR_14, VAR_19.data[VAR_25]));

      if(VAR_19.data[VAR_25] == 16) FUNC_7(VAR_3, VAR_2, VAR_19.data[++VAR_25], 2);
      else if(VAR_19.data[VAR_25] == 17) FUNC_7(VAR_3, VAR_2, VAR_19.data[++VAR_25], 3);
      else if(VAR_19.data[VAR_25] == 18) FUNC_7(VAR_3, VAR_2, VAR_19.data[++VAR_25], 7);
    }


    FUNC_15(VAR_3, VAR_2, &VAR_11, &VAR_12, &VAR_13);

    if(FUNC_3(&VAR_12, 256) == 0) FUNC_0(64);


    FUNC_8(VAR_3, VAR_2, FUNC_2(&VAR_12, 256), FUNC_3(&VAR_12, 256));

    break;
  }


  FUNC_10(&VAR_11);
  FUNC_1(&VAR_12);
  FUNC_1(&VAR_13);
  FUNC_1(&VAR_14);
  FUNC_10(&VAR_15);
  FUNC_10(&VAR_16);
  FUNC_10(&VAR_17);
  FUNC_10(&VAR_19);
  FUNC_10(&VAR_18);
  FUNC_10(&VAR_20);

  return VAR_10;
}
