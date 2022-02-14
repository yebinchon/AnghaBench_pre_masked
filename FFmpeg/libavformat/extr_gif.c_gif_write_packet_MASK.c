
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_16__ {int * pb; TYPE_1__* priv_data; } ;
struct TYPE_15__ {int size; int* data; } ;
struct TYPE_14__ {int have_end; scalar_t__ loop; TYPE_2__* prev_pkt; int last_pos; } ;
typedef TYPE_1__ GIFContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_9 (TYPE_3__*,int*,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_5, AVPacket *VAR_6)
{
    GIFContext *VAR_7 = VAR_5->priv_data;
    AVIOContext *VAR_8 = VAR_5->pb;
    AVPacket *VAR_9 = VAR_7->prev_pkt;

    if (!VAR_7->prev_pkt) {
        VAR_7->prev_pkt = FUNC_1();
        if (!VAR_7->prev_pkt)
            return FUNC_0(VAR_1);
        return FUNC_2(VAR_7->prev_pkt, VAR_6);
    }

    VAR_7->last_pos = FUNC_4(VAR_8);
    if (VAR_9->size > 0)
        VAR_7->have_end = VAR_9->data[VAR_9->size - 1] == VAR_4;

    if (!VAR_7->last_pos) {
        int VAR_10;
        int VAR_11 = 13;

        if (VAR_9->size < 13)
            return FUNC_0(VAR_0);

        if (VAR_9->data[10] & 0x80)
            VAR_11 += 3 * (1 << ((VAR_9->data[10] & 0x07) + 1));

        if (VAR_9->size < VAR_11 + 2)
            return FUNC_0(VAR_0);

        FUNC_7(VAR_8, VAR_9->data, VAR_11);

        if (VAR_9->data[VAR_11] == VAR_3 && VAR_9->data[VAR_11 + 1] == 0xff)
            VAR_11 += 19;

        if (VAR_9->size <= VAR_11)
            return FUNC_0(VAR_0);


        if (VAR_7->loop >= 0) {
            FUNC_5(VAR_8, VAR_3);
            FUNC_5(VAR_8, VAR_2);
            FUNC_5(VAR_8, 0x0b);
            FUNC_7(VAR_8, "NETSCAPE2.0", sizeof("NETSCAPE2.0") - 1);
            FUNC_5(VAR_8, 0x03);
            FUNC_5(VAR_8, 0x01);
            FUNC_6(VAR_8, (uint16_t)VAR_7->loop);
            FUNC_5(VAR_8, 0x00);
        }

        VAR_10 = FUNC_9(VAR_5, VAR_9->data + VAR_11, VAR_9->size - VAR_11);
        if (VAR_10 > 0 && VAR_10 < VAR_9->size - VAR_11 - 2) {
            FUNC_7(VAR_8, VAR_9->data + VAR_11, VAR_10);
            FUNC_6(VAR_8, FUNC_8(VAR_7, VAR_9, VAR_6));
            FUNC_7(VAR_8, VAR_9->data + VAR_11 + VAR_10 + 2, VAR_9->size - VAR_11 - VAR_10 - 2);
        } else {
            FUNC_7(VAR_8, VAR_9->data + VAR_11, VAR_9->size - VAR_11);
        }
    } else {
        int VAR_12 = FUNC_9(VAR_5, VAR_9->data, VAR_9->size);

        if (VAR_12 > 0 && VAR_12 < VAR_9->size - 2) {
            FUNC_7(VAR_8, VAR_9->data, VAR_12);
            FUNC_6(VAR_8, FUNC_8(VAR_7, VAR_9, VAR_6));
            FUNC_7(VAR_8, VAR_9->data + VAR_12 + 2, VAR_9->size - VAR_12 - 2);
        } else {
            FUNC_7(VAR_8, VAR_9->data, VAR_9->size);
        }
    }

    FUNC_3(VAR_7->prev_pkt);
    if (VAR_6)
        return FUNC_2(VAR_7->prev_pkt, VAR_6);

    return 0;
}
