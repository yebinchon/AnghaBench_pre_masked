
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int uint8_t ;
typedef void* int64_t ;
struct TYPE_19__ {scalar_t__ new_chap; int discard; int size; int frametype; int scr_sequence; void* dts; void* pts; int * data; } ;
struct TYPE_20__ {scalar_t__ new_chap; scalar_t__ chap_time; scalar_t__ last_pts; int unfinished; int list; TYPE_2__ packet_info; TYPE_15__* context; int codec; TYPE_14__* parser; int chap_scr; int * palette; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_21__ {int frame_count; TYPE_3__* private_data; } ;
typedef TYPE_4__ hb_work_object_t ;
struct TYPE_18__ {int flags; scalar_t__ start; scalar_t__ new_chap; int frametype; int scr_sequence; void* renderOffset; } ;
struct TYPE_22__ {int size; TYPE_1__ s; int * data; int * palette; scalar_t__ alloc; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_17__ {int codec_id; int * codec; } ;
struct TYPE_16__ {void* dts; void* pts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_14__*,TYPE_15__*,int **,int*,int *,int,void*,void*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,int ) ;
 TYPE_5__* FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_9( hb_work_object_t * VAR_5, hb_buffer_t ** VAR_6,
                            hb_buffer_t ** VAR_7 )
{
    hb_work_private_t * VAR_8 = VAR_5->private_data;
    hb_buffer_t * VAR_9 = *VAR_6;
    int VAR_10 = VAR_4;

    *VAR_7 = ((void*)0);




    if (VAR_9->data != ((void*)0))
    {
        FUNC_7(VAR_9->data + VAR_9->size, 0, VAR_9->alloc - VAR_9->size);
    }
    if (VAR_9->palette != ((void*)0))
    {
        VAR_8->palette = VAR_9->palette;
        VAR_9->palette = ((void*)0);
    }


    if (VAR_9->s.flags & VAR_1)
    {
        if (VAR_8->context != ((void*)0) && VAR_8->context->codec != ((void*)0))
        {
            FUNC_8(VAR_5);
            while (FUNC_2(VAR_8, ((void*)0)))
            {
                continue;
            }
        }
        FUNC_5(&VAR_8->list, FUNC_4(VAR_9));
        *VAR_7 = FUNC_6(&VAR_8->list);
        return VAR_3;
    }







    int VAR_11, VAR_12;
    int64_t VAR_13 = VAR_9->s.start;
    int64_t VAR_14 = VAR_9->s.renderOffset;

    if (VAR_9->s.new_chap > 0)
    {
        VAR_8->new_chap = VAR_9->s.new_chap;
        VAR_8->chap_scr = VAR_9->s.scr_sequence;
        if (VAR_9->s.start != VAR_0)
        {
            VAR_8->chap_time = VAR_9->s.start;
        }
        else
        {
            VAR_8->chap_time = VAR_8->last_pts + 1;
        }
    }
    if (VAR_9->s.start != VAR_0)
    {
        VAR_8->last_pts = VAR_9->s.start;
    }
    if (!VAR_8->unfinished)
    {

        VAR_8->packet_info.scr_sequence = VAR_9->s.scr_sequence;
        VAR_8->packet_info.new_chap = VAR_9->s.new_chap;
        VAR_8->packet_info.frametype = VAR_9->s.frametype;
        VAR_8->packet_info.discard = !!(VAR_9->s.flags & VAR_2);
    }
    for (VAR_11 = 0; VAR_11 < VAR_9->size; VAR_11 += VAR_12)
    {
        uint8_t * VAR_15 = ((void*)0);
        int VAR_16 = 0;
        int64_t VAR_17, VAR_18;

        if (VAR_8->parser)
        {
            int VAR_19 = VAR_8->context->codec_id;
            VAR_12 = FUNC_0(VAR_8->parser, VAR_8->context, &VAR_15, &VAR_16,
                                   VAR_9->data + VAR_11, VAR_9->size - VAR_11,
                                   VAR_13, VAR_14, 0 );
            VAR_17 = VAR_8->parser->pts;
            VAR_18 = VAR_8->parser->dts;
            VAR_13 = VAR_0;
            VAR_14 = VAR_0;

            if (VAR_19 != VAR_8->context->codec_id)
            {



                VAR_8->codec = FUNC_1(VAR_8->context->codec_id);
            }
        }
        else
        {
            VAR_15 = VAR_9->data;
            VAR_12 = VAR_16 = VAR_9->size;
            VAR_17 = VAR_13;
            VAR_18 = VAR_14;
        }

        if (VAR_15 != ((void*)0) && VAR_16 > 0)
        {
            VAR_8->packet_info.data = VAR_15;
            VAR_8->packet_info.size = VAR_16;
            VAR_8->packet_info.pts = VAR_17;
            VAR_8->packet_info.dts = VAR_18;

            VAR_10 = FUNC_3(VAR_5);
            if (VAR_10 != VAR_4)
            {
                break;
            }
            VAR_5->frame_count++;




            VAR_8->packet_info.scr_sequence = VAR_9->s.scr_sequence;
            VAR_8->packet_info.new_chap = VAR_9->s.new_chap;
            VAR_8->packet_info.frametype = VAR_9->s.frametype;
            VAR_8->packet_info.discard = !!(VAR_9->s.flags & VAR_2);
            VAR_8->unfinished = 0;
        }
        if (VAR_12 > 0 && VAR_16 <= 0)
        {
            VAR_8->unfinished = 1;
        }
    }
    *VAR_7 = FUNC_6(&VAR_8->list);

    return VAR_10;
}
