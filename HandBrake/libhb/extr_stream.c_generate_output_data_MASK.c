
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_17__ {int header_len; scalar_t__ stream_id_ext; scalar_t__ packet_len; void* dts; void* pts; } ;
struct TYPE_21__ {int pes_info_valid; scalar_t__ packet_len; int packet_offset; int pes_list; TYPE_10__ pes_info; TYPE_7__* buf; } ;
typedef TYPE_4__ hb_ts_stream_t ;
struct TYPE_19__ {void* pcr; scalar_t__ discontinuity; TYPE_4__* list; } ;
struct TYPE_18__ {TYPE_6__* list; } ;
struct TYPE_22__ {int need_keyframe; TYPE_2__ ts; TYPE_1__ pes; } ;
typedef TYPE_5__ hb_stream_t ;
struct TYPE_23__ {int stream_kind; int next; scalar_t__ stream_id_ext; } ;
typedef TYPE_6__ hb_pes_stream_t ;
struct TYPE_20__ {int split; void* renderOffset; void* start; void* pcr; scalar_t__ discontinuity; scalar_t__ new_chap; int type; int id; } ;
struct TYPE_24__ {int size; int * data; TYPE_3__ s; } ;
typedef TYPE_7__ hb_buffer_t ;
typedef int hb_buffer_list_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*) ;
 TYPE_7__* FUNC_1 (int) ;
 int FUNC_2 (int *,TYPE_7__*) ;
 TYPE_7__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,int *,int,TYPE_10__*) ;
 int FUNC_5 (TYPE_5__*,int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static hb_buffer_t * FUNC_8(hb_stream_t *VAR_2, int VAR_3)
{
    hb_buffer_list_t VAR_4;
    hb_buffer_t *VAR_5 = ((void*)0);

    FUNC_3(&VAR_4);
    hb_ts_stream_t * VAR_6 = &VAR_2->ts.list[VAR_3];
    hb_buffer_t * VAR_7 = VAR_6->buf;
    if (!VAR_6->pes_info_valid)
    {
        if (!FUNC_4(VAR_2, VAR_7->data, VAR_7->size, &VAR_6->pes_info))
        {
            VAR_7->size = 0;
            VAR_6->packet_len = 0;
            VAR_6->packet_offset = 0;
            return ((void*)0);
        }
        VAR_6->pes_info_valid = 1;
        VAR_6->packet_offset = VAR_6->pes_info.header_len;
    }

    uint8_t *VAR_8 = VAR_7->data + VAR_6->packet_offset;
    int VAR_9 = VAR_7->size - VAR_6->packet_offset;

    if (VAR_9 <= 0)
    {
        return ((void*)0);
    }

    int VAR_10;
    VAR_10 = VAR_6->pes_list;
    hb_pes_stream_t *VAR_11 = &VAR_2->pes.list[VAR_10];
    if (VAR_2->need_keyframe)
    {


        int VAR_12 = VAR_11->stream_kind;
        if (VAR_12 != VAR_1 || !FUNC_5(VAR_2, VAR_8, VAR_9))
        {


            if (VAR_12 != VAR_1 || ++VAR_2->need_keyframe < 512)
            {
                VAR_7->size = 0;
                VAR_6->pes_info_valid = 0;
                VAR_6->packet_len = 0;
                VAR_6->packet_offset = 0;
                return ((void*)0);
            }
        }
        VAR_2->need_keyframe = 0;
    }




    for (VAR_10 = VAR_6->pes_list; VAR_10 != -1;
         VAR_10 = VAR_2->pes.list[VAR_10].next)
    {
        hb_pes_stream_t *VAR_13 = &VAR_2->pes.list[VAR_10];
        if (VAR_13->stream_id_ext != VAR_6->pes_info.stream_id_ext &&
            VAR_13->stream_id_ext != 0)
        {
            continue;
        }





        VAR_5 = FUNC_1(VAR_9);
        if (VAR_6->packet_len < VAR_6->pes_info.packet_len + 6)
        {
            VAR_5->s.split = 1;
        }
        FUNC_2(&VAR_4, VAR_5);

        VAR_5->s.id = FUNC_0(VAR_13);
        VAR_5->s.type = FUNC_7(VAR_13->stream_kind);
        VAR_5->s.new_chap = VAR_7->s.new_chap;
        VAR_7->s.new_chap = 0;



        if (VAR_6->packet_offset > 0)
        {
            VAR_5->s.discontinuity = VAR_2->ts.discontinuity;
            VAR_2->ts.discontinuity = 0;
            VAR_5->s.pcr = VAR_2->ts.pcr;
            VAR_2->ts.pcr = VAR_0;
            VAR_5->s.start = VAR_6->pes_info.pts;
            VAR_5->s.renderOffset = VAR_6->pes_info.dts;
        }
        else
        {
            VAR_5->s.pcr = VAR_0;
            VAR_5->s.start = VAR_0;
            VAR_5->s.renderOffset = VAR_0;
        }

        FUNC_6(VAR_5->data, VAR_8, VAR_9);
    }

    if (VAR_6->pes_info.packet_len > 0 &&
        VAR_6->packet_len >= VAR_6->pes_info.packet_len + 6)
    {
        VAR_6->pes_info_valid = 0;
        VAR_6->packet_len = 0;
    }
    VAR_7->size = 0;
    VAR_6->packet_offset = 0;
    return FUNC_3(&VAR_4);
}
