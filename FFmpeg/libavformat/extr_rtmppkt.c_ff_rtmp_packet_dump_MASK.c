
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ type; int size; int * data; int extra; int timestamp; int channel_id; } ;
typedef TYPE_1__ RTMPPacket ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (void*,int *,int *) ;
 int FUNC_2 (void*,int ,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(void *VAR_8, RTMPPacket *VAR_9)
{
    FUNC_2(VAR_8, VAR_0, "RTMP packet type '%s'(%d) for channel %d, timestamp %d, extra field %d size %d\n",
           FUNC_4(VAR_9->type), VAR_9->type, VAR_9->channel_id, VAR_9->timestamp, VAR_9->extra, VAR_9->size);
    if (VAR_9->type == VAR_2 || VAR_9->type == VAR_4) {
        uint8_t *VAR_10 = VAR_9->data, *VAR_11 = VAR_9->data + VAR_9->size;
        while (VAR_10 < VAR_11) {
            int VAR_12;
            FUNC_1(VAR_8, VAR_10, VAR_11);
            VAR_12 = FUNC_3(VAR_10, VAR_11);
            if (VAR_12 < 0)
                break;
            VAR_10 += VAR_12;
        }
    } else if (VAR_9->type == VAR_7) {
        FUNC_2(VAR_8, VAR_0, "Window acknowledgement size = %d\n", FUNC_0(VAR_9->data));
    } else if (VAR_9->type == VAR_5) {
        FUNC_2(VAR_8, VAR_0, "Set Peer BW = %d\n", FUNC_0(VAR_9->data));
    } else if (VAR_9->type != VAR_1 && VAR_9->type != VAR_6 && VAR_9->type != VAR_3) {
        int VAR_13;
        for (VAR_13 = 0; VAR_13 < VAR_9->size; VAR_13++)
            FUNC_2(VAR_8, VAR_0, " %02X", VAR_9->data[VAR_13]);
        FUNC_2(VAR_8, VAR_0, "\n");
    }
}
