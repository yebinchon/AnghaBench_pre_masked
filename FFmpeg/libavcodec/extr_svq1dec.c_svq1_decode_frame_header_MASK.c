
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_18__ {TYPE_1__* priv_data; } ;
struct TYPE_17__ {scalar_t__ pict_type; } ;
struct TYPE_16__ {int size_in_bits; int buffer; } ;
struct TYPE_15__ {int width; int height; int nonref; int frame_code; TYPE_2__ gb; } ;
typedef TYPE_1__ SVQ1Context ;
typedef TYPE_2__ GetBitContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (TYPE_4__*,char*,char*,int) ;
 int** VAR_5 ;
 int FUNC_2 (int ,int,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_6, AVFrame *VAR_7)
{
    SVQ1Context *VAR_8 = VAR_6->priv_data;
    GetBitContext *VAR_9 = &VAR_8->gb;
    int VAR_10;
    int VAR_11 = VAR_8->width;
    int VAR_12 = VAR_8->height;

    FUNC_6(VAR_9, 8);


    VAR_8->nonref = 0;
    switch (FUNC_3(VAR_9, 2)) {
    case 0:
        VAR_7->pict_type = VAR_3;
        break;
    case 2:
        VAR_8->nonref = 1;
    case 1:
        VAR_7->pict_type = VAR_4;
        break;
    default:
        FUNC_0(VAR_6, VAR_1, "Invalid frame type.\n");
        return VAR_0;
    }

    if (VAR_7->pict_type == VAR_3) {

        if (VAR_8->frame_code == 0x50 || VAR_8->frame_code == 0x60) {
            int VAR_13 = FUNC_3(VAR_9, 16);

            VAR_13 = FUNC_2(VAR_9->buffer,
                                           VAR_9->size_in_bits >> 3,
                                           VAR_13);

            FUNC_1(VAR_6, "%s checksum (%02x) for packet data\n",
                    (VAR_13 == 0) ? "correct" : "incorrect", VAR_13);
        }

        if ((VAR_8->frame_code ^ 0x10) >= 0x50) {
            uint8_t VAR_14[257];

            FUNC_8(VAR_9, VAR_14);

            FUNC_0(VAR_6, VAR_2,
                   "embedded message:\n%s\n", ((char *)VAR_14) + 1);
        }

        FUNC_6(VAR_9, 2);
        FUNC_6(VAR_9, 2);
        FUNC_7(VAR_9);


        VAR_10 = FUNC_3(VAR_9, 3);

        if (VAR_10 == 7) {

            VAR_11 = FUNC_3(VAR_9, 12);
            VAR_12 = FUNC_3(VAR_9, 12);

            if (!VAR_11 || !VAR_12)
                return VAR_0;
        } else {

            VAR_11 = VAR_5[VAR_10][0];
            VAR_12 = VAR_5[VAR_10][1];
        }
    }


    if (FUNC_4(VAR_9)) {
        FUNC_7(VAR_9);
        FUNC_7(VAR_9);

        if (FUNC_3(VAR_9, 2) != 0)
            return VAR_0;
    }

    if (FUNC_4(VAR_9)) {
        FUNC_7(VAR_9);
        FUNC_6(VAR_9, 4);
        FUNC_7(VAR_9);
        FUNC_6(VAR_9, 2);

        if (FUNC_5(VAR_9) < 0)
            return VAR_0;
    }

    VAR_8->width = VAR_11;
    VAR_8->height = VAR_12;
    return 0;
}
