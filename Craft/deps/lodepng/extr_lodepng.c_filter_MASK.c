
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {unsigned char* data; unsigned int size; } ;
typedef TYPE_1__ ucvector ;
struct TYPE_15__ {scalar_t__ colortype; int bitdepth; } ;
struct TYPE_14__ {int btype; scalar_t__ custom_deflate; scalar_t__ custom_zlib; } ;
struct TYPE_13__ {scalar_t__ filter_strategy; unsigned int* predefined_filters; TYPE_3__ zlibsettings; scalar_t__ filter_palette_zero; } ;
typedef scalar_t__ LodePNGFilterStrategy ;
typedef TYPE_2__ LodePNGEncoderSettings ;
typedef TYPE_3__ LodePNGCompressSettings ;
typedef TYPE_4__ LodePNGColorMode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned char const*,size_t,size_t,unsigned int) ;
 float FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 unsigned int FUNC_3 (TYPE_4__ const*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,size_t) ;
 int FUNC_7 (unsigned char**,size_t*,unsigned char*,unsigned int,TYPE_3__*) ;

__attribute__((used)) static unsigned FUNC_8(unsigned char* VAR_6, const unsigned char* VAR_7, unsigned VAR_8, unsigned VAR_9,
                       const LodePNGColorMode* VAR_10, const LodePNGEncoderSettings* VAR_11)
{






  unsigned VAR_12 = FUNC_3(VAR_10);

  size_t VAR_13 = (VAR_8 * VAR_12 + 7) / 8;

  size_t VAR_14 = (VAR_12 + 7) / 8;
  const unsigned char* VAR_15 = 0;
  unsigned VAR_16, VAR_17;
  unsigned VAR_18 = 0;
  LodePNGFilterStrategy VAR_19 = VAR_11->filter_strategy;
  if(VAR_11->filter_palette_zero &&
     (VAR_10->colortype == VAR_0 || VAR_10->bitdepth < 8)) VAR_19 = VAR_5;

  if(VAR_12 == 0) return 31;

  if(VAR_19 == VAR_5)
  {
    for(VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
    {
      size_t VAR_20 = (1 + VAR_13) * VAR_17;
      size_t VAR_21 = VAR_13 * VAR_17;
      VAR_6[VAR_20] = 0;
      FUNC_0(&VAR_6[VAR_20 + 1], &VAR_7[VAR_21], VAR_15, VAR_13, VAR_14, 0);
      VAR_15 = &VAR_7[VAR_21];
    }
  }
  else if(VAR_19 == VAR_3)
  {

    size_t VAR_22[5];
    ucvector VAR_23[5];
    size_t VAR_24 = 0;
    unsigned VAR_25, VAR_26 = 0;

    for(VAR_25 = 0; VAR_25 < 5; VAR_25++)
    {
      FUNC_5(&VAR_23[VAR_25]);
      if(!FUNC_6(&VAR_23[VAR_25], VAR_13)) return 83;
    }

    if(!VAR_18)
    {
      for(VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
      {

        for(VAR_25 = 0; VAR_25 < 5; VAR_25++)
        {
          FUNC_0(VAR_23[VAR_25].data, &VAR_7[VAR_17 * VAR_13], VAR_15, VAR_13, VAR_14, VAR_25);


          VAR_22[VAR_25] = 0;
          if(VAR_25 == 0)
          {
            for(VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) VAR_22[VAR_25] += (unsigned char)(VAR_23[VAR_25].data[VAR_16]);
          }
          else
          {
            for(VAR_16 = 0; VAR_16 < VAR_13; VAR_16++)
            {



              signed char VAR_27 = (signed char)(VAR_23[VAR_25].data[VAR_16]);
              VAR_22[VAR_25] += VAR_27 < 0 ? -VAR_27 : VAR_27;
            }
          }


          if(VAR_25 == 0 || VAR_22[VAR_25] < VAR_24)
          {
            VAR_26 = VAR_25;
            VAR_24 = VAR_22[VAR_25];
          }
        }

        VAR_15 = &VAR_7[VAR_17 * VAR_13];


        VAR_6[VAR_17 * (VAR_13 + 1)] = VAR_26;
        for(VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) VAR_6[VAR_17 * (VAR_13 + 1) + 1 + VAR_16] = VAR_23[VAR_26].data[VAR_16];
      }
    }

    for(VAR_25 = 0; VAR_25 < 5; VAR_25++) FUNC_4(&VAR_23[VAR_25]);
  }
  else if(VAR_19 == VAR_2)
  {
    float VAR_28[5];
    ucvector VAR_29[5];
    float VAR_30 = 0;
    unsigned VAR_31, VAR_32 = 0;
    unsigned VAR_33[256];

    for(VAR_31 = 0; VAR_31 < 5; VAR_31++)
    {
      FUNC_5(&VAR_29[VAR_31]);
      if(!FUNC_6(&VAR_29[VAR_31], VAR_13)) return 83;
    }

    for(VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
    {

      for(VAR_31 = 0; VAR_31 < 5; VAR_31++)
      {
        FUNC_0(VAR_29[VAR_31].data, &VAR_7[VAR_17 * VAR_13], VAR_15, VAR_13, VAR_14, VAR_31);
        for(VAR_16 = 0; VAR_16 < 256; VAR_16++) VAR_33[VAR_16] = 0;
        for(VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) VAR_33[VAR_29[VAR_31].data[VAR_16]]++;
        VAR_33[VAR_31]++;
        VAR_28[VAR_31] = 0;
        for(VAR_16 = 0; VAR_16 < 256; VAR_16++)
        {
          float VAR_34 = VAR_33[VAR_16] / (float)(VAR_13 + 1);
          VAR_28[VAR_31] += VAR_33[VAR_16] == 0 ? 0 : FUNC_1(1 / VAR_34) * VAR_34;
        }

        if(VAR_31 == 0 || VAR_28[VAR_31] < VAR_30)
        {
          VAR_32 = VAR_31;
          VAR_30 = VAR_28[VAR_31];
        }
      }

      VAR_15 = &VAR_7[VAR_17 * VAR_13];


      VAR_6[VAR_17 * (VAR_13 + 1)] = VAR_32;
      for(VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) VAR_6[VAR_17 * (VAR_13 + 1) + 1 + VAR_16] = VAR_29[VAR_32].data[VAR_16];
    }

    for(VAR_31 = 0; VAR_31 < 5; VAR_31++) FUNC_4(&VAR_29[VAR_31]);
  }
  else if(VAR_19 == VAR_4)
  {
    for(VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
    {
      size_t VAR_35 = (1 + VAR_13) * VAR_17;
      size_t VAR_36 = VAR_13 * VAR_17;
      unsigned VAR_37 = VAR_11->predefined_filters[VAR_17];
      VAR_6[VAR_35] = VAR_37;
      FUNC_0(&VAR_6[VAR_35 + 1], &VAR_7[VAR_36], VAR_15, VAR_13, VAR_14, VAR_37);
      VAR_15 = &VAR_7[VAR_36];
    }
  }
  else if(VAR_19 == VAR_1)
  {



    size_t VAR_38[5];
    ucvector VAR_39[5];
    size_t VAR_40 = 0;
    unsigned VAR_41 = 0, VAR_42 = 0;
    unsigned char* VAR_43;
    LodePNGCompressSettings VAR_44 = VAR_11->zlibsettings;




    VAR_44.btype = 1;


    VAR_44.custom_zlib = 0;
    VAR_44.custom_deflate = 0;
    for(VAR_41 = 0; VAR_41 < 5; VAR_41++)
    {
      FUNC_5(&VAR_39[VAR_41]);
      FUNC_6(&VAR_39[VAR_41], VAR_13);
    }
    for(VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
    {
      for(VAR_41 = 0; VAR_41 < 5; VAR_41++)
      {
        unsigned VAR_45 = VAR_39[VAR_41].size;


        FUNC_0(VAR_39[VAR_41].data, &VAR_7[VAR_17 * VAR_13], VAR_15, VAR_13, VAR_14, VAR_41);
        VAR_38[VAR_41] = 0;
        VAR_43 = 0;
        FUNC_7(&VAR_43, &VAR_38[VAR_41], VAR_39[VAR_41].data, VAR_45, &VAR_44);
        FUNC_2(VAR_43);

        if(VAR_41 == 0 || VAR_38[VAR_41] < VAR_40)
        {
          VAR_42 = VAR_41;
          VAR_40 = VAR_38[VAR_41];
        }
      }
      VAR_15 = &VAR_7[VAR_17 * VAR_13];
      VAR_6[VAR_17 * (VAR_13 + 1)] = VAR_42;
      for(VAR_16 = 0; VAR_16 < VAR_13; VAR_16++) VAR_6[VAR_17 * (VAR_13 + 1) + 1 + VAR_16] = VAR_39[VAR_42].data[VAR_16];
    }
    for(VAR_41 = 0; VAR_41 < 5; VAR_41++) FUNC_4(&VAR_39[VAR_41]);
  }
  else return 88;

  return VAR_18;
}
