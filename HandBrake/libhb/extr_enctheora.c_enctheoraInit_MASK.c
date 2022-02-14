
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


struct TYPE_26__ {int pic_width; int pic_height; int frame_width; int frame_height; int target_bitrate; scalar_t__ quality; int keyframe_granule_shift; int pixel_fmt; int colorspace; int aspect_denominator; int aspect_numerator; int fps_denominator; int fps_numerator; scalar_t__ pic_y; scalar_t__ pic_x; } ;
typedef TYPE_6__ th_info ;
typedef int th_comment ;
typedef int op ;
struct TYPE_27__ {int bytes; struct TYPE_27__* packet; } ;
typedef TYPE_7__ ogg_packet ;
typedef int keyframe_frequency ;
struct TYPE_28__ {int ctx; void* file; TYPE_10__* job; } ;
typedef TYPE_8__ hb_work_private_t ;
struct TYPE_29__ {TYPE_5__* config; TYPE_8__* private_data; } ;
typedef TYPE_9__ hb_work_object_t ;
struct TYPE_23__ {double den; scalar_t__ num; } ;
struct TYPE_22__ {int den; int num; } ;
struct TYPE_21__ {int den; int num; } ;
struct TYPE_20__ {scalar_t__ pass_id; int width; int height; scalar_t__ vquality; int vbitrate; TYPE_3__ orig_vrate; TYPE_2__ par; TYPE_1__ vrate; } ;
typedef TYPE_10__ hb_job_t ;
typedef int buffer ;
typedef int arg ;
struct TYPE_24__ {TYPE_7__** headers; } ;
struct TYPE_25__ {TYPE_4__ theora; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_8__* FUNC_0 (int,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (unsigned char*,int,int,void*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_7__*,TYPE_7__*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int ,int ,...) ;
 int FUNC_13 (int ,int *,TYPE_7__*) ;
 int FUNC_14 (TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*) ;

int FUNC_16( hb_work_object_t * VAR_11, hb_job_t * VAR_12 )
{
    int VAR_13, VAR_14, VAR_15;
    hb_work_private_t * VAR_16 = FUNC_0( 1, sizeof( hb_work_private_t ) );
    VAR_11->private_data = VAR_16;

    VAR_16->job = VAR_12;

    if( VAR_12->pass_id == VAR_1 ||
        VAR_12->pass_id == VAR_2 )
    {
        char * VAR_17;
        VAR_17 = FUNC_6("theroa.log");
        if ( VAR_12->pass_id == VAR_1 )
        {
            VAR_16->file = FUNC_5(VAR_17, "wb");
        }
        else
        {
            VAR_16->file = FUNC_5(VAR_17, "rb");
        }
        FUNC_2(VAR_17);
    }

    th_info VAR_18;
    th_comment VAR_19;
    ogg_packet VAR_20;
    FUNC_15( &VAR_18 );


    VAR_18.pic_width = VAR_12->width;
    VAR_18.pic_height = VAR_12->height;
    VAR_18.frame_width = (VAR_12->width + 0xf) & ~0xf;
    VAR_18.frame_height = (VAR_12->height + 0xf) & ~0xf;
    VAR_18.pic_x = VAR_18.pic_y = 0;
    VAR_18.fps_numerator = VAR_12->vrate.num;
    VAR_18.fps_denominator = VAR_12->vrate.den;
    VAR_18.aspect_numerator = VAR_12->par.num;
    VAR_18.aspect_denominator = VAR_12->par.den;
    VAR_18.colorspace = VAR_3;
    VAR_18.pixel_fmt = VAR_9;
    if (VAR_12->vquality <= VAR_0)
    {
        VAR_18.target_bitrate = VAR_12->vbitrate * 1000;
        VAR_18.quality = 0;
    }
    else
    {
        VAR_18.target_bitrate = 0;
        VAR_18.quality = VAR_12->vquality;
    }

    VAR_13 = ((double)VAR_12->orig_vrate.num / VAR_12->orig_vrate.den +
                                  0.5) * 10;

    FUNC_7("theora: keyint: %i", VAR_13);

    int VAR_21 = VAR_13 - 1;
    for (VAR_14 = 0; VAR_21; VAR_14++)
        VAR_21 >>= 1;

    VAR_18.keyframe_granule_shift = VAR_14;

    VAR_16->ctx = FUNC_11( &VAR_18 );
    FUNC_14( &VAR_18 );

    VAR_15 = FUNC_12(VAR_16->ctx, VAR_6,
                        &VAR_13, sizeof(VAR_13));
    if( VAR_15 < 0 )
    {
        FUNC_7("theora: Could not set keyframe interval to %d", VAR_13);
    }



    int VAR_22 = VAR_10;
    VAR_15 = FUNC_12(VAR_16->ctx, VAR_8, &VAR_22, sizeof(VAR_22));
    if( VAR_15 < 0 )
    {
        FUNC_7("theora: Could not set soft ratecontrol");
    }
    if( VAR_12->pass_id == VAR_1 ||
        VAR_12->pass_id == VAR_2 )
    {
        VAR_22 = VAR_13 * 7 >> 1;
        VAR_15 = FUNC_12(VAR_16->ctx, VAR_7, &VAR_22, sizeof(VAR_22));
        if( VAR_15 < 0 )
        {
            FUNC_7("theora: Could not set rate control buffer");
        }
    }

    if( VAR_12->pass_id == VAR_1 )
    {
        unsigned char *VAR_23;
        int VAR_24;
        VAR_24 = FUNC_12(VAR_16->ctx, VAR_5, &VAR_23, sizeof(VAR_23));
        if( VAR_24 < 0 )
        {
            FUNC_4("Could not set up the first pass of two-pass mode.\n");
            FUNC_4("Did you remember to specify an estimated bitrate?\n");
            return 1;
        }
        if( FUNC_3( VAR_23, 1, VAR_24, VAR_16->file ) < VAR_24 )
        {
            FUNC_4("Unable to write to two-pass data file.\n");
            return 1;
        }
        FUNC_1( VAR_16->file );
    }
    if( VAR_12->pass_id == VAR_2 )
    {






        FUNC_7("enctheora: init 2nd pass");
        if( FUNC_12( VAR_16->ctx, VAR_4, ((void*)0), 0) < 0)
        {
            FUNC_7("theora: Could not set up the second pass of two-pass mode.");
            return 1;
        }
    }

    FUNC_10( &VAR_19 );

    ogg_packet *VAR_25;

    int VAR_26;
    for (VAR_26 = 0; VAR_26 < 3; VAR_26++)
    {
        FUNC_13( VAR_16->ctx, &VAR_19, &VAR_20 );
        VAR_25 = (ogg_packet*)VAR_11->config->theora.headers[VAR_26];
        FUNC_8(VAR_25, &VAR_20, sizeof(VAR_20));
        VAR_25->packet = VAR_11->config->theora.headers[VAR_26] + sizeof(ogg_packet);
        FUNC_8(VAR_25->packet, VAR_20.packet, VAR_20.bytes );
    }

    FUNC_9( &VAR_19 );

    return 0;
}
