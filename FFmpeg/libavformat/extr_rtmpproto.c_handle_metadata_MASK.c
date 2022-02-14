
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int flv_size; int flv_off; int const* flv_data; } ;
struct TYPE_7__ {int size; int timestamp; int const* data; } ;
typedef TYPE_1__ RTMPPacket ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (int const**,int) ;
 int FUNC_2 (int const**) ;
 int FUNC_3 (int const**) ;
 int FUNC_4 (int const**,int) ;
 int FUNC_5 (int const**,int) ;
 int FUNC_6 (int const**,int) ;
 int FUNC_7 (int const*,int const*,int) ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(RTMPContext *VAR_2, RTMPPacket *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    const uint8_t *VAR_7;
    uint8_t *VAR_8;
    uint32_t VAR_9;
    uint32_t VAR_10, VAR_11, VAR_12 = 0;

    VAR_5 = FUNC_8(VAR_2, VAR_3->size);

    if ((VAR_4 = FUNC_1(&VAR_2->flv_data, VAR_2->flv_size)) < 0) {
        VAR_2->flv_size = VAR_2->flv_off = 0;
        return VAR_4;
    }

    VAR_7 = VAR_3->data;
    VAR_8 = VAR_2->flv_data + VAR_5;


    VAR_10 = VAR_3->timestamp;

    while (VAR_7 - VAR_3->data < VAR_3->size - VAR_1) {
        VAR_6 = FUNC_3(&VAR_7);
        VAR_9 = FUNC_2(&VAR_7);
        VAR_11 = FUNC_2(&VAR_7);
        VAR_11 |= FUNC_3(&VAR_7) << 24;
        if (!VAR_12)
            VAR_12 = VAR_11;
        VAR_10 += VAR_11 - VAR_12;
        VAR_12 = VAR_11;
        if (VAR_9 + 3 + 4 > VAR_3->data + VAR_3->size - VAR_7)
            break;
        FUNC_6(&VAR_8, VAR_6);
        FUNC_4(&VAR_8, VAR_9);
        FUNC_4(&VAR_8, VAR_10);
        FUNC_6(&VAR_8, VAR_10 >> 24);
        FUNC_7(VAR_8, VAR_7, VAR_9 + 3 + 4);
        VAR_8 += VAR_9 + 3;
        FUNC_5(&VAR_8, VAR_9 + VAR_1);
        VAR_7 += VAR_9 + 3 + 4;
    }
    if (VAR_8 != VAR_2->flv_data + VAR_2->flv_size) {
        FUNC_0(VAR_2, VAR_0, "Incomplete flv packets in "
                                     "RTMP_PT_METADATA packet\n");
        VAR_2->flv_size = VAR_8 - VAR_2->flv_data;
    }

    return 0;
}
