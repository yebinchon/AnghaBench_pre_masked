
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int channel_id; int timestamp; scalar_t__ ts_field; scalar_t__ extra; int type; int data; } ;
typedef int RTMPPacketType ;
typedef TYPE_1__ RTMPPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

int FUNC_2(RTMPPacket *VAR_1, int VAR_2, RTMPPacketType VAR_3,
                          int VAR_4, int VAR_5)
{
    if (VAR_5) {
        VAR_1->data = FUNC_1(((void*)0), VAR_5);
        if (!VAR_1->data)
            return FUNC_0(VAR_0);
    }
    VAR_1->size = VAR_5;
    VAR_1->channel_id = VAR_2;
    VAR_1->type = VAR_3;
    VAR_1->timestamp = VAR_4;
    VAR_1->extra = 0;
    VAR_1->ts_field = 0;

    return 0;
}
