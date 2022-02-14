
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct pullup_frame {int length; TYPE_4__* buffer; } ;
struct pullup_context {int parity; } ;
struct pullup_buffer {int * size; int * planes; } ;
struct TYPE_14__ {int color_range; int color_matrix; int color_transfer; int color_prim; int pix_fmt; } ;
struct TYPE_18__ {TYPE_2__ output; scalar_t__ pullup_fakecount; struct pullup_context* pullup_ctx; } ;
typedef TYPE_6__ hb_filter_private_t ;
struct TYPE_19__ {TYPE_6__* private_data; } ;
typedef TYPE_7__ hb_filter_object_t ;
struct TYPE_17__ {int flags; } ;
struct TYPE_13__ {int color_range; int color_matrix; int color_transfer; int color_prim; int height; int width; } ;
struct TYPE_20__ {TYPE_5__ s; TYPE_3__* plane; TYPE_1__ f; } ;
typedef TYPE_8__ hb_buffer_t ;
struct TYPE_16__ {int * size; int * planes; } ;
struct TYPE_15__ {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct pullup_buffer* FUNC_3 (struct pullup_context*,int) ;
 struct pullup_frame* FUNC_4 (struct pullup_context*) ;
 int FUNC_5 (struct pullup_context*,struct pullup_frame*) ;
 int FUNC_6 (struct pullup_buffer*,int) ;
 int FUNC_7 (struct pullup_frame*) ;
 int FUNC_8 (struct pullup_context*,struct pullup_buffer*,int) ;

__attribute__((used)) static int FUNC_9( hb_filter_object_t * VAR_6,
                               hb_buffer_t ** VAR_7,
                               hb_buffer_t ** VAR_8 )
{
    hb_filter_private_t * VAR_9 = VAR_6->private_data;
    hb_buffer_t * VAR_10 = *VAR_7, * VAR_11;

    if (VAR_10->s.flags & VAR_0)
    {
        *VAR_8 = VAR_10;
        *VAR_7 = ((void*)0);
        return VAR_1;
    }

    struct pullup_context * VAR_12 = VAR_9->pullup_ctx;
    struct pullup_buffer * VAR_13;
    struct pullup_frame * VAR_14;

    VAR_13 = FUNC_3( VAR_12, 2 );
    if( !VAR_13 )
    {
        VAR_14 = FUNC_4( VAR_12 );
        FUNC_7( VAR_14 );
        FUNC_1( "Could not get buffer from pullup!" );
        return VAR_2;
    }


    FUNC_2( VAR_13->planes[0], VAR_10->plane[0].data, VAR_13->size[0] );
    FUNC_2( VAR_13->planes[1], VAR_10->plane[1].data, VAR_13->size[1] );
    FUNC_2( VAR_13->planes[2], VAR_10->plane[2].data, VAR_13->size[2] );



    int VAR_15 = 1;
    if( VAR_10->s.flags & VAR_5 )
    {

        VAR_15 = 0;
    }
    else if( VAR_12->parity == 0 )
    {


        VAR_15 = 0;
    }
    if( VAR_12->parity == 1 )
    {

        VAR_15 = 1;
    }
    FUNC_8( VAR_12, VAR_13, VAR_15 );
    FUNC_8( VAR_12, VAR_13, VAR_15^1 );
    if( VAR_10->s.flags & VAR_4 )
    {
        FUNC_8( VAR_12, VAR_13, VAR_15 );
    }
    FUNC_6( VAR_13, 2 );


    VAR_14 = FUNC_4( VAR_12 );
    if( !VAR_14 )
    {
        if( VAR_9->pullup_fakecount )
        {
            VAR_9->pullup_fakecount--;

            *VAR_7 = ((void*)0);
            *VAR_8 = VAR_10;

            goto output_frame;
        }
        else
        {
            goto discard_frame;
        }
    }


    if( VAR_14->length < 2 )
    {
        FUNC_7( VAR_14 );
        VAR_14 = FUNC_4( VAR_12 );

        if (!VAR_14)
        {
            goto discard_frame;
        }
        if( VAR_14->length < 2 )
        {
            FUNC_7( VAR_14 );

            if( !(VAR_10->s.flags & VAR_4) )
            {
                goto discard_frame;
            }

            VAR_14 = FUNC_4( VAR_12 );

            if( !VAR_14 )
            {
                goto discard_frame;
            }
            if( VAR_14->length < 2 )
            {
                FUNC_7( VAR_14 );
                goto discard_frame;
            }
        }
    }


    if( !VAR_14->buffer )
    {
        FUNC_5( VAR_12, VAR_14 );
    }

    VAR_11 = FUNC_0(VAR_9->output.pix_fmt, VAR_10->f.width, VAR_10->f.height);
    VAR_11->f.color_prim = VAR_9->output.color_prim;
    VAR_11->f.color_transfer = VAR_9->output.color_transfer;
    VAR_11->f.color_matrix = VAR_9->output.color_matrix;
    VAR_11->f.color_range = VAR_9->output.color_range ;


    FUNC_2( VAR_11->plane[0].data, VAR_14->buffer->planes[0], VAR_14->buffer->size[0] );
    FUNC_2( VAR_11->plane[1].data, VAR_14->buffer->planes[1], VAR_14->buffer->size[1] );
    FUNC_2( VAR_11->plane[2].data, VAR_14->buffer->planes[2], VAR_14->buffer->size[2] );

    FUNC_7( VAR_14 );

    VAR_11->s = VAR_10->s;
    *VAR_8 = VAR_11;

output_frame:

    return VAR_3;





discard_frame:
    return VAR_3;

}
