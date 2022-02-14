
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int int16_t ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {int sequence_dirty; int sequence_ok; int got_keyframe; int is_keyframe; int first_part_size; int prev_pictureid; scalar_t__ prev_seq; int broken_frame; scalar_t__ data; int timestamp; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int const*,int) ;
 int FUNC_6 (TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int *,TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_5, PayloadContext *VAR_6,
                             AVStream *VAR_7, AVPacket *VAR_8, uint32_t *VAR_9,
                             const uint8_t *VAR_10, int VAR_11, uint16_t VAR_12,
                             int VAR_13)
{
    int VAR_14, VAR_15;
    int VAR_16, VAR_17;
    int VAR_18 = 0, VAR_19 = 0, VAR_20 = 0,
        VAR_21 = 0;
    int VAR_22 = -1, VAR_23 = 0;
    int VAR_24 = 0;
    uint32_t VAR_25 = 0;

    if (!VAR_10) {
        if (VAR_6->data) {
            int VAR_26 = FUNC_6(VAR_8, &VAR_6->data, VAR_7->index);
            if (VAR_26 < 0)
                return VAR_26;
            *VAR_9 = VAR_6->timestamp;
            if (VAR_6->sequence_dirty)
                VAR_8->flags |= VAR_1;
            return 0;
        }
        return FUNC_0(VAR_3);
    }

    if (VAR_11 < 1)
        return VAR_0;

    VAR_16 = VAR_10[0] & 0x80;
    VAR_14 = VAR_10[0] & 0x10;
    VAR_17 = VAR_10[0] & 0x0f;
    VAR_15 = VAR_13 & VAR_4;
    VAR_10++;
    VAR_11--;
    if (VAR_16) {
        if (VAR_11 < 1)
            return VAR_0;
        VAR_18 = VAR_10[0] & 0x80;
        VAR_19 = VAR_10[0] & 0x40;
        VAR_20 = VAR_10[0] & 0x20;
        VAR_21 = VAR_10[0] & 0x10;
        VAR_10++;
        VAR_11--;
    }
    if (VAR_18) {
        if (VAR_11 < 1)
            return VAR_0;
        if (VAR_10[0] & 0x80) {
            if (VAR_11 < 2)
                return VAR_0;
            VAR_22 = FUNC_1(VAR_10) & 0x7fff;
            VAR_23 = 0x7fff;
            VAR_10 += 2;
            VAR_11 -= 2;
        } else {
            VAR_22 = VAR_10[0] & 0x7f;
            VAR_23 = 0x7f;
            VAR_10++;
            VAR_11--;
        }
    }
    if (VAR_19) {

        VAR_10++;
        VAR_11--;
    }
    if (VAR_20 || VAR_21) {

        VAR_10++;
        VAR_11--;
    }
    if (VAR_11 < 1)
        return VAR_0;

    if (VAR_14 && VAR_17 == 0 && VAR_11 >= 3) {
        int VAR_27;
        int VAR_28 = VAR_10[0] & 0x01;
        if (!VAR_28) {
            FUNC_7(&VAR_6->data);

            VAR_6->sequence_ok = 1;
            VAR_6->sequence_dirty = 0;
            VAR_6->got_keyframe = 1;
        } else {
            int VAR_29 = VAR_6->data && !VAR_6->is_keyframe &&
                               FUNC_4(VAR_6->data) >= VAR_6->first_part_size;
            if (!VAR_6->sequence_ok)
                return FUNC_0(VAR_3);
            if (!VAR_6->got_keyframe)
                return FUNC_8(VAR_5, VAR_6, "Keyframe missing\n");
            if (VAR_22 >= 0) {
                if (VAR_22 != ((VAR_6->prev_pictureid + 1) & VAR_23)) {
                    return FUNC_8(VAR_5, VAR_6,
                                               "Missed a picture, sequence broken\n");
                } else {
                    if (VAR_6->data && !VAR_29)
                        return FUNC_8(VAR_5, VAR_6,
                                                   "Missed a picture, sequence broken\n");
                }
            } else {
                uint16_t VAR_30 = VAR_6->prev_seq + 1;
                int16_t VAR_31 = VAR_12 - VAR_30;
                if (VAR_6->data) {







                    if ((VAR_31 == 0 || VAR_31 == 1) && VAR_29) {

                    } else {
                        return FUNC_8(VAR_5, VAR_6,
                                                   "Missed too much, sequence broken\n");
                    }
                } else {
                    if (VAR_31 != 0)
                        return FUNC_8(VAR_5, VAR_6,
                                                   "Missed unknown data, sequence broken\n");
                }
            }
            if (VAR_6->data) {
                VAR_6->sequence_dirty = 1;
                if (FUNC_4(VAR_6->data) >= VAR_6->first_part_size) {
                    int VAR_32 = FUNC_6(VAR_8, &VAR_6->data, VAR_7->index);
                    if (VAR_32 < 0)
                        return VAR_32;
                    VAR_8->flags |= VAR_1;
                    VAR_24 = 1;
                    VAR_25 = VAR_6->timestamp;
                } else {

                    FUNC_7(&VAR_6->data);
                }
            }
        }
        VAR_6->first_part_size = (FUNC_2(&VAR_10[1]) << 3 | VAR_10[0] >> 5) + 3;
        if ((VAR_27 = FUNC_3(&VAR_6->data)) < 0)
            return VAR_27;
        VAR_6->timestamp = *VAR_9;
        VAR_6->broken_frame = 0;
        VAR_6->prev_pictureid = VAR_22;
        VAR_6->is_keyframe = !VAR_28;
    } else {
        uint16_t VAR_33 = VAR_6->prev_seq + 1;

        if (!VAR_6->sequence_ok)
            return FUNC_0(VAR_3);

        if (VAR_6->timestamp != *VAR_9) {

            return FUNC_8(VAR_5, VAR_6,
                                       "Received no start marker; dropping frame\n");
        }

        if (VAR_12 != VAR_33) {
            if (VAR_6->is_keyframe) {
                return FUNC_8(VAR_5, VAR_6,
                                           "Missed part of a keyframe, sequence broken\n");
            } else if (VAR_6->data && FUNC_4(VAR_6->data) >= VAR_6->first_part_size) {
                VAR_6->broken_frame = 1;
                VAR_6->sequence_dirty = 1;
            } else {
                return FUNC_8(VAR_5, VAR_6,
                                           "Missed part of the first partition, sequence broken\n");
            }
        }
    }

    if (!VAR_6->data)
        return FUNC_8(VAR_5, VAR_6, "Received no start marker\n");

    VAR_6->prev_seq = VAR_12;
    if (!VAR_6->broken_frame)
        FUNC_5(VAR_6->data, VAR_10, VAR_11);

    if (VAR_24) {
        *VAR_9 = VAR_25;
        return VAR_15 ? 1 : 0;
    }

    if (VAR_15) {
        int VAR_34;
        VAR_34 = FUNC_6(VAR_8, &VAR_6->data, VAR_7->index);
        if (VAR_34 < 0)
            return VAR_34;
        if (VAR_6->sequence_dirty)
            VAR_8->flags |= VAR_1;
        if (VAR_6->is_keyframe)
            VAR_8->flags |= VAR_2;
        return 0;
    }

    return FUNC_0(VAR_3);
}
