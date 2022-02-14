
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int URLContext ;
struct TYPE_5__ {size_t channel_id; scalar_t__ extra; scalar_t__ timestamp; int ts_field; int type; int size; int* data; } ;
typedef TYPE_1__ RTMPPacket ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int**,int) ;
 int FUNC_3 (int**,int) ;
 int FUNC_4 (int**,int) ;
 int FUNC_5 (int**,int) ;
 int FUNC_6 (int**,scalar_t__) ;
 int FUNC_7 (TYPE_1__**,int*,size_t) ;
 int FUNC_8 (int *,int*,int) ;

int FUNC_9(URLContext *VAR_4, RTMPPacket *VAR_5,
                         int VAR_6, RTMPPacket **VAR_7,
                         int *VAR_8)
{
    uint8_t VAR_9[16], *VAR_10 = VAR_9;
    int VAR_11 = VAR_3;
    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14;
    RTMPPacket *VAR_15;
    int VAR_16;
    uint32_t VAR_17;

    if ((VAR_14 = FUNC_7(VAR_7, VAR_8,
                                         VAR_5->channel_id)) < 0)
        return VAR_14;
    VAR_15 = *VAR_7;


    VAR_16 = VAR_15[VAR_5->channel_id].channel_id &&
        VAR_5->extra == VAR_15[VAR_5->channel_id].extra &&
        VAR_5->timestamp >= VAR_15[VAR_5->channel_id].timestamp;

    VAR_17 = VAR_5->timestamp;
    if (VAR_16) {
        VAR_17 -= VAR_15[VAR_5->channel_id].timestamp;
    }
    if (VAR_17 >= 0xFFFFFF) {
        VAR_5->ts_field = 0xFFFFFF;
    } else {
        VAR_5->ts_field = VAR_17;
    }

    if (VAR_16) {
        if (VAR_5->type == VAR_15[VAR_5->channel_id].type &&
            VAR_5->size == VAR_15[VAR_5->channel_id].size) {
            VAR_11 = VAR_1;
            if (VAR_5->ts_field == VAR_15[VAR_5->channel_id].ts_field)
                VAR_11 = VAR_2;
        } else {
            VAR_11 = VAR_0;
        }
    }

    if (VAR_5->channel_id < 64) {
        FUNC_4(&VAR_10, VAR_5->channel_id | (VAR_11 << 6));
    } else if (VAR_5->channel_id < 64 + 256) {
        FUNC_4(&VAR_10, 0 | (VAR_11 << 6));
        FUNC_4(&VAR_10, VAR_5->channel_id - 64);
    } else {
        FUNC_4(&VAR_10, 1 | (VAR_11 << 6));
        FUNC_5(&VAR_10, VAR_5->channel_id - 64);
    }
    if (VAR_11 != VAR_2) {
        FUNC_2(&VAR_10, VAR_5->ts_field);
        if (VAR_11 != VAR_1) {
            FUNC_2(&VAR_10, VAR_5->size);
            FUNC_4(&VAR_10, VAR_5->type);
            if (VAR_11 == VAR_3)
                FUNC_6(&VAR_10, VAR_5->extra);
        }
    }
    if (VAR_5->ts_field == 0xFFFFFF)
        FUNC_3(&VAR_10, VAR_17);

    VAR_15[VAR_5->channel_id].channel_id = VAR_5->channel_id;
    VAR_15[VAR_5->channel_id].type = VAR_5->type;
    VAR_15[VAR_5->channel_id].size = VAR_5->size;
    VAR_15[VAR_5->channel_id].timestamp = VAR_5->timestamp;
    VAR_15[VAR_5->channel_id].ts_field = VAR_5->ts_field;
    VAR_15[VAR_5->channel_id].extra = VAR_5->extra;

    if ((VAR_14 = FUNC_8(VAR_4, VAR_9, VAR_10 - VAR_9)) < 0)
        return VAR_14;
    VAR_13 = VAR_10 - VAR_9 + VAR_5->size;
    while (VAR_12 < VAR_5->size) {
        int VAR_18 = FUNC_1(VAR_6, VAR_5->size - VAR_12);
        if ((VAR_14 = FUNC_8(VAR_4, VAR_5->data + VAR_12, VAR_18)) < 0)
            return VAR_14;
        VAR_12 += VAR_18;
        if (VAR_12 < VAR_5->size) {
            uint8_t VAR_19 = 0xC0 | VAR_5->channel_id;
            if ((VAR_14 = FUNC_8(VAR_4, &VAR_19, 1)) < 0)
                return VAR_14;
            VAR_13++;
            if (VAR_5->ts_field == 0xFFFFFF) {
                uint8_t VAR_20[4];
                FUNC_0(VAR_20, VAR_17);
                if ((VAR_14 = FUNC_8(VAR_4, VAR_20, 4)) < 0)
                    return VAR_14;
                VAR_13 += 4;
            }
        }
    }
    return VAR_13;
}
