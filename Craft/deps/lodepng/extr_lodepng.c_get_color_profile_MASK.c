
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int sixteenbit_done; int sixteenbit; int greybits_done; int numcolors_done; int colored_done; int colored; int alpha_done; int key; unsigned short key_r; unsigned short key_g; unsigned short key_b; int alpha; unsigned int greybits; int numcolors; unsigned char* palette; unsigned int maxnumcolors; int tree; } ;
struct TYPE_7__ {int bitdepth; } ;
typedef TYPE_1__ LodePNGColorMode ;
typedef TYPE_2__ ColorProfile ;


 int FUNC_0 (int *,unsigned char,unsigned char,unsigned char,unsigned char,int) ;
 int FUNC_1 (int *,unsigned char,unsigned char,unsigned char,unsigned char) ;
 unsigned int FUNC_2 (unsigned short*,unsigned short*,unsigned short*,unsigned short*,unsigned char const*,size_t,TYPE_1__ const*) ;
 unsigned int FUNC_3 (unsigned char*,unsigned char*,unsigned char*,unsigned char*,unsigned char const*,size_t,TYPE_1__ const*,unsigned int) ;
 unsigned int FUNC_4 (unsigned char) ;

__attribute__((used)) static unsigned FUNC_5(ColorProfile* VAR_0,
                                  const unsigned char* VAR_1,
                                  size_t VAR_2 ,
                                  const LodePNGColorMode* VAR_3,
                                  unsigned VAR_4)
{
  unsigned VAR_5 = 0;
  size_t VAR_6;

  if(VAR_3->bitdepth == 16)
  {
    for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      unsigned short VAR_7, VAR_8, VAR_9, VAR_10;
      VAR_5 = FUNC_2(&VAR_7, &VAR_8, &VAR_9, &VAR_10, VAR_1, VAR_6, VAR_3);
      if(VAR_5) break;



      if(!VAR_0->sixteenbit_done
          && (((VAR_7 & 255) != ((VAR_7 >> 8) & 255))
           || ((VAR_8 & 255) != ((VAR_8 >> 8) & 255))
           || ((VAR_9 & 255) != ((VAR_9 >> 8) & 255))))
      {
        VAR_0->sixteenbit = 1;
        VAR_0->sixteenbit_done = 1;
        VAR_0->greybits_done = 1;
        VAR_0->numcolors_done = 1;
      }

      if(!VAR_0->colored_done && (VAR_7 != VAR_8 || VAR_7 != VAR_9))
      {
        VAR_0->colored = 1;
        VAR_0->colored_done = 1;
        VAR_0->greybits_done = 1;
      }

      if(!VAR_0->alpha_done && VAR_10 != 65535)
      {

        if(VAR_10 == 0 && VAR_2 > 16 && !(VAR_0->key && (VAR_7 != VAR_0->key_r || VAR_8 != VAR_0->key_g || VAR_9 != VAR_0->key_b)))
        {
          if(!VAR_0->alpha && !VAR_0->key)
          {
            VAR_0->key = 1;
            VAR_0->key_r = VAR_7;
            VAR_0->key_g = VAR_8;
            VAR_0->key_b = VAR_9;
          }
        }
        else
        {
          VAR_0->alpha = 1;
          VAR_0->alpha_done = 1;
          VAR_0->greybits_done = 1;
        }
      }


      if(!VAR_0->alpha_done && VAR_10 == 65535 && VAR_0->key
          && VAR_7 == VAR_0->key_r && VAR_8 == VAR_0->key_g && VAR_9 == VAR_0->key_b)
      {
          VAR_0->alpha = 1;
          VAR_0->alpha_done = 1;
          VAR_0->greybits_done = 1;
      }

      if(!VAR_0->greybits_done)
      {

        unsigned VAR_11 = FUNC_4(VAR_7);
        if(VAR_11 > VAR_0->greybits) VAR_0->greybits = VAR_11;
        if(VAR_0->greybits >= 8) VAR_0->greybits_done = 1;
      }

      if(!VAR_0->numcolors_done)
      {

        if(!FUNC_1(&VAR_0->tree, (unsigned char)VAR_7, (unsigned char)VAR_8, (unsigned char)VAR_9, (unsigned char)VAR_10))
        {
          FUNC_0(&VAR_0->tree, (unsigned char)VAR_7, (unsigned char)VAR_8, (unsigned char)VAR_9, (unsigned char)VAR_10,
            VAR_0->numcolors);
          if(VAR_0->numcolors < 256)
          {
            unsigned char* VAR_12 = VAR_0->palette;
            unsigned VAR_13 = VAR_0->numcolors;
            VAR_12[VAR_13 * 4 + 0] = (unsigned char)VAR_7;
            VAR_12[VAR_13 * 4 + 1] = (unsigned char)VAR_8;
            VAR_12[VAR_13 * 4 + 2] = (unsigned char)VAR_9;
            VAR_12[VAR_13 * 4 + 3] = (unsigned char)VAR_10;
          }
          VAR_0->numcolors++;
          if(VAR_0->numcolors >= VAR_0->maxnumcolors) VAR_0->numcolors_done = 1;
        }
      }

      if(VAR_0->alpha_done && VAR_0->numcolors_done
      && VAR_0->colored_done && VAR_0->sixteenbit_done && VAR_0->greybits_done)
      {
        break;
      }
    };
  }
  else
  {
    for(VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
    {
      unsigned char VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
      VAR_5 = FUNC_3(&VAR_14, &VAR_15, &VAR_16, &VAR_17, VAR_1, VAR_6, VAR_3, VAR_4);
      if(VAR_5) break;

      if(!VAR_0->colored_done && (VAR_14 != VAR_15 || VAR_14 != VAR_16))
      {
        VAR_0->colored = 1;
        VAR_0->colored_done = 1;
        VAR_0->greybits_done = 1;
      }

      if(!VAR_0->alpha_done && VAR_17 != 255)
      {
        if(VAR_17 == 0 && !(VAR_0->key && (VAR_14 != VAR_0->key_r || VAR_15 != VAR_0->key_g || VAR_16 != VAR_0->key_b)))
        {
          if(!VAR_0->key)
          {
            VAR_0->key = 1;
            VAR_0->key_r = VAR_14;
            VAR_0->key_g = VAR_15;
            VAR_0->key_b = VAR_16;
          }
        }
        else
        {
          VAR_0->alpha = 1;
          VAR_0->alpha_done = 1;
          VAR_0->greybits_done = 1;
        }
      }


      if(!VAR_0->alpha_done && VAR_17 == 255 && VAR_0->key
          && VAR_14 == VAR_0->key_r && VAR_15 == VAR_0->key_g && VAR_16 == VAR_0->key_b)
      {
          VAR_0->alpha = 1;
          VAR_0->alpha_done = 1;
          VAR_0->greybits_done = 1;
      }

      if(!VAR_0->greybits_done)
      {
        unsigned VAR_18 = FUNC_4(VAR_14);
        if(VAR_18 > VAR_0->greybits) VAR_0->greybits = VAR_18;
        if(VAR_0->greybits >= 8) VAR_0->greybits_done = 1;
      }

      if(!VAR_0->numcolors_done)
      {
        if(!FUNC_1(&VAR_0->tree, VAR_14, VAR_15, VAR_16, VAR_17))
        {

          FUNC_0(&VAR_0->tree, VAR_14, VAR_15, VAR_16, VAR_17, VAR_0->numcolors);
          if(VAR_0->numcolors < 256)
          {
            unsigned char* VAR_19 = VAR_0->palette;
            unsigned VAR_20 = VAR_0->numcolors;
            VAR_19[VAR_20 * 4 + 0] = VAR_14;
            VAR_19[VAR_20 * 4 + 1] = VAR_15;
            VAR_19[VAR_20 * 4 + 2] = VAR_16;
            VAR_19[VAR_20 * 4 + 3] = VAR_17;
          }
          VAR_0->numcolors++;
          if(VAR_0->numcolors >= VAR_0->maxnumcolors) VAR_0->numcolors_done = 1;
        }
      }

      if(VAR_0->alpha_done && VAR_0->numcolors_done && VAR_0->colored_done && VAR_0->greybits_done)
      {
        break;
      }
    };
  }


  if(VAR_3->bitdepth < 16)
  {

    VAR_0->key_r *= 257;
    VAR_0->key_g *= 257;
    VAR_0->key_b *= 257;
  }

  return VAR_5;
}
