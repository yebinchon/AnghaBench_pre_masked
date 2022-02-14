
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int width; int height; } ;
struct TYPE_6__ {int gb; TYPE_3__* avctx; TYPE_4__* frame; } ;
typedef TYPE_1__ RpzaContext ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_3__*,int ,char*,int,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_3__*,TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_12(RpzaContext *VAR_3)
{
    int VAR_4 = VAR_3->avctx->width;
    int VAR_5, VAR_6, VAR_7;
    int VAR_8;
    uint16_t VAR_9 = 0, VAR_10;
    uint16_t VAR_11[4];
    uint16_t VAR_12, VAR_13;
    uint16_t *VAR_14;

    int VAR_15 = 0;
    int VAR_16 = 0;
    int VAR_17;
    int VAR_18, VAR_19;
    int VAR_20;


    if (FUNC_10(&VAR_3->gb) != 0xe1)
        FUNC_3(VAR_3->avctx, VAR_1, "First chunk byte is 0x%02x instead of 0xe1\n",
               FUNC_10(&VAR_3->gb));


    VAR_8 = FUNC_6(&VAR_3->gb) & 0x00FFFFFF;


    if (VAR_8 != FUNC_8(&VAR_3->gb) + 4)
        FUNC_3(VAR_3->avctx, VAR_2,
               "MOV chunk size %d != encoded chunk size %d\n",
               VAR_8,
               FUNC_8(&VAR_3->gb) + 4
              );


    VAR_20 = ((VAR_3->avctx->width + 3) / 4) * ((VAR_3->avctx->height + 3) / 4);

    if (VAR_20 / 32 > FUNC_8(&VAR_3->gb))
        return VAR_0;

    if ((VAR_7 = FUNC_11(VAR_3->avctx, VAR_3->frame, 0)) < 0)
        return VAR_7;
    VAR_14 = (uint16_t *)VAR_3->frame->data[0];
    VAR_5 = VAR_3->frame->linesize[0] / 2;
    VAR_6 = VAR_5 - 4;


    while (FUNC_8(&VAR_3->gb)) {
        uint8_t VAR_21 = FUNC_7(&VAR_3->gb);

        int VAR_22 = (VAR_21 & 0x1f) + 1;


        if ((VAR_21 & 0x80) == 0) {
            VAR_9 = (VAR_21 << 8) | FUNC_7(&VAR_3->gb);
            VAR_21 = 0;
            if ((FUNC_10(&VAR_3->gb) & 0x80) != 0) {



                VAR_21 = 0x20;
                VAR_22 = 1;
            }
        }

        VAR_22 = FUNC_2(VAR_22, VAR_20);

        switch (VAR_21 & 0xe0) {


        case 0x80:
            while (VAR_22--) {
                FUNC_1();
                FUNC_0();
            }
            break;


        case 0xa0:
            VAR_9 = FUNC_4(&VAR_3->gb);
            while (VAR_22--) {
                FUNC_1();
                VAR_17 = VAR_15 + VAR_16;
                for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
                    for (VAR_18 = 0; VAR_18 < 4; VAR_18++){
                        VAR_14[VAR_17] = VAR_9;
                        VAR_17++;
                    }
                    VAR_17 += VAR_6;
                }
                FUNC_0();
            }
            break;


        case 0xc0:
            VAR_9 = FUNC_4(&VAR_3->gb);
        case 0x20:
            VAR_10 = FUNC_4(&VAR_3->gb);


            VAR_11[0] = VAR_10;
            VAR_11[1] = 0;
            VAR_11[2] = 0;
            VAR_11[3] = VAR_9;


            VAR_12 = (VAR_9 >> 10) & 0x1F;
            VAR_13 = (VAR_10 >> 10) & 0x1F;
            VAR_11[1] |= ((11 * VAR_12 + 21 * VAR_13) >> 5) << 10;
            VAR_11[2] |= ((21 * VAR_12 + 11 * VAR_13) >> 5) << 10;


            VAR_12 = (VAR_9 >> 5) & 0x1F;
            VAR_13 = (VAR_10 >> 5) & 0x1F;
            VAR_11[1] |= ((11 * VAR_12 + 21 * VAR_13) >> 5) << 5;
            VAR_11[2] |= ((21 * VAR_12 + 11 * VAR_13) >> 5) << 5;


            VAR_12 = VAR_9 & 0x1F;
            VAR_13 = VAR_10 & 0x1F;
            VAR_11[1] |= ((11 * VAR_12 + 21 * VAR_13) >> 5);
            VAR_11[2] |= ((21 * VAR_12 + 11 * VAR_13) >> 5);

            if (FUNC_8(&VAR_3->gb) < VAR_22 * 4)
                return VAR_0;
            while (VAR_22--) {
                FUNC_1();
                VAR_17 = VAR_15 + VAR_16;
                for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
                    uint8_t VAR_23 = FUNC_9(&VAR_3->gb);
                    for (VAR_18 = 0; VAR_18 < 4; VAR_18++){
                        uint8_t VAR_24 = (VAR_23 >> (2 * (3 - VAR_18))) & 0x03;
                        VAR_14[VAR_17] = VAR_11[VAR_24];
                        VAR_17++;
                    }
                    VAR_17 += VAR_6;
                }
                FUNC_0();
            }
            break;


        case 0x00:
            if (FUNC_8(&VAR_3->gb) < 30)
                return VAR_0;
            FUNC_1();
            VAR_17 = VAR_15 + VAR_16;
            for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
                for (VAR_18 = 0; VAR_18 < 4; VAR_18++){

                    if ((VAR_19 != 0) || (VAR_18 != 0))
                        VAR_9 = FUNC_5(&VAR_3->gb);
                    VAR_14[VAR_17] = VAR_9;
                    VAR_17++;
                }
                VAR_17 += VAR_6;
            }
            FUNC_0();
            break;


        default:
            FUNC_3(VAR_3->avctx, VAR_1, "Unknown opcode %d in rpza chunk."
                 " Skip remaining %d bytes of chunk data.\n", VAR_21,
                 FUNC_8(&VAR_3->gb));
            return VAR_0;
        }
    }

    return 0;
}
