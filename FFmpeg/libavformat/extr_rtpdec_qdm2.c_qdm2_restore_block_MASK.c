
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {int size; scalar_t__* data; int stream_index; } ;
struct TYPE_9__ {int index; } ;
struct TYPE_8__ {scalar_t__ cache; int* len; size_t block_size; int block_type; int * buf; } ;
typedef TYPE_1__ PayloadContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVPacket ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,size_t) ;
 int FUNC_4 (scalar_t__*,int ,int) ;
 int FUNC_5 (scalar_t__*,int ,int) ;

__attribute__((used)) static int FUNC_6(PayloadContext *VAR_0, AVStream *VAR_1, AVPacket *VAR_2)
{
    int VAR_3, VAR_4, VAR_5, VAR_6;
    uint8_t *VAR_7, *VAR_8 = ((void*)0);


    FUNC_2(VAR_0->cache > 0);
    for (VAR_4 = 0; VAR_4 < 0x80; VAR_4++)
        if (VAR_0->len[VAR_4] > 0)
            break;
    FUNC_2(VAR_4 < 0x80);

    if ((VAR_5 = FUNC_3(VAR_2, VAR_0->block_size)) < 0)
        return VAR_5;
    FUNC_5(VAR_2->data, 0, VAR_2->size);
    VAR_2->stream_index = VAR_1->index;
    VAR_7 = VAR_2->data;


    if (VAR_0->len[VAR_4] > 0xff) {
        *VAR_7++ = VAR_0->block_type | 0x80;
        FUNC_0(VAR_7, VAR_0->len[VAR_4]);
        VAR_7 += 2;
    } else {
        *VAR_7++ = VAR_0->block_type;
        *VAR_7++ = VAR_0->len[VAR_4];
    }
    if ((VAR_6 = (VAR_0->block_type == 2 || VAR_0->block_type == 4))) {
        VAR_8 = VAR_7;
        VAR_7 += 2;
    }


    VAR_3 = FUNC_1(VAR_0->len[VAR_4], VAR_2->size - (VAR_7 - VAR_2->data));
    FUNC_4(VAR_7, VAR_0->buf[VAR_4], VAR_3);
    VAR_0->len[VAR_4] = 0;


    if (VAR_6) {
        unsigned int VAR_9 = 0;
        uint8_t *VAR_10;

        for (VAR_10 = VAR_2->data; VAR_10 < &VAR_2->data[VAR_0->block_size]; VAR_10++)
            VAR_9 += *VAR_10;
        FUNC_0(VAR_8, (uint16_t) VAR_9);
    }

    return 0;
}
