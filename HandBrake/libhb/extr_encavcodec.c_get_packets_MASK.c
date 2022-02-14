
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_19__ {int chapter_queue; int context; } ;
typedef TYPE_2__ hb_work_private_t ;
struct TYPE_20__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_work_object_t ;
struct TYPE_18__ {int flags; scalar_t__ frametype; scalar_t__ duration; scalar_t__ stop; int start; } ;
struct TYPE_21__ {TYPE_1__ s; int size; int data; } ;
typedef TYPE_4__ hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_22__ {int flags; int size; int pts; int data; } ;
typedef TYPE_5__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 int FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,int ) ;
 TYPE_4__* FUNC_11 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_12( hb_work_object_t * VAR_5, hb_buffer_list_t * VAR_6 )
{
    hb_work_private_t * VAR_7 = VAR_5->private_data;

    while (1)
    {
        int VAR_8;
        AVPacket VAR_9;
        hb_buffer_t * VAR_10;

        FUNC_1(&VAR_9);
        VAR_8 = FUNC_3(VAR_7->context, &VAR_9);
        if (VAR_8 == FUNC_0(VAR_2) || VAR_8 == VAR_0)
        {
            break;
        }
        if (VAR_8 < 0)
        {
            FUNC_9("encavcodec: avcodec_receive_packet failed");
        }

        VAR_10 = FUNC_6(VAR_9.size);
        FUNC_10(VAR_10->data, VAR_9.data, VAR_10->size);

        int64_t VAR_11 = VAR_9.pts;
        VAR_10->size = VAR_9.size;
        VAR_10->s.start = FUNC_5(VAR_7, VAR_11);
        VAR_10->s.duration = FUNC_4(VAR_7, VAR_11);
        VAR_10->s.stop = VAR_10->s.stop + VAR_10->s.duration;




        VAR_10->s.flags = VAR_4;
        VAR_10->s.frametype = 0;
        if (VAR_9.flags & VAR_1)
        {
            VAR_10->s.flags |= VAR_3;
            FUNC_8(VAR_7->chapter_queue, VAR_10);
        }
        VAR_10 = FUNC_11(VAR_7, VAR_10);

        FUNC_7(VAR_6, VAR_10);
        FUNC_2(&VAR_9);
    }
}
