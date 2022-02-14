
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int colored_done; int greybits_done; int numcolors_done; int sixteenbit_done; unsigned int key_r; unsigned int key_g; unsigned int key_b; unsigned int numcolors; unsigned int greybits; unsigned char* palette; scalar_t__ key; scalar_t__ colored; scalar_t__ alpha; scalar_t__ sixteenbit; } ;
struct TYPE_13__ {scalar_t__ colortype; int bitdepth; scalar_t__ palettesize; int * palette; scalar_t__ key_defined; } ;
typedef TYPE_1__ LodePNGColorMode ;
typedef scalar_t__ LodePNGAutoConvert ;
typedef TYPE_2__ ColorProfile ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__ const*) ;
 unsigned int FUNC_2 (TYPE_2__*,unsigned char const*,unsigned int,TYPE_1__ const*,int ) ;
 unsigned int FUNC_3 (TYPE_1__*,unsigned char,unsigned char,unsigned char,unsigned char) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,unsigned int,unsigned int,unsigned int,int) ;

unsigned FUNC_6(LodePNGColorMode* VAR_9,
                                   const unsigned char* VAR_10, unsigned VAR_11, unsigned VAR_12,
                                   const LodePNGColorMode* VAR_13,
                                   LodePNGAutoConvert VAR_14)
{
  ColorProfile VAR_15;
  unsigned VAR_16 = 0;
  int VAR_17 = VAR_14 == VAR_1 || VAR_14 == VAR_2;
  int VAR_18 = VAR_14 == VAR_3 || VAR_14 == VAR_2;

  if(VAR_14 == VAR_0)
  {
    if(VAR_9->colortype != VAR_8 && VAR_9->colortype != VAR_5) return 0;
  }

  FUNC_1(&VAR_15, VAR_13);
  if(VAR_14 == VAR_0)
  {
    VAR_15.colored_done = 1;
    VAR_15.greybits_done = 1;
    VAR_15.numcolors_done = 1;
    VAR_15.sixteenbit_done = 1;
  }
  VAR_16 = FUNC_2(&VAR_15, VAR_10, VAR_11 * VAR_12, VAR_13, 0 );
  if(!VAR_16 && VAR_14 == VAR_0)
  {
    if(!VAR_15.alpha)
    {
      VAR_9->colortype = (VAR_9->colortype == VAR_8 ? VAR_7 : VAR_4);
      if(VAR_15.key) FUNC_5(VAR_9, VAR_15.key_r, VAR_15.key_g, VAR_15.key_b, VAR_9->bitdepth);
    }
  }
  else if(!VAR_16 && VAR_14 != VAR_0)
  {
    VAR_9->key_defined = 0;

    if(VAR_15.sixteenbit)
    {
      VAR_9->bitdepth = 16;
      if(VAR_15.alpha)
      {
        VAR_9->colortype = VAR_15.colored ? VAR_8 : VAR_5;
      }
      else
      {
        VAR_9->colortype = VAR_15.colored ? VAR_7 : VAR_4;
        if(VAR_15.key) FUNC_5(VAR_9, VAR_15.key_r, VAR_15.key_g, VAR_15.key_b, VAR_9->bitdepth);
      }
    }
    else
    {

      unsigned VAR_19 = VAR_15.numcolors;
      int VAR_20 = !VAR_18 && VAR_19 <= 256 && (VAR_19 * 2 < VAR_11 * VAR_12);
      unsigned VAR_21 = VAR_19 <= 2 ? 1 : (VAR_19 <= 4 ? 2 : (VAR_19 <= 16 ? 4 : 8));
      int VAR_22 = !VAR_15.colored && !VAR_15.alpha;
      if(VAR_20 || VAR_22)
      {
        if(!VAR_20 || (VAR_22 && VAR_15.greybits <= VAR_21))
        {
          unsigned VAR_23 = VAR_15.key_r;
          VAR_9->colortype = VAR_4;
          VAR_9->bitdepth = VAR_15.greybits;
          if(VAR_15.key) FUNC_5(VAR_9, VAR_23, VAR_23, VAR_23, VAR_9->bitdepth);
        }
        else
        {

          unsigned VAR_24;
          unsigned char* VAR_25 = VAR_15.palette;

          FUNC_4(VAR_9);
          for(VAR_24 = 0; VAR_24 < VAR_15.numcolors; VAR_24++)
          {
            VAR_16 = FUNC_3(VAR_9, VAR_25[VAR_24 * 4 + 0], VAR_25[VAR_24 * 4 + 1], VAR_25[VAR_24 * 4 + 2], VAR_25[VAR_24 * 4 + 3]);
            if(VAR_16) break;
          }

          VAR_9->colortype = VAR_6;
          VAR_9->bitdepth = VAR_21;
        }
      }
      else
      {
        VAR_9->bitdepth = 8;
        if(VAR_15.alpha)
        {
          VAR_9->colortype = VAR_15.colored ? VAR_8 : VAR_5;
        }
        else
        {
          VAR_9->colortype = VAR_15.colored ? VAR_7 : VAR_4 ;
          if(VAR_15.key) FUNC_5(VAR_9, VAR_15.key_r, VAR_15.key_g, VAR_15.key_b, VAR_9->bitdepth);
        }
      }
    }
  }

  FUNC_0(&VAR_15);

  if(VAR_9->colortype == VAR_6 && VAR_13->palettesize == VAR_9->palettesize)
  {

    size_t VAR_26;
    for(VAR_26 = 0; VAR_26 < VAR_13->palettesize * 4; VAR_26++)
    {
      VAR_9->palette[VAR_26] = VAR_13->palette[VAR_26];
    }
  }

  if(VAR_17 && VAR_9->bitdepth < 8)
  {

    VAR_9->bitdepth = 8;
  }

  return VAR_16;
}
