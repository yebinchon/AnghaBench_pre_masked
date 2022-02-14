
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int width; int height; scalar_t__ y; scalar_t__ x; int scr_sequence; int pts_stop; int pts_start; } ;
typedef TYPE_5__ hb_work_private_t ;
struct TYPE_18__ {TYPE_3__* subtitle; TYPE_5__* private_data; } ;
typedef TYPE_6__ hb_work_object_t ;
struct TYPE_14__ {int window_height; int window_width; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {int scr_sequence; int stop; int start; int frametype; } ;
struct TYPE_19__ {TYPE_4__* plane; TYPE_2__ f; TYPE_1__ s; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_16__ {int stride; int * data; int width; } ;
struct TYPE_15__ {int height; int width; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_6__*,int *) ;
 TYPE_7__* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int ,int) ;

__attribute__((used)) static hb_buffer_t * FUNC_5( hb_work_object_t * VAR_2, uint8_t * VAR_3 )
{
    hb_work_private_t * VAR_4 = VAR_2->private_data;
    int VAR_5;
    int VAR_6[4] = { -1,-1,-1,-1 };
    uint8_t * VAR_7;
    int VAR_8, VAR_9;
    hb_buffer_t * VAR_10;
    uint8_t * VAR_11, * VAR_12, * VAR_13, * VAR_14;

    VAR_7 = VAR_3 + VAR_4->width * VAR_4->height;


    for( VAR_5 = 0; VAR_5 < VAR_4->height; VAR_5++ )
    {
        if( !FUNC_1( VAR_2, &VAR_7[VAR_5*VAR_4->width] ) )
        {
            VAR_6[0] = VAR_5;
            break;
        }
    }

    if( VAR_6[0] < 0 )
    {

        return ((void*)0);
    }


    for( VAR_5 = VAR_4->height - 1; VAR_5 >= 0; VAR_5-- )
    {
        if( !FUNC_1( VAR_2, &VAR_7[VAR_5*VAR_4->width] ) )
        {
            VAR_6[1] = VAR_5;
            break;
        }
    }


    for( VAR_5 = 0; VAR_5 < VAR_4->width; VAR_5++ )
    {
        if( !FUNC_0( VAR_2, &VAR_7[VAR_5] ) )
        {
            VAR_6[2] = VAR_5;
            break;
        }
    }


    for( VAR_5 = VAR_4->width - 1; VAR_5 >= 0; VAR_5-- )
    {
        if( !FUNC_0( VAR_2, &VAR_7[VAR_5] ) )
        {
            VAR_6[3] = VAR_5;
            break;
        }
    }

    VAR_8 = VAR_6[3] - VAR_6[2] + 1;
    VAR_9 = VAR_6[1] - VAR_6[0] + 1;

    VAR_10 = FUNC_2( VAR_0, VAR_8, VAR_9 );
    VAR_10->s.frametype = VAR_1;
    VAR_10->s.start = VAR_4->pts_start;
    VAR_10->s.stop = VAR_4->pts_stop;
    VAR_10->s.scr_sequence = VAR_4->scr_sequence;

    VAR_10->f.x = VAR_4->x + VAR_6[2];
    VAR_10->f.y = VAR_4->y + VAR_6[0];
    VAR_10->f.window_width = VAR_2->subtitle->width;
    VAR_10->f.window_height = VAR_2->subtitle->height;

    VAR_11 = VAR_3 + VAR_6[0] * VAR_4->width + VAR_6[2];
    VAR_12 = VAR_11 + VAR_4->width * VAR_4->height;
    VAR_13 = VAR_12 + VAR_4->width * VAR_4->height;
    VAR_14 = VAR_13 + VAR_4->width * VAR_4->height;

    uint8_t *VAR_15;
    for( VAR_5 = 0; VAR_5 < VAR_9; VAR_5++ )
    {

        VAR_15 = VAR_10->plane[0].data + VAR_10->plane[0].stride * VAR_5;
        FUNC_3( VAR_15, VAR_11, VAR_8 );

        if( ( VAR_5 & 1 ) == 0 )
        {

            VAR_15 = VAR_10->plane[1].data + VAR_10->plane[1].stride * ( VAR_5 >> 1 );
            FUNC_4( VAR_15, VAR_13, VAR_10->plane[1].width, VAR_8 );


            VAR_15 = VAR_10->plane[2].data + VAR_10->plane[2].stride * ( VAR_5 >> 1 );
            FUNC_4( VAR_15, VAR_14, VAR_10->plane[2].width, VAR_8 );
        }

        VAR_15 = VAR_10->plane[3].data + VAR_10->plane[3].stride * VAR_5;
        FUNC_3( VAR_15, VAR_12, VAR_8 );

        VAR_11 += VAR_4->width;
        VAR_12 += VAR_4->width;
        VAR_13 += VAR_4->width;
        VAR_14 += VAR_4->width;
    }

    return VAR_10;
}
