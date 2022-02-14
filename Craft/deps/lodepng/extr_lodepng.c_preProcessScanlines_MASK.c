
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ interlace_method; int color; } ;
typedef TYPE_1__ LodePNGInfo ;
typedef int LodePNGEncoderSettings ;


 int FUNC_0 (unsigned int*,unsigned int*,size_t*,size_t*,size_t*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned char*,unsigned char const*,unsigned int,unsigned int,int *,int const*) ;
 int FUNC_5 (unsigned char*) ;
 unsigned int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (size_t) ;

__attribute__((used)) static unsigned FUNC_8(unsigned char** VAR_0, size_t* VAR_1, const unsigned char* VAR_2,
                                    unsigned VAR_3, unsigned VAR_4,
                                    const LodePNGInfo* VAR_5, const LodePNGEncoderSettings* VAR_6)
{





  unsigned VAR_7 = FUNC_6(&VAR_5->color);
  unsigned VAR_8 = 0;

  if(VAR_5->interlace_method == 0)
  {
    *VAR_1 = VAR_4 + (VAR_4 * ((VAR_3 * VAR_7 + 7) / 8));
    *VAR_0 = (unsigned char*)FUNC_7(*VAR_1);
    if(!(*VAR_0) && (*VAR_1)) VAR_8 = 83;

    if(!VAR_8)
    {

      if(VAR_7 < 8 && VAR_3 * VAR_7 != ((VAR_3 * VAR_7 + 7) / 8) * 8)
      {
        unsigned char* VAR_9 = (unsigned char*)FUNC_7(VAR_4 * ((VAR_3 * VAR_7 + 7) / 8));
        if(!VAR_9) VAR_8 = 83;
        if(!VAR_8)
        {
          FUNC_3(VAR_9, VAR_2, ((VAR_3 * VAR_7 + 7) / 8) * 8, VAR_3 * VAR_7, VAR_4);
          VAR_8 = FUNC_4(*VAR_0, VAR_9, VAR_3, VAR_4, &VAR_5->color, VAR_6);
        }
        FUNC_5(VAR_9);
      }
      else
      {

        VAR_8 = FUNC_4(*VAR_0, VAR_2, VAR_3, VAR_4, &VAR_5->color, VAR_6);
      }
    }
  }
  else
  {
    unsigned VAR_10[7], VAR_11[7];
    size_t VAR_12[8], VAR_13[8], VAR_14[8];
    unsigned char* VAR_15;

    FUNC_0(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_3, VAR_4, VAR_7);

    *VAR_1 = VAR_12[7];
    *VAR_0 = (unsigned char*)FUNC_7(*VAR_1);
    if(!(*VAR_0)) VAR_8 = 83;

    VAR_15 = (unsigned char*)FUNC_7(VAR_14[7]);
    if(!VAR_15 && VAR_14[7]) VAR_8 = 83;

    if(!VAR_8)
    {
      unsigned VAR_16;

      FUNC_1(VAR_15, VAR_2, VAR_3, VAR_4, VAR_7);
      for(VAR_16 = 0; VAR_16 < 7; VAR_16++)
      {
        if(VAR_7 < 8)
        {
          unsigned char* VAR_17 = (unsigned char*)FUNC_7(VAR_13[VAR_16 + 1] - VAR_13[VAR_16]);
          if(!VAR_17) FUNC_2(83);
          FUNC_3(VAR_17, &VAR_15[VAR_14[VAR_16]],
                         ((VAR_10[VAR_16] * VAR_7 + 7) / 8) * 8, VAR_10[VAR_16] * VAR_7, VAR_11[VAR_16]);
          VAR_8 = FUNC_4(&(*VAR_0)[VAR_12[VAR_16]], VAR_17,
                         VAR_10[VAR_16], VAR_11[VAR_16], &VAR_5->color, VAR_6);
          FUNC_5(VAR_17);
        }
        else
        {
          VAR_8 = FUNC_4(&(*VAR_0)[VAR_12[VAR_16]], &VAR_15[VAR_13[VAR_16]],
                         VAR_10[VAR_16], VAR_11[VAR_16], &VAR_5->color, VAR_6);
        }

        if(VAR_8) break;
      }
    }

    FUNC_5(VAR_15);
  }

  return VAR_8;
}
