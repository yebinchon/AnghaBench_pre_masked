
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_3__ ;
typedef struct TYPE_44__ TYPE_2__ ;
typedef struct TYPE_43__ TYPE_22__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_15__ ;
typedef struct TYPE_40__ TYPE_12__ ;
typedef struct TYPE_39__ TYPE_10__ ;


struct TYPE_42__ {unsigned char* data; size_t size; } ;
typedef TYPE_1__ ucvector ;
struct TYPE_43__ {int windowsize; int btype; } ;
struct TYPE_46__ {TYPE_22__ zlibsettings; int text_compression; scalar_t__ add_id; scalar_t__ force_palette; int auto_convert; } ;
struct TYPE_40__ {scalar_t__ colortype; int palettesize; scalar_t__ key_defined; int palette; int bitdepth; } ;
struct TYPE_45__ {size_t text_num; char** text_keys; size_t itext_num; char** itext_keys; int * unknown_chunks_size; scalar_t__* unknown_chunks_data; int * itext_strings; int * itext_transkeys; int * itext_langtags; int * text_strings; int time; scalar_t__ time_defined; scalar_t__ phys_defined; scalar_t__ background_defined; TYPE_12__ color; int interlace_method; } ;
struct TYPE_41__ {scalar_t__ colortype; int bitdepth; } ;
struct TYPE_39__ {int interlace_method; } ;
struct TYPE_44__ {int error; TYPE_7__ encoder; TYPE_15__ info_raw; TYPE_10__ info_png; } ;
typedef TYPE_2__ LodePNGState ;
typedef TYPE_3__ LodePNGInfo ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,unsigned char*,size_t,TYPE_22__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,unsigned int,unsigned int,scalar_t__,int ,int ) ;
 int FUNC_4 (TYPE_1__*,TYPE_12__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,int ,char*,int ,int ,int ,TYPE_22__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 int FUNC_10 (TYPE_1__*,TYPE_12__*) ;
 int FUNC_11 (TYPE_1__*,char*,int ,TYPE_22__*) ;
 void* FUNC_12 (TYPE_1__*,scalar_t__,int ) ;
 void* FUNC_13 (scalar_t__,int ) ;
 scalar_t__ FUNC_14 (int ,int) ;
 int FUNC_15 (TYPE_12__*,unsigned char const*,unsigned int,unsigned int,TYPE_15__*,int ) ;
 int FUNC_16 (TYPE_15__*,TYPE_12__*) ;
 int FUNC_17 (unsigned char*,unsigned char const*,TYPE_12__*,TYPE_15__*,unsigned int,unsigned int,int ) ;
 int FUNC_18 (unsigned char*) ;
 unsigned int FUNC_19 (TYPE_12__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_3__*,TYPE_10__*) ;
 int FUNC_22 (TYPE_3__*) ;
 scalar_t__ FUNC_23 (size_t) ;
 int FUNC_24 (unsigned char**,size_t*,unsigned char const*,unsigned int,unsigned int,TYPE_3__*,TYPE_7__*) ;
 int FUNC_25 (char*,char*) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;

unsigned FUNC_29(unsigned char** VAR_6, size_t* VAR_7,
                        const unsigned char* VAR_8, unsigned VAR_9, unsigned VAR_10,
                        LodePNGState* VAR_11)
{
  LodePNGInfo VAR_12;
  ucvector VAR_13;
  unsigned char* VAR_14 = 0;
  size_t VAR_15 = 0;


  *VAR_6 = 0;
  *VAR_7 = 0;
  VAR_11->error = 0;

  FUNC_22(&VAR_12);
  FUNC_21(&VAR_12, &VAR_11->info_png);

  if((VAR_12.color.colortype == VAR_2 || VAR_11->encoder.force_palette)
      && (VAR_12.color.palettesize == 0 || VAR_12.color.palettesize > 256))
  {
    VAR_11->error = 68;
    return VAR_11->error;
  }

  if(VAR_11->encoder.auto_convert != VAR_0)
  {
    VAR_11->error = FUNC_15(&VAR_12.color, VAR_8, VAR_9, VAR_10, &VAR_11->info_raw,
                                             VAR_11->encoder.auto_convert);
  }
  if(VAR_11->error) return VAR_11->error;

  if(VAR_11->encoder.zlibsettings.windowsize > 32768)
  {
    FUNC_0(VAR_11->error, 60);
  }
  if(VAR_11->encoder.zlibsettings.btype > 2)
  {
    FUNC_0(VAR_11->error, 61);
  }
  if(VAR_11->info_png.interlace_method > 1)
  {
    FUNC_0(VAR_11->error, 71);
  }

  VAR_11->error = FUNC_13(VAR_12.color.colortype, VAR_12.color.bitdepth);
  if(VAR_11->error) return VAR_11->error;
  VAR_11->error = FUNC_13(VAR_11->info_raw.colortype, VAR_11->info_raw.bitdepth);
  if(VAR_11->error) return VAR_11->error;

  if(!FUNC_16(&VAR_11->info_raw, &VAR_12.color))
  {
    unsigned char* VAR_16;
    size_t VAR_17 = (VAR_9 * VAR_10 * FUNC_19(&VAR_12.color) + 7) / 8;

    VAR_16 = (unsigned char*)FUNC_23(VAR_17);
    if(!VAR_16 && VAR_17) VAR_11->error = 83;
    if(!VAR_11->error)
    {
      VAR_11->error = FUNC_17(VAR_16, VAR_8, &VAR_12.color, &VAR_11->info_raw, VAR_9, VAR_10, 0 );
    }
    if(!VAR_11->error) FUNC_24(&VAR_14, &VAR_15, VAR_16, VAR_9, VAR_10, &VAR_12, &VAR_11->encoder);
    FUNC_18(VAR_16);
  }
  else FUNC_24(&VAR_14, &VAR_15, VAR_8, VAR_9, VAR_10, &VAR_12, &VAR_11->encoder);

  FUNC_27(&VAR_13);
  while(!VAR_11->error)
  {




    FUNC_28(&VAR_13);

    FUNC_3(&VAR_13, VAR_9, VAR_10, VAR_12.color.colortype, VAR_12.color.bitdepth, VAR_12.interlace_method);
    if(VAR_12.color.colortype == VAR_2)
    {
      FUNC_4(&VAR_13, &VAR_12.color);
    }
    if(VAR_11->encoder.force_palette && (VAR_12.color.colortype == VAR_3 || VAR_12.color.colortype == VAR_4))
    {
      FUNC_4(&VAR_13, &VAR_12.color);
    }

    if(VAR_12.color.colortype == VAR_2 && FUNC_14(VAR_12.color.palette, VAR_12.color.palettesize) != 0)
    {
      FUNC_10(&VAR_13, &VAR_12.color);
    }
    if((VAR_12.color.colortype == VAR_1 || VAR_12.color.colortype == VAR_3) && VAR_12.color.key_defined)
    {
      FUNC_10(&VAR_13, &VAR_12.color);
    }
    VAR_11->error = FUNC_1(&VAR_13, VAR_14, VAR_15, &VAR_11->encoder.zlibsettings);
    if(VAR_11->error) break;
    FUNC_2(&VAR_13);

    break;
  }

  FUNC_20(&VAR_12);
  FUNC_18(VAR_14);

  *VAR_6 = VAR_13.data;
  *VAR_7 = VAR_13.size;

  return VAR_11->error;
}
