
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int delta_size; int hscale; } ;
typedef TYPE_1__ TrueMotion2RTContext ;
struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int* data; int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int) ;
 int FUNC_2 (TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_3, const AVPacket *VAR_4)
{
    TrueMotion2RTContext *VAR_5 = VAR_3->priv_data;
    int VAR_6;
    uint8_t VAR_7[128] = { 0 };
    const uint8_t *VAR_8 = VAR_4->data;
    int VAR_9 = VAR_4->size;
    int VAR_10, VAR_11;
    int VAR_12, VAR_13;

    if (VAR_9 < 1) {
        FUNC_1(VAR_3, VAR_2, "input packet too small (%d)\n", VAR_9);
        return VAR_0;
    }

    VAR_6 = ((VAR_8[0] >> 5) | (VAR_8[0] << 3)) & 0x7f;
    if (VAR_6 < 10) {
        FUNC_1(VAR_3, VAR_2, "invalid header size (%d)\n", VAR_6);
        return VAR_0;
    }

    if (VAR_6 + 1 > VAR_9) {
        FUNC_1(VAR_3, VAR_2, "input packet too small (%d)\n", VAR_9);
        return VAR_0;
    }


    for (VAR_13 = 1; VAR_13 < VAR_6; VAR_13++)
        VAR_7[VAR_13 - 1] = VAR_8[VAR_13] ^ VAR_8[VAR_13 + 1];

    VAR_5->delta_size = VAR_7[1];
    VAR_5->hscale = 1 + !!VAR_7[3];
    if (VAR_5->delta_size < 2 || VAR_5->delta_size > 4)
        return VAR_0;

    VAR_11 = FUNC_0(VAR_7 + 5);
    VAR_10 = FUNC_0(VAR_7 + 7);

    VAR_12 = FUNC_2(VAR_3, VAR_10, VAR_11);
    if (VAR_12 < 0)
        return VAR_12;

    FUNC_1(VAR_3, VAR_1, "Header size: %d\n", VAR_6);
    return VAR_6;
}
