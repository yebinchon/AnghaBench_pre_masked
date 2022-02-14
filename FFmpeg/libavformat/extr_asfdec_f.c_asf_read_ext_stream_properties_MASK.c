
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
typedef int * ff_asf_guid ;
struct TYPE_11__ {int* stream_bitrates; TYPE_1__* streams; } ;
struct TYPE_10__ {int size; int type; } ;
struct TYPE_9__ {int * pb; TYPE_4__* priv_data; } ;
struct TYPE_8__ {unsigned int stream_language_index; scalar_t__ payload_ext_ct; TYPE_3__* payload; } ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ASFPayload ;
typedef TYPE_4__ ASFContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ,int) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int **) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_1, int64_t VAR_2)
{
    ASFContext *VAR_3 = VAR_1->priv_data;
    AVIOContext *VAR_4 = VAR_1->pb;
    ff_asf_guid VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    uint32_t VAR_10, VAR_11;
    unsigned int VAR_12;

    FUNC_4(VAR_4);
    FUNC_4(VAR_4);
    VAR_10 = FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    FUNC_3(VAR_4);
    VAR_11 = FUNC_2(VAR_4);

    VAR_12 = FUNC_2(VAR_4);
    if (VAR_11 < 128)
        VAR_3->streams[VAR_11].stream_language_index = VAR_12;

    FUNC_4(VAR_4);
    VAR_8 = FUNC_2(VAR_4);
    VAR_7 = FUNC_2(VAR_4);

    if (VAR_11 < 128) {
        VAR_3->stream_bitrates[VAR_11] = VAR_10;
        VAR_3->streams[VAR_11].payload_ext_ct = 0;
    }

    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
        FUNC_2(VAR_4);
        VAR_6 = FUNC_2(VAR_4);
        FUNC_5(VAR_4, VAR_6);
    }

    for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
        int VAR_13;
        FUNC_6(VAR_4, &VAR_5);
        VAR_13 = FUNC_2(VAR_4);
        VAR_6 = FUNC_3(VAR_4);
        FUNC_5(VAR_4, VAR_6);
        if (VAR_11 < 128 && VAR_9 < FUNC_0(VAR_3->streams[VAR_11].payload)) {
            ASFPayload *VAR_14 = &VAR_3->streams[VAR_11].payload[VAR_9];
            VAR_14->type = VAR_5[0];
            VAR_14->size = VAR_13;
            FUNC_1(VAR_1, VAR_0, "Payload extension %x %d\n", VAR_5[0], VAR_14->size );
            VAR_3->streams[VAR_11].payload_ext_ct ++;
        }
    }

    return 0;
}
