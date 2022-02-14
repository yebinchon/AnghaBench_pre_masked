
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int root ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {int nb_index_entries; TYPE_3__* index_entries; int index_entries_allocated_size; void* pb; int last_valid_pts; int pts; int epoch; } ;
typedef TYPE_1__ WtvContext ;
struct TYPE_14__ {void* pb; TYPE_2__** streams; scalar_t__ nb_streams; int ctx_flags; TYPE_1__* priv_data; } ;
struct TYPE_13__ {scalar_t__ size; int timestamp; scalar_t__ pos; } ;
struct TYPE_12__ {int duration; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVIndexEntry ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (void*,int *,int) ;
 void* FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (void*,scalar_t__,int ) ;
 int FUNC_6 (void*,int) ;
 scalar_t__ FUNC_7 (void*) ;
 int FUNC_8 (TYPE_3__**,int*,int *,int ,scalar_t__,scalar_t__,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_9 (TYPE_4__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_11 (void*,unsigned int,int ) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (TYPE_4__*,int *,int,int ) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_13)
{
    WtvContext *VAR_14 = VAR_13->priv_data;
    unsigned VAR_15;
    int VAR_16;
    uint8_t VAR_17[VAR_8];
    AVIOContext *VAR_18;
    int64_t VAR_19;
    int64_t VAR_20;

    VAR_14->epoch =
    VAR_14->pts =
    VAR_14->last_valid_pts = VAR_4;


    FUNC_6(VAR_13->pb, 0x30);
    VAR_16 = FUNC_3(VAR_13->pb);
    if (VAR_16 > sizeof(VAR_17)) {
        FUNC_0(VAR_13, VAR_3, "root directory size exceeds sector size\n");
        return VAR_0;
    }
    FUNC_6(VAR_13->pb, 4);
    VAR_15 = FUNC_3(VAR_13->pb);

    VAR_20 = FUNC_11(VAR_13->pb, VAR_15, 0);
    if (VAR_20 < 0)
        return VAR_20;
    VAR_16 = FUNC_2(VAR_13->pb, VAR_17, VAR_16);
    if (VAR_16 < 0)
        return VAR_0;


    VAR_14->pb = FUNC_13(VAR_13, VAR_17, VAR_16, VAR_11);
    if (!VAR_14->pb) {
        FUNC_0(VAR_13, VAR_3, "timeline data missing\n");
        return VAR_0;
    }

    VAR_20 = FUNC_9(VAR_13, VAR_7, 0, 0);
    if (VAR_20 < 0)
        return VAR_20;
    FUNC_5(VAR_14->pb, -32, VAR_5);

    VAR_19 = FUNC_7(VAR_13->pb);


    VAR_18 = FUNC_13(VAR_13, VAR_17, VAR_16, VAR_9);
    if (VAR_18) {
        FUNC_10(VAR_13, VAR_18);
        FUNC_12(VAR_18);
    }

    VAR_13->ctx_flags |= VAR_1;


    if (VAR_13->nb_streams) {
        AVStream *VAR_21 = VAR_13->streams[0];
        VAR_18 = FUNC_13(VAR_13, VAR_17, VAR_16, VAR_10);
        if (VAR_18) {
            while(1) {
                uint64_t VAR_22 = FUNC_4(VAR_18);
                uint64_t VAR_23 = FUNC_4(VAR_18);
                if (FUNC_1(VAR_18))
                    break;
                FUNC_8(&VAR_14->index_entries, &VAR_14->nb_index_entries, &VAR_14->index_entries_allocated_size,
                                   0, VAR_22, VAR_23, 0, VAR_2);
            }
            FUNC_12(VAR_18);

            if (VAR_14->nb_index_entries) {
                VAR_18 = FUNC_13(VAR_13, VAR_17, VAR_16, VAR_12);
                if (VAR_18) {
                    AVIndexEntry *VAR_24 = VAR_14->index_entries;
                    AVIndexEntry *VAR_25 = VAR_14->index_entries + VAR_14->nb_index_entries - 1;
                    uint64_t VAR_26 = 0;
                    while (1) {
                        uint64_t VAR_27 = FUNC_4(VAR_18);
                        uint64_t VAR_28 = FUNC_4(VAR_18);
                        while (VAR_24 <= VAR_25 && VAR_27 > VAR_24->size) {
                            VAR_24->pos = VAR_26;
                            VAR_24++;
                        }
                        if (FUNC_1(VAR_18))
                            break;
                        VAR_26 = VAR_28;
                    }
                    VAR_25->pos = VAR_26;
                    FUNC_12(VAR_18);
                    VAR_21->duration = VAR_25->timestamp;
                }
            }
        }
    }

    FUNC_5(VAR_13->pb, VAR_19, VAR_6);
    return 0;
}
