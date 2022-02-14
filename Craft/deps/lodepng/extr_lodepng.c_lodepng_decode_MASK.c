
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ colortype; int bitdepth; } ;
struct TYPE_11__ {int fix_png; int color_convert; } ;
struct TYPE_10__ {int color; } ;
struct TYPE_12__ {int error; TYPE_2__ decoder; TYPE_1__ info_png; TYPE_4__ info_raw; } ;
typedef TYPE_3__ LodePNGState ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char**,unsigned int*,unsigned int*,TYPE_3__*,unsigned char const*,size_t) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (unsigned char*,unsigned char*,TYPE_4__*,int *,unsigned int,unsigned int,int ) ;
 int FUNC_4 (unsigned char*) ;
 size_t FUNC_5 (unsigned int,unsigned int,TYPE_4__*) ;
 scalar_t__ FUNC_6 (size_t) ;

unsigned FUNC_7(unsigned char** VAR_2, unsigned* VAR_3, unsigned* VAR_4,
                        LodePNGState* VAR_5,
                        const unsigned char* VAR_6, size_t VAR_7)
{
  *VAR_2 = 0;
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  if(VAR_5->error) return VAR_5->error;
  if(!VAR_5->decoder.color_convert || FUNC_2(&VAR_5->info_raw, &VAR_5->info_png.color))
  {



    if(!VAR_5->decoder.color_convert)
    {
      VAR_5->error = FUNC_1(&VAR_5->info_raw, &VAR_5->info_png.color);
      if(VAR_5->error) return VAR_5->error;
    }
  }
  else
  {

    unsigned char* VAR_8 = *VAR_2;
    size_t VAR_9;



    if(!(VAR_5->info_raw.colortype == VAR_0 || VAR_5->info_raw.colortype == VAR_1)
       && !(VAR_5->info_raw.bitdepth == 8))
    {
      return 56;
    }

    VAR_9 = FUNC_5(*VAR_3, *VAR_4, &VAR_5->info_raw);
    *VAR_2 = (unsigned char*)FUNC_6(VAR_9);
    if(!(*VAR_2))
    {
      VAR_5->error = 83;
    }
    else VAR_5->error = FUNC_3(*VAR_2, VAR_8, &VAR_5->info_raw, &VAR_5->info_png.color, *VAR_3, *VAR_4, VAR_5->decoder.fix_png);
    FUNC_4(VAR_8);
  }
  return VAR_5->error;
}
