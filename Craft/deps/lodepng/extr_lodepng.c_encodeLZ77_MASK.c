
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uivector ;
struct TYPE_4__ {unsigned short* zeros; unsigned short* head; unsigned short* chain; int* val; } ;
typedef TYPE_1__ Hash ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned int,unsigned int) ;
 void* FUNC_2 (unsigned char const*,size_t,unsigned int) ;
 unsigned int FUNC_3 (unsigned char const*,size_t,unsigned int) ;
 int FUNC_4 (int *,unsigned char const) ;
 int FUNC_5 (TYPE_1__*,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned FUNC_6(uivector* VAR_1, Hash* VAR_2,
                           const unsigned char* VAR_3, size_t VAR_4, size_t VAR_5, unsigned VAR_6,
                           unsigned VAR_7, unsigned VAR_8, unsigned VAR_9)
{
  unsigned short VAR_10 = 0;
  int VAR_11 = VAR_6 >= 8192;
  unsigned VAR_12, VAR_13, VAR_14 = 0;

  unsigned VAR_15 = VAR_6 >= 8192 ? VAR_6 : VAR_6 / 8;
  unsigned VAR_16 = VAR_6 >= 8192 ? VAR_0 : 64;

  if(!VAR_14)
  {
    unsigned VAR_17;
    unsigned VAR_18;
    unsigned VAR_19 = 0;
    unsigned VAR_20 = 0, VAR_21 = 0;
    unsigned VAR_22;
    unsigned VAR_23, VAR_24;
    const unsigned char *VAR_25, *VAR_26, *VAR_27;
    unsigned short VAR_28, VAR_29;

    for(VAR_12 = VAR_4; VAR_12 < VAR_5; VAR_12++)
    {
      size_t VAR_30 = VAR_12 % VAR_6;

      VAR_22 = FUNC_3(VAR_3, VAR_5, VAR_12);
      FUNC_5(VAR_2, VAR_12, VAR_22, VAR_6);

      if(VAR_11 && VAR_22 == 0)
      {
        VAR_10 = FUNC_2(VAR_3, VAR_5, VAR_12);
        VAR_2->zeros[VAR_30] = VAR_10;
      }


      VAR_18 = 0;
      VAR_17 = 0;

      VAR_29 = VAR_2->head[VAR_22];
      VAR_28 = VAR_2->chain[VAR_29];

      VAR_25 = &VAR_3[VAR_5 < VAR_12 + VAR_0 ? VAR_5 : VAR_12 + VAR_0];


      if(VAR_2->val[VAR_30] == (int)VAR_22)
      {
        unsigned VAR_31 = 0;
        for(;;)
        {

          if(VAR_29 < VAR_30 && VAR_28 > VAR_29 && VAR_28 <= VAR_30) break;
          if(VAR_29 > VAR_30 && (VAR_28 <= VAR_30 || VAR_28 > VAR_29)) break;
          if(VAR_31++ >= VAR_15) break;

          VAR_23 = VAR_28 <= VAR_30 ? VAR_30 - VAR_28 : VAR_30 - VAR_28 + VAR_6;
          if(VAR_23 > 0)
          {

            VAR_26 = &VAR_3[VAR_12];
            VAR_27 = &VAR_3[VAR_12 - VAR_23];


            if(VAR_11 && VAR_22 == 0 && VAR_2->val[VAR_28] == 0 )
            {
              unsigned short VAR_32 = VAR_2->zeros[VAR_28];
              if(VAR_32 > VAR_10) VAR_32 = VAR_10;
              VAR_27 += VAR_32;
              VAR_26 += VAR_32;
            }


            while(VAR_26 != VAR_25 && *VAR_27 == *VAR_26)
            {
              ++VAR_27;
              ++VAR_26;
            }
            VAR_24 = (unsigned)(VAR_26 - &VAR_3[VAR_12]);

            if(VAR_24 > VAR_18)
            {
              VAR_18 = VAR_24;
              VAR_17 = VAR_23;

              if(VAR_24 >= VAR_8 || VAR_24 == VAR_0) break;
            }
          }

          if(VAR_28 == VAR_2->chain[VAR_28]) break;

          VAR_29 = VAR_28;
          VAR_28 = VAR_2->chain[VAR_28];
        }
      }

      if(VAR_9)
      {
        if(!VAR_19 && VAR_18 >= 3 && VAR_18 <= VAR_16 && VAR_18 < VAR_0)
        {
          VAR_19 = 1;
          VAR_20 = VAR_18;
          VAR_21 = VAR_17;
          continue;
        }
        if(VAR_19)
        {
          VAR_19 = 0;
          if(VAR_12 == 0) FUNC_0(81);
          if(VAR_18 > VAR_20 + 1)
          {

            if(!FUNC_4(VAR_1, VAR_3[VAR_12 - 1])) FUNC_0(83 );
          }
          else
          {
            VAR_18 = VAR_20;
            VAR_17 = VAR_21;
            VAR_2->head[VAR_22] = -1;
            VAR_12--;
          }
        }
      }
      if(VAR_18 >= 3 && VAR_17 > VAR_6) FUNC_0(86 );


      if(VAR_18 < 3)
      {
        if(!FUNC_4(VAR_1, VAR_3[VAR_12])) FUNC_0(83 );
      }
      else if(VAR_18 < VAR_7 || (VAR_18 == 3 && VAR_17 > 4096))
      {


        if(!FUNC_4(VAR_1, VAR_3[VAR_12])) FUNC_0(83 );
      }
      else
      {
        FUNC_1(VAR_1, VAR_18, VAR_17);
        for(VAR_13 = 1; VAR_13 < VAR_18; VAR_13++)
        {
          VAR_12++;
          VAR_22 = FUNC_3(VAR_3, VAR_5, VAR_12);
          FUNC_5(VAR_2, VAR_12, VAR_22, VAR_6);
          if(VAR_11 && VAR_22 == 0)
          {
            VAR_2->zeros[VAR_12 % VAR_6] = FUNC_2(VAR_3, VAR_5, VAR_12);
          }
        }
      }

    }
  }

  return VAR_14;
}
