
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_38__ ;
typedef struct TYPE_41__ TYPE_2__ ;
typedef struct TYPE_40__ TYPE_1__ ;


struct TYPE_47__ {int * oformat; TYPE_5__** streams; int * pb; TYPE_4__* priv_data; } ;
struct TYPE_46__ {size_t stream_index; int size; int data; } ;
struct TYPE_45__ {int index; TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_44__ {int edit_units_count; int header_written; int body_offset; TYPE_38__* index_entries; scalar_t__ edit_unit_byte_count; scalar_t__ cbr_index; } ;
struct TYPE_43__ {int flags; int temporal_ref; int member_0; } ;
struct TYPE_42__ {int offset; int flags; int slice_offset; int temporal_ref; } ;
struct TYPE_41__ {int frame_size; int track_essence_element_key; } ;
struct TYPE_40__ {scalar_t__ codec_id; scalar_t__ codec_type; } ;
typedef TYPE_2__ MXFStreamContext ;
typedef TYPE_3__ MXFIndexEntry ;
typedef TYPE_4__ MXFContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_7__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_7__*,int ,char*,...) ;
 int FUNC_1 (TYPE_38__**,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_5__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_7__*,TYPE_5__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_7__*,TYPE_5__*,TYPE_6__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_7__*,TYPE_5__*,TYPE_6__*,TYPE_3__*) ;
 int FUNC_11 (TYPE_7__*,TYPE_5__*,TYPE_6__*) ;
 int FUNC_12 (TYPE_7__*,TYPE_5__*,TYPE_6__*) ;
 int FUNC_13 (TYPE_7__*) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_7__*,TYPE_6__*,TYPE_3__*) ;
 int FUNC_16 (TYPE_7__*,int,int,int ,int) ;
 int FUNC_17 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_18(AVFormatContext *VAR_15, AVPacket *VAR_16)
{
    MXFContext *VAR_17 = VAR_15->priv_data;
    AVIOContext *VAR_18 = VAR_15->pb;
    AVStream *VAR_19 = VAR_15->streams[VAR_16->stream_index];
    MXFStreamContext *VAR_20 = VAR_19->priv_data;
    MXFIndexEntry VAR_21 = {0};
    int VAR_22;

    if (!VAR_17->cbr_index && !VAR_17->edit_unit_byte_count && !(VAR_17->edit_units_count % VAR_9)) {
        if ((VAR_22 = FUNC_1(&VAR_17->index_entries, VAR_17->edit_units_count
                                     + VAR_9, sizeof(*VAR_17->index_entries))) < 0) {
            VAR_17->edit_units_count = 0;
            FUNC_0(VAR_15, VAR_8, "could not allocate index entries\n");
            return VAR_22;
        }
    }

    if (VAR_19->codecpar->codec_id == VAR_6) {
        if (!FUNC_10(VAR_15, VAR_19, VAR_16, &VAR_21)) {
            FUNC_0(VAR_15, VAR_8, "could not get mpeg2 profile and level\n");
            return -1;
        }
    } else if (VAR_19->codecpar->codec_id == VAR_3) {
        if (!FUNC_7(VAR_15, VAR_19, VAR_16)) {
            FUNC_0(VAR_15, VAR_8, "could not get dnxhd profile\n");
            return -1;
        }
    } else if (VAR_19->codecpar->codec_id == VAR_7) {
        if (!FUNC_11(VAR_15, VAR_19, VAR_16)) {
            FUNC_0(VAR_15, VAR_8, "could not get prores profile\n");
            return -1;
        }
    } else if (VAR_19->codecpar->codec_id == VAR_4) {
        if (!FUNC_8(VAR_15, VAR_19, VAR_16)) {
            FUNC_0(VAR_15, VAR_8, "could not get dv profile\n");
            return -1;
        }
    } else if (VAR_19->codecpar->codec_id == VAR_5) {
        if (!FUNC_9(VAR_15, VAR_19, VAR_16, &VAR_21)) {
            FUNC_0(VAR_15, VAR_8, "could not get h264 profile\n");
            return -1;
        }
    }

    if (VAR_17->cbr_index) {
        if (VAR_16->size != VAR_20->frame_size && VAR_19->codecpar->codec_type == VAR_2) {
            FUNC_0(VAR_15, VAR_8, "track %d: frame size does not match index unit size, %d != %d\n",
                   VAR_19->index, VAR_16->size, VAR_20->frame_size);
            return -1;
        }
        if (!VAR_17->header_written)
            FUNC_6(VAR_15);
    }

    if (VAR_15->oformat == &VAR_13)
        return FUNC_15(VAR_15, VAR_16, &VAR_21);

    if (!VAR_17->header_written) {
        if (VAR_17->edit_unit_byte_count) {
            if ((VAR_22 = FUNC_16(VAR_15, 1, 2, VAR_14, 1)) < 0)
                return VAR_22;
            FUNC_14(VAR_15);
            FUNC_13(VAR_15);
        } else {
            if ((VAR_22 = FUNC_16(VAR_15, 0, 0, VAR_14, 1)) < 0)
                return VAR_22;
        }
        VAR_17->header_written = 1;
    }

    if (VAR_19->index == 0) {
        if (!VAR_17->edit_unit_byte_count &&
            (!VAR_17->edit_units_count || VAR_17->edit_units_count > VAR_9) &&
            !(VAR_21.flags & 0x33)) {
            FUNC_14(VAR_15);
            if ((VAR_22 = FUNC_16(VAR_15, 1, 2, VAR_11, 0)) < 0)
                return VAR_22;
            FUNC_14(VAR_15);
            FUNC_13(VAR_15);
        }

        FUNC_14(VAR_15);
        FUNC_17(VAR_15);

        if (!VAR_17->edit_unit_byte_count) {
            VAR_17->index_entries[VAR_17->edit_units_count].offset = VAR_17->body_offset;
            VAR_17->index_entries[VAR_17->edit_units_count].flags = VAR_21.flags;
            VAR_17->index_entries[VAR_17->edit_units_count].temporal_ref = VAR_21.temporal_ref;
            VAR_17->body_offset += VAR_10;
        }
        VAR_17->edit_units_count++;
    } else if (!VAR_17->edit_unit_byte_count && VAR_19->index == 1) {
        if (!VAR_17->edit_units_count) {
            FUNC_0(VAR_15, VAR_8, "No packets in first stream\n");
            return VAR_0;
        }
        VAR_17->index_entries[VAR_17->edit_units_count-1].slice_offset =
            VAR_17->body_offset - VAR_17->index_entries[VAR_17->edit_units_count-1].offset;
    }

    FUNC_14(VAR_15);
    FUNC_3(VAR_18, VAR_20->track_essence_element_key, 16);
    if (VAR_15->oformat == &VAR_12 &&
        VAR_19->codecpar->codec_type == VAR_1) {
        FUNC_12(VAR_15, VAR_19, VAR_16);
    } else {
        FUNC_4(VAR_18, VAR_16->size);
        FUNC_3(VAR_18, VAR_16->data, VAR_16->size);
        VAR_17->body_offset += 16+4+VAR_16->size + FUNC_5(16+4+VAR_16->size);
    }

    FUNC_2(VAR_18);

    return 0;
}
