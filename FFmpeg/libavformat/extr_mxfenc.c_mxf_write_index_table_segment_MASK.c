
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {int nb_streams; TYPE_6__** streams; int * pb; TYPE_5__* priv_data; } ;
struct TYPE_15__ {TYPE_4__* priv_data; } ;
struct TYPE_10__ {int den; int num; } ;
struct TYPE_14__ {int last_key_index; int edit_units_count; int edit_unit_byte_count; int last_indexed_edit_unit; TYPE_3__* index_entries; TYPE_1__ time_base; } ;
struct TYPE_11__ {int* samples; int sample_size; } ;
struct TYPE_13__ {int temporal_reordering; int slice_offset; void* b_picture_count; void* max_gop; TYPE_2__ aic; } ;
struct TYPE_12__ {int flags; int temporal_ref; int offset; int slice_offset; } ;
typedef TYPE_4__ MXFStreamContext ;
typedef TYPE_5__ MXFContext ;
typedef TYPE_6__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_7__*,int ,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_12(AVFormatContext *VAR_5)
{
    MXFContext *VAR_6 = VAR_5->priv_data;
    AVIOContext *VAR_7 = VAR_5->pb;
    int VAR_8, VAR_9, VAR_10 = 0;
    int VAR_11 = VAR_6->last_key_index;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int64_t VAR_14;

    FUNC_1(VAR_5, VAR_0, "edit units count %d\n", VAR_6->edit_units_count);

    if (!VAR_6->edit_units_count && !VAR_6->edit_unit_byte_count)
        return;

    FUNC_6(VAR_7, VAR_4, 16);

    FUNC_7(VAR_7, 0);
    VAR_14 = FUNC_2(VAR_7);


    FUNC_10(VAR_7, 16, 0x3C0A);
    FUNC_11(VAR_7, VAR_2, 0);


    FUNC_10(VAR_7, 8, 0x3F0B);
    FUNC_4(VAR_7, VAR_6->time_base.den);
    FUNC_4(VAR_7, VAR_6->time_base.num);


    FUNC_10(VAR_7, 8, 0x3F0C);
    FUNC_5(VAR_7, VAR_6->last_indexed_edit_unit);


    FUNC_10(VAR_7, 8, 0x3F0D);
    if (VAR_6->edit_unit_byte_count)
        FUNC_5(VAR_7, 0);
    else
        FUNC_5(VAR_7, VAR_6->edit_units_count);


    FUNC_10(VAR_7, 4, 0x3F05);
    FUNC_4(VAR_7, VAR_6->edit_unit_byte_count);


    FUNC_10(VAR_7, 4, 0x3F06);
    FUNC_4(VAR_7, 2);


    FUNC_10(VAR_7, 4, 0x3F07);
    FUNC_4(VAR_7, 1);


    FUNC_10(VAR_7, 1, 0x3F08);
    FUNC_3(VAR_7, !VAR_6->edit_unit_byte_count);


    FUNC_10(VAR_7, 8 + (VAR_5->nb_streams+1)*6, 0x3F09);
    FUNC_4(VAR_7, VAR_5->nb_streams+1);
    FUNC_4(VAR_7, 6);

    FUNC_3(VAR_7, 0);
    FUNC_3(VAR_7, 0);
    FUNC_4(VAR_7, 0);

    for (VAR_8 = 0; VAR_8 < VAR_5->nb_streams; VAR_8++) {
        AVStream *VAR_15 = VAR_5->streams[VAR_8];
        MXFStreamContext *VAR_16 = VAR_15->priv_data;
        FUNC_3(VAR_7, VAR_16->temporal_reordering);
        if (VAR_16->temporal_reordering)
            VAR_10 = 1;
        if (VAR_6->edit_unit_byte_count) {
            FUNC_3(VAR_7, 0);
            FUNC_4(VAR_7, VAR_16->slice_offset);
        } else if (VAR_8 == 0) {
            FUNC_3(VAR_7, 0);
            FUNC_4(VAR_7, VAR_3);
        } else {
            if (!VAR_13) {
                VAR_13 = VAR_16->aic.samples[0]*VAR_16->aic.sample_size;
                VAR_13 += FUNC_8(VAR_13);
            }
            FUNC_3(VAR_7, 1);
            FUNC_4(VAR_7, (VAR_8-1)*VAR_13);
        }
    }

    if (!VAR_6->edit_unit_byte_count) {
        MXFStreamContext *VAR_17 = VAR_5->streams[0]->priv_data;
        FUNC_10(VAR_7, 8 + VAR_6->edit_units_count*15, 0x3F0A);
        FUNC_4(VAR_7, VAR_6->edit_units_count);
        FUNC_4(VAR_7, 15);

        for (VAR_8 = 0; VAR_8 < VAR_6->edit_units_count; VAR_8++) {
            int VAR_18 = 0;

            if (!(VAR_6->index_entries[VAR_8].flags & 0x33)) {
                VAR_17->max_gop = FUNC_0(VAR_17->max_gop, VAR_8 - VAR_6->last_key_index);
                VAR_6->last_key_index = VAR_11;
                VAR_11 = VAR_8;
            }

            if (VAR_10) {
                int VAR_19 = VAR_8 - VAR_11;
                if (VAR_19 != VAR_6->index_entries[VAR_8].temporal_ref) {
                    for (VAR_9 = VAR_11; VAR_9 < VAR_6->edit_units_count; VAR_9++) {
                        if (VAR_19 == VAR_6->index_entries[VAR_9].temporal_ref)
                            break;
                    }
                    if (VAR_9 == VAR_6->edit_units_count)
                        FUNC_1(VAR_5, VAR_1, "missing frames\n");
                    VAR_18 = VAR_9 - VAR_11 - VAR_19;
                }
            }
            FUNC_3(VAR_7, VAR_18);

            if ((VAR_6->index_entries[VAR_8].flags & 0x30) == 0x30) {
                VAR_17->b_picture_count = FUNC_0(VAR_17->b_picture_count, VAR_8 - VAR_12);
                FUNC_3(VAR_7, VAR_6->last_key_index - VAR_8);
            } else {
                FUNC_3(VAR_7, VAR_11 - VAR_8);
                if ((VAR_6->index_entries[VAR_8].flags & 0x20) == 0x20)
                    VAR_6->last_key_index = VAR_11;
                VAR_12 = VAR_8;
            }

            if (!(VAR_6->index_entries[VAR_8].flags & 0x33) &&
                VAR_6->index_entries[VAR_8].flags & 0x40 && !VAR_18)
                VAR_6->index_entries[VAR_8].flags |= 0x80;
            FUNC_3(VAR_7, VAR_6->index_entries[VAR_8].flags);

            FUNC_5(VAR_7, VAR_6->index_entries[VAR_8].offset);
            if (VAR_5->nb_streams > 1)
                FUNC_4(VAR_7, VAR_6->index_entries[VAR_8].slice_offset);
            else
                FUNC_4(VAR_7, 0);
        }

        VAR_6->last_key_index = VAR_11 - VAR_6->edit_units_count;
        VAR_6->last_indexed_edit_unit += VAR_6->edit_units_count;
        VAR_6->edit_units_count = 0;
    }

    FUNC_9(VAR_7, VAR_14);
}
