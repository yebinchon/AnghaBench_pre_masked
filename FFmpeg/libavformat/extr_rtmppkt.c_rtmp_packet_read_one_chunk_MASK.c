
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef enum RTMPPacketType { ____Placeholder_RTMPPacketType } RTMPPacketType ;
typedef int URLContext ;
struct TYPE_7__ {int size; int type; int extra; int ts_field; int timestamp; int read; int offset; int* data; int channel_id; } ;
typedef TYPE_1__ RTMPPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,int ,char*,int,int) ;
 int FUNC_7 (TYPE_1__**,int*,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *,int*,int) ;

__attribute__((used)) static int FUNC_11(URLContext *VAR_7, RTMPPacket *VAR_8,
                                      int VAR_9, RTMPPacket **VAR_10,
                                      int *VAR_11, uint8_t VAR_12)
{

    uint8_t VAR_13[16];
    int VAR_14, VAR_15, VAR_16;
    uint32_t VAR_17;
    uint32_t VAR_18 = 0;
    enum RTMPPacketType VAR_19;
    int VAR_20 = 0;
    int VAR_21, VAR_22;
    RTMPPacket *VAR_23;

    VAR_20++;
    VAR_14 = VAR_12 & 0x3F;

    if (VAR_14 < 2) {
        VAR_13[1] = 0;
        if (FUNC_10(VAR_7, VAR_13, VAR_14 + 1) != VAR_14 + 1)
            return FUNC_0(VAR_3);
        VAR_20 += VAR_14 + 1;
        VAR_14 = FUNC_3(VAR_13) + 64;
    }
    if ((VAR_21 = FUNC_7(VAR_10, VAR_11,
                                         VAR_14)) < 0)
        return VAR_21;
    VAR_23 = *VAR_10;
    VAR_16 = VAR_23[VAR_14].size;
    VAR_19 = VAR_23[VAR_14].type;
    VAR_18 = VAR_23[VAR_14].extra;

    VAR_12 >>= 6;
    if (VAR_12 == VAR_5) {
        VAR_17 = VAR_23[VAR_14].ts_field;
    } else {
        if (FUNC_10(VAR_7, VAR_13, 3) != 3)
            return FUNC_0(VAR_3);
        VAR_20 += 3;
        VAR_17 = FUNC_1(VAR_13);
        if (VAR_12 != VAR_4) {
            if (FUNC_10(VAR_7, VAR_13, 3) != 3)
                return FUNC_0(VAR_3);
            VAR_20 += 3;
            VAR_16 = FUNC_1(VAR_13);
            if (FUNC_10(VAR_7, VAR_13, 1) != 1)
                return FUNC_0(VAR_3);
            VAR_20++;
            VAR_19 = VAR_13[0];
            if (VAR_12 == VAR_6) {
                if (FUNC_10(VAR_7, VAR_13, 4) != 4)
                    return FUNC_0(VAR_3);
                VAR_20 += 4;
                VAR_18 = FUNC_4(VAR_13);
            }
        }
    }
    if (VAR_17 == 0xFFFFFF) {
        if (FUNC_10(VAR_7, VAR_13, 4) != 4)
            return FUNC_0(VAR_3);
        VAR_15 = FUNC_2(VAR_13);
    } else {
        VAR_15 = VAR_17;
    }
    if (VAR_12 != VAR_6)
        VAR_15 += VAR_23[VAR_14].timestamp;

    if (VAR_23[VAR_14].read && VAR_16 != VAR_23[VAR_14].size) {
        FUNC_6(VAR_7, VAR_1, "RTMP packet size mismatch %d != %d\n",
                                VAR_16, VAR_23[VAR_14].size);
        FUNC_9(&VAR_23[VAR_14]);
        VAR_23[VAR_14].read = 0;
        return VAR_0;
    }

    if (!VAR_23[VAR_14].read) {
        if ((VAR_21 = FUNC_8(VAR_8, VAR_14, VAR_19, VAR_15,
                                         VAR_16)) < 0)
            return VAR_21;
        VAR_8->read = VAR_20;
        VAR_8->offset = 0;
        VAR_23[VAR_14].ts_field = VAR_17;
        VAR_23[VAR_14].timestamp = VAR_15;
    } else {

        RTMPPacket *VAR_24 = &VAR_23[VAR_14];
        VAR_8->data = VAR_24->data;
        VAR_8->size = VAR_24->size;
        VAR_8->channel_id = VAR_24->channel_id;
        VAR_8->type = VAR_24->type;
        VAR_8->ts_field = VAR_24->ts_field;
        VAR_8->extra = VAR_24->extra;
        VAR_8->offset = VAR_24->offset;
        VAR_8->read = VAR_24->read + VAR_20;
        VAR_8->timestamp = VAR_24->timestamp;
        VAR_24->data = ((void*)0);
    }
    VAR_8->extra = VAR_18;

    VAR_23[VAR_14].channel_id = VAR_14;
    VAR_23[VAR_14].type = VAR_19;
    VAR_23[VAR_14].size = VAR_16;
    VAR_23[VAR_14].extra = VAR_18;
    VAR_16 = VAR_16 - VAR_8->offset;

    VAR_22 = FUNC_5(VAR_16, VAR_9);
    if (FUNC_10(VAR_7, VAR_8->data + VAR_8->offset, VAR_22) != VAR_22) {
        FUNC_9(VAR_8);
        return FUNC_0(VAR_3);
    }
    VAR_16 -= VAR_22;
    VAR_8->read += VAR_22;
    VAR_8->offset += VAR_22;

    if (VAR_16 > 0) {
       RTMPPacket *VAR_25 = &VAR_23[VAR_14];
       VAR_25->data = VAR_8->data;
       VAR_25->read = VAR_8->read;
       VAR_25->offset = VAR_8->offset;
       VAR_8->data = ((void*)0);
       return FUNC_0(VAR_2);
    }

    VAR_23[VAR_14].read = 0;
    return VAR_8->read;
}
