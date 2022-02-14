
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_17__ {int new_chap; int scr_sequence; int pts; scalar_t__ sequence; } ;
typedef TYPE_1__ reordered_data_t ;
struct TYPE_18__ {int frametype; int discard; int new_chap; int scr_sequence; int pts; scalar_t__ size; int * data; } ;
typedef TYPE_2__ packet_info_t ;
struct TYPE_19__ {int decode_errors; int frame; int context; TYPE_8__* palette; int sequence; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_21__ {int data; int size; } ;
struct TYPE_20__ {int flags; scalar_t__ size; int * data; int dts; int pts; } ;
typedef TYPE_4__ AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int * FUNC_5 (TYPE_4__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,TYPE_4__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_11 (TYPE_8__**) ;
 TYPE_1__* FUNC_12 (int) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_15( hb_work_private_t * VAR_9, packet_info_t * VAR_10 )
{
    int VAR_11 = 0, VAR_12 = 0, VAR_13;
    AVPacket VAR_14;
    reordered_data_t * VAR_15;

    if ( VAR_8 <= 1 )
    {
        VAR_12 = FUNC_3();
        FUNC_4( VAR_2 );
    }

    FUNC_2(&VAR_14);
    if (VAR_10 != ((void*)0))
    {
        VAR_14.data = VAR_10->data;
        VAR_14.size = VAR_10->size;
        VAR_14.pts = VAR_9->sequence;
        VAR_14.dts = VAR_9->sequence;
        VAR_15 = FUNC_12(sizeof(*VAR_15));
        if (VAR_15 != ((void*)0))
        {
            VAR_15->sequence = VAR_9->sequence++;
            VAR_15->pts = VAR_10->pts;
            VAR_15->scr_sequence = VAR_10->scr_sequence;
            VAR_15->new_chap = VAR_10->new_chap;
            FUNC_14(VAR_9, VAR_15);
        }




        if (VAR_10->frametype & VAR_7)
        {
            VAR_14.flags |= VAR_5;
        }
        VAR_14.flags |= VAR_10->discard * VAR_4;
    }
    else
    {
        VAR_14.data = ((void*)0);
        VAR_14.size = 0;
    }

    if (VAR_9->palette != ((void*)0))
    {
        uint8_t * VAR_16;
        int VAR_17;
        VAR_16 = FUNC_5(&VAR_14, VAR_3,
                                          VAR_1);
        VAR_17 = FUNC_1(VAR_9->palette->size, VAR_1);
        FUNC_13(VAR_16, VAR_9->palette->data, VAR_17);
        FUNC_11(&VAR_9->palette);
    }

    VAR_13 = FUNC_8(VAR_9->context, &VAR_14);
    FUNC_6(&VAR_14);
    if (VAR_13 < 0 && VAR_13 != VAR_0)
    {
        ++VAR_9->decode_errors;
        return 0;
    }

    do
    {
        VAR_13 = FUNC_7(VAR_9->context, VAR_9->frame);
        if (VAR_13 < 0 && VAR_13 != FUNC_0(VAR_6) && VAR_13 != VAR_0)
        {
            ++VAR_9->decode_errors;
        }
        if (VAR_13 < 0)
        {
            break;
        }
        VAR_11 = 1;


        FUNC_9( VAR_9 );
        FUNC_10(VAR_9);
    } while (VAR_13 >= 0);

    if ( VAR_8 <= 1 )
    {
        FUNC_4( VAR_12 );
    }

    return VAR_11;
}
