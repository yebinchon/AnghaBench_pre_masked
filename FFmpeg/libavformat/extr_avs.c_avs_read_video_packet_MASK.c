
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int pb; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int* data; int size; int flags; int stream_index; } ;
struct TYPE_10__ {TYPE_1__* st_video; } ;
struct TYPE_9__ {int index; } ;
typedef TYPE_2__ AvsFormat ;
typedef int AvsBlockType ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int*,int *,int) ;

__attribute__((used)) static int
FUNC_5(AVFormatContext * VAR_2, AVPacket * VAR_3,
                      AvsBlockType VAR_4, int VAR_5, int VAR_6,
                      uint8_t * VAR_7, int VAR_8)
{
    AvsFormat *VAR_9 = VAR_2->priv_data;
    int VAR_10;

    VAR_10 = FUNC_1(VAR_3, VAR_6 + VAR_8);
    if (VAR_10 < 0)
        return VAR_10;

    if (VAR_8) {
        VAR_3->data[0] = 0x00;
        VAR_3->data[1] = 0x03;
        VAR_3->data[2] = VAR_8 & 0xFF;
        VAR_3->data[3] = (VAR_8 >> 8) & 0xFF;
        FUNC_4(VAR_3->data + 4, VAR_7, VAR_8 - 4);
    }

    VAR_3->data[VAR_8 + 0] = VAR_5;
    VAR_3->data[VAR_8 + 1] = VAR_4;
    VAR_3->data[VAR_8 + 2] = VAR_6 & 0xFF;
    VAR_3->data[VAR_8 + 3] = (VAR_6 >> 8) & 0xFF;
    VAR_10 = FUNC_3(VAR_2->pb, VAR_3->data + VAR_8 + 4, VAR_6 - 4) + 4;
    if (VAR_10 < VAR_6) {
        FUNC_2(VAR_3);
        return FUNC_0(VAR_1);
    }

    VAR_3->size = VAR_10 + VAR_8;
    VAR_3->stream_index = VAR_9->st_video->index;
    if (VAR_5 == 0)
        VAR_3->flags |= VAR_0;

    return 0;
}
