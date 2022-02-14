
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_19__ {int discard; int size; int scr_sequence; int pts; int * data; int frametype; int new_chap; } ;
struct TYPE_16__ {int unfinished; int list; TYPE_8__ packet_info; TYPE_12__* parser; int context; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_17__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_15__ {int flags; int scr_sequence; int start; int frametype; int new_chap; } ;
struct TYPE_18__ {int size; TYPE_1__ s; int * data; scalar_t__ alloc; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_14__ {int pts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_12__*,int ,int **,int*,int *,int,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_8__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6( hb_work_object_t * VAR_5, hb_buffer_t ** VAR_6,
                            hb_buffer_t ** VAR_7 )
{
    hb_work_private_t * VAR_8 = VAR_5->private_data;
    hb_buffer_t * VAR_9 = *VAR_6;




    if (VAR_9->data != ((void*)0))
    {
        FUNC_5(VAR_9->data + VAR_9->size, 0, VAR_9->alloc - VAR_9->size);
    }

    if (VAR_9->s.flags & VAR_1)
    {

        FUNC_0(VAR_5);
        FUNC_2(VAR_8, ((void*)0));
        FUNC_3(&VAR_8->list, VAR_9);
        *VAR_6 = ((void*)0);
        *VAR_7 = FUNC_4(&VAR_8->list);
        return VAR_3;
    }

    *VAR_7 = ((void*)0);

    int VAR_10, VAR_11;
    int64_t VAR_12 = VAR_9->s.start;
    if (!VAR_8->unfinished)
    {

        VAR_8->packet_info.scr_sequence = VAR_9->s.scr_sequence;
        VAR_8->packet_info.new_chap = VAR_9->s.new_chap;
        VAR_8->packet_info.frametype = VAR_9->s.frametype;
        VAR_8->packet_info.discard = !!(VAR_9->s.flags & VAR_2);
    }
    for (VAR_10 = 0; VAR_10 < VAR_9->size; VAR_10 += VAR_11)
    {
        uint8_t * VAR_13 = ((void*)0);
        int VAR_14 = 0;
        int64_t VAR_15;

        if ( VAR_8->parser != ((void*)0) )
        {
            VAR_11 = FUNC_1(VAR_8->parser, VAR_8->context, &VAR_13, &VAR_14,
                                   VAR_9->data + VAR_10, VAR_9->size - VAR_10,
                                   VAR_12, VAR_12, 0 );
            VAR_15 = VAR_8->parser->pts;
            VAR_12 = VAR_0;
        }
        else
        {
            VAR_13 = VAR_9->data;
            VAR_11 = VAR_14 = VAR_9->size;
            VAR_15 = VAR_9->s.start;
        }
        if (VAR_13 != ((void*)0) && VAR_14 > 0)
        {
            VAR_8->packet_info.data = VAR_13;
            VAR_8->packet_info.size = VAR_14;
            VAR_8->packet_info.pts = VAR_15;

            FUNC_2(VAR_8, &VAR_8->packet_info);




            VAR_8->packet_info.scr_sequence = VAR_9->s.scr_sequence;
            VAR_8->packet_info.discard = !!(VAR_9->s.flags & VAR_2);
            VAR_8->unfinished = 0;
        }
        if (VAR_11 > 0 && VAR_14 <= 0)
        {
            VAR_8->unfinished = 1;
        }
    }
    *VAR_7 = FUNC_4(&VAR_8->list);
    return VAR_4;
}
