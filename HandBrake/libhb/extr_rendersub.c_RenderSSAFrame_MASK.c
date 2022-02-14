
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_13__ {scalar_t__* crop; } ;
typedef TYPE_3__ hb_filter_private_t ;
struct TYPE_12__ {int width; int height; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_14__ {TYPE_2__ f; TYPE_1__* plane; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_15__ {int color; int w; int h; scalar_t__ dst_y; scalar_t__ dst_x; } ;
struct TYPE_11__ {unsigned int* data; int stride; } ;
typedef TYPE_5__ ASS_Image ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int,int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (TYPE_5__*,int,int) ;

__attribute__((used)) static hb_buffer_t * FUNC_3( hb_filter_private_t * VAR_1, ASS_Image * VAR_2 )
{
    hb_buffer_t *VAR_3;
    int VAR_4, VAR_5;

    unsigned VAR_6 = ( VAR_2->color >> 24 ) & 0xff;
    unsigned VAR_7 = ( VAR_2->color >> 16 ) & 0xff;
    unsigned VAR_8 = ( VAR_2->color >> 8 ) & 0xff;

    int VAR_9 = FUNC_1((VAR_6 << 16) | (VAR_7 << 8) | VAR_8 );

    unsigned VAR_10 = (VAR_9 >> 16) & 0xff;
    unsigned VAR_11 = (VAR_9 >> 8 ) & 0xff;
    unsigned VAR_12 = (VAR_9 >> 0 ) & 0xff;


    VAR_3 = FUNC_0(VAR_0, VAR_2->w, VAR_2->h);
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    uint8_t *VAR_13, *VAR_14, *VAR_15, *VAR_16;
    VAR_13 = VAR_3->plane[0].data;
    VAR_14 = VAR_3->plane[1].data;
    VAR_15 = VAR_3->plane[2].data;
    VAR_16 = VAR_3->plane[3].data;

    for( VAR_5 = 0; VAR_5 < VAR_2->h; VAR_5++ )
    {
        for( VAR_4 = 0; VAR_4 < VAR_2->w; VAR_4++ )
        {
            VAR_13[VAR_4] = VAR_10;
            if( ( VAR_5 & 1 ) == 0 )
            {
                VAR_14[VAR_4>>1] = VAR_12;
                VAR_15[VAR_4>>1] = VAR_11;
            }
            VAR_16[VAR_4] = FUNC_2( VAR_2, VAR_4, VAR_5 );;
        }
        VAR_13 += VAR_3->plane[0].stride;
        if( ( VAR_5 & 1 ) == 0 )
        {
            VAR_14 += VAR_3->plane[1].stride;
            VAR_15 += VAR_3->plane[2].stride;
        }
        VAR_16 += VAR_3->plane[3].stride;
    }
    VAR_3->f.width = VAR_2->w;
    VAR_3->f.height = VAR_2->h;
    VAR_3->f.x = VAR_2->dst_x + VAR_1->crop[2];
    VAR_3->f.y = VAR_2->dst_y + VAR_1->crop[0];

    return VAR_3;
}
