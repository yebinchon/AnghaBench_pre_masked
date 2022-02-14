
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int size_sub; int size_rle; int size_got; scalar_t__ pts; scalar_t__ pts_stop; int scr_sequence; int current_scr_sequence; TYPE_6__* buf; int stream_id; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_16__ {TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_work_object_t ;
struct TYPE_14__ {int flags; scalar_t__ start; int id; int scr_sequence; } ;
struct TYPE_17__ {int* data; int size; TYPE_2__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_13__ {int id; int frametype; } ;
struct TYPE_18__ {int size; TYPE_1__ s; scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__**) ;
 TYPE_6__* FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int*,int) ;

int FUNC_4( hb_work_object_t * VAR_5, hb_buffer_t ** VAR_6,
                hb_buffer_t ** VAR_7 )
{
    hb_work_private_t * VAR_8 = VAR_5->private_data;
    hb_buffer_t * VAR_9 = *VAR_6;
    int VAR_10, VAR_11;

    if (VAR_9->s.flags & VAR_1)
    {

        *VAR_7 = VAR_9;
        *VAR_6 = ((void*)0);
        return VAR_3;
    }

    VAR_8->stream_id = VAR_9->s.id;

    VAR_10 = ( VAR_9->data[0] << 8 ) | VAR_9->data[1];
    VAR_11 = ( VAR_9->data[2] << 8 ) | VAR_9->data[3];

    if( !VAR_8->size_sub )
    {

        if( VAR_10 && VAR_11 && VAR_10 > VAR_11 &&
            VAR_9->size <= VAR_10 )
        {

            VAR_8->size_sub = VAR_10;
            VAR_8->size_rle = VAR_11;

            VAR_8->buf = FUNC_2( 0xFFFF );
            FUNC_3( VAR_8->buf->data, VAR_9->data, VAR_9->size );
            VAR_8->buf->s.id = VAR_9->s.id;
            VAR_8->buf->s.frametype = VAR_2;
            VAR_8->size_got = VAR_9->size;
            if( VAR_9->s.start >= 0 )
            {
                VAR_8->pts = VAR_9->s.start;
                VAR_8->current_scr_sequence = VAR_9->s.scr_sequence;
            }
        }
    }
    else
    {

        if( VAR_9->size <= VAR_8->size_sub - VAR_8->size_got )
        {
            FUNC_3( VAR_8->buf->data + VAR_8->size_got, VAR_9->data, VAR_9->size );
            VAR_8->buf->s.id = VAR_9->s.id;
            VAR_8->size_got += VAR_9->size;
            if( VAR_9->s.start >= 0 )
            {
                VAR_8->pts = VAR_9->s.start;
                VAR_8->current_scr_sequence = VAR_9->s.scr_sequence;
            }
        }
        else
        {


            if ( VAR_8->buf != ((void*)0) )
                FUNC_1( &VAR_8->buf );
            VAR_8->size_sub = 0;
        }

    }

    *VAR_7 = ((void*)0);

    if( VAR_8->size_sub && VAR_8->size_sub == VAR_8->size_got )
    {
        VAR_8->buf->size = VAR_8->size_sub;


        *VAR_7 = FUNC_0( VAR_5 );

        if ( *VAR_7 != ((void*)0) )
            (*VAR_7)->s.id = VAR_9->s.id;


        VAR_8->size_sub = 0;
        VAR_8->size_got = 0;
        VAR_8->size_rle = 0;

        if ( VAR_8->pts_stop != VAR_0 )
        {




            VAR_8->pts = VAR_8->pts_stop;
            VAR_8->current_scr_sequence = VAR_8->scr_sequence;
        }
    }

    return VAR_4;
}
