
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* palette; int palette_set; int width; int height; } ;
typedef TYPE_1__ hb_subtitle_t ;
struct TYPE_6__ {int extradata_size; int* extradata; int width; int height; } ;
typedef TYPE_2__ AVCodecParameters ;



__attribute__((used)) static int FUNC_0( AVCodecParameters *VAR_0,
                                              hb_subtitle_t *VAR_1 )
{
    if ( VAR_0->extradata_size != 4*16 )
        return 1;

    int VAR_2, VAR_3;
    for ( VAR_2=0, VAR_3=0; VAR_2<16; VAR_2++, VAR_3+=4 )
    {
        VAR_1->palette[VAR_2] =
            VAR_0->extradata[VAR_3+1] << 16 |
            VAR_0->extradata[VAR_3+2] << 8 |
            VAR_0->extradata[VAR_3+3] << 0;
        VAR_1->palette_set = 1;
    }
    if (VAR_0->width <= 0 || VAR_0->height <= 0)
    {
        VAR_1->width = 720;
        VAR_1->height = 480;
    }
    else
    {
        VAR_1->width = VAR_0->width;
        VAR_1->height = VAR_0->height;
    }
    return 0;
}
