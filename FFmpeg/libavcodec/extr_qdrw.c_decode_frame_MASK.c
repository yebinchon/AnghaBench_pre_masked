
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_35__ {void* pix_fmt; } ;
struct TYPE_34__ {int palette_has_changed; int key_frame; int pict_type; scalar_t__* data; } ;
struct TYPE_33__ {int size; int data; } ;
struct TYPE_32__ {scalar_t__ buffer; } ;
typedef TYPE_1__ GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;



 int VAR_11 ;



 int FUNC_0 (TYPE_4__*,int ,char*,...) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_4__*,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (TYPE_4__*,TYPE_3__* const,TYPE_1__*,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_3__* const,TYPE_1__*) ;
 int FUNC_11 (TYPE_4__*,TYPE_3__* const,TYPE_1__*) ;
 int FUNC_12 (TYPE_4__*,TYPE_3__* const,TYPE_1__*) ;
 int FUNC_13 (TYPE_4__*,TYPE_3__* const,int ) ;
 int FUNC_14 (TYPE_4__*,int,int) ;
 int FUNC_15 (TYPE_4__*,TYPE_1__*,int *,int,int) ;

__attribute__((used)) static int FUNC_16(AVCodecContext *VAR_12,
                        void *VAR_13, int *VAR_14,
                        AVPacket *VAR_15)
{
    AVFrame * const VAR_16 = VAR_13;
    GetByteContext VAR_17;
    int VAR_18;
    int VAR_19, VAR_20, VAR_21;
    int VAR_22;

    FUNC_6(&VAR_17, VAR_15->data, VAR_15->size);
    if ( FUNC_5(&VAR_17) >= 552
           && FUNC_8(VAR_17.buffer + 512, FUNC_5(&VAR_17) - 512)
       )
        FUNC_7(&VAR_17, 512);

    VAR_22 = FUNC_8(VAR_17.buffer, FUNC_5(&VAR_17));


    if (FUNC_5(&VAR_17) < 40) {
        FUNC_0(VAR_12, VAR_3, "Frame is too small %d\n",
               FUNC_5(&VAR_17));
        return VAR_0;
    }

    FUNC_7(&VAR_17, 6);
    VAR_20 = FUNC_3(&VAR_17);
    VAR_19 = FUNC_3(&VAR_17);

    VAR_21 = FUNC_14(VAR_12, VAR_19, VAR_20);
    if (VAR_21 < 0)
        return VAR_21;



    if (VAR_22 == 1) {
        FUNC_2(VAR_12, "QuickDraw version 1");
        return VAR_1;
    } else if (VAR_22 != 2) {
        FUNC_2(VAR_12, "QuickDraw version unknown (%X)", FUNC_4(&VAR_17));
        return VAR_1;
    }

    FUNC_7(&VAR_17, 4+26);

    while (FUNC_5(&VAR_17) >= 4) {
        int VAR_23, VAR_24;
        int VAR_25, VAR_26;
        int VAR_27;
        int VAR_28 = FUNC_3(&VAR_17);

        switch(VAR_28) {
        case 133:
            FUNC_7(&VAR_17, 10);
            break;
        case 129:
        case 128:
            FUNC_0(VAR_12, VAR_2, "Parsing Packbit opcode\n");

            VAR_27 = FUNC_3(&VAR_17) & 0xC000;
            FUNC_7(&VAR_17, 28);
            VAR_23 = FUNC_3(&VAR_17);
            VAR_24 = FUNC_3(&VAR_17);

            FUNC_0(VAR_12, VAR_2, "bppcount %d bpp %d\n", VAR_23, VAR_24);
            if (VAR_23 == 1 && VAR_24 == 8) {
                VAR_12->pix_fmt = VAR_8;
            } else if (VAR_23 == 1 && (VAR_24 == 4 || VAR_24 == 2)) {
                VAR_12->pix_fmt = VAR_8;
            } else if (VAR_23 == 3 && VAR_24 == 5) {
                VAR_12->pix_fmt = VAR_10;
            } else {
                FUNC_0(VAR_12, VAR_3,
                       "Invalid pixel format (bppcnt %d bpp %d) in Packbit\n",
                       VAR_23, VAR_24);
                return VAR_0;
            }


            FUNC_7(&VAR_17, 18);
            VAR_18 = FUNC_3(&VAR_17);

            if (VAR_18 < 0 || VAR_18 > 256) {
                FUNC_0(VAR_12, VAR_3,
                       "Error color count - %i(0x%X)\n", VAR_18, VAR_18);
                return VAR_0;
            }
            if (FUNC_5(&VAR_17) < (VAR_18 + 1) * 8) {
                FUNC_0(VAR_12, VAR_3, "Palette is too small %d\n",
                       FUNC_5(&VAR_17));
                return VAR_0;
            }
            if ((VAR_21 = FUNC_13(VAR_12, VAR_16, 0)) < 0)
                return VAR_21;

            VAR_21 = FUNC_15(VAR_12, &VAR_17, (uint32_t *)VAR_16->data[1], VAR_18, VAR_27 & 0x8000);
            if (VAR_21 < 0)
                return VAR_21;
            VAR_16->palette_has_changed = 1;


            FUNC_7(&VAR_17, 18);

            if (VAR_28 == 128) {
                FUNC_7(&VAR_17, 2 + 8);
                FUNC_1(VAR_12, "Packbit mask region");
            }

            if (VAR_12->pix_fmt == VAR_10)
                VAR_21 = FUNC_10(VAR_12, VAR_16, &VAR_17);
            else if (VAR_24 == 2)
                VAR_21 = FUNC_11(VAR_12, VAR_16, &VAR_17);
            else if (VAR_24 == 4)
                VAR_21 = FUNC_12(VAR_12, VAR_16, &VAR_17);
            else
                VAR_21 = FUNC_9(VAR_12, VAR_16, &VAR_17, VAR_23);
            if (VAR_21 < 0)
                return VAR_21;
            *VAR_14 = 1;
            break;
        case 132:
        case 131:
            FUNC_0(VAR_12, VAR_2, "Parsing Directbit opcode\n");

            FUNC_7(&VAR_17, 4);
            VAR_25 = FUNC_3(&VAR_17) & 0x3FFF;
            if (VAR_25 <= 250) {
                FUNC_1(VAR_12, "Short rowbytes");
                return VAR_1;
            }

            FUNC_7(&VAR_17, 4);
            VAR_20 = FUNC_3(&VAR_17);
            VAR_19 = FUNC_3(&VAR_17);
            FUNC_7(&VAR_17, 2);

            VAR_21 = FUNC_14(VAR_12, VAR_19, VAR_20);
            if (VAR_21 < 0)
                return VAR_21;

            VAR_26 = FUNC_3(&VAR_17);

            FUNC_7(&VAR_17, 16);
            VAR_23 = FUNC_3(&VAR_17);
            VAR_24 = FUNC_3(&VAR_17);

            FUNC_0(VAR_12, VAR_2, "bppcount %d bpp %d\n", VAR_23, VAR_24);
            if (VAR_23 == 3 && VAR_24 == 8) {
                VAR_12->pix_fmt = VAR_9;
            } else if (VAR_23 == 3 && VAR_24 == 5 || VAR_23 == 2 && VAR_24 == 8) {
                VAR_12->pix_fmt = VAR_10;
            } else if (VAR_23 == 4 && VAR_24 == 8) {
                VAR_12->pix_fmt = VAR_7;
            } else {
                FUNC_0(VAR_12, VAR_3,
                       "Invalid pixel format (bppcnt %d bpp %d) in Directbit\n",
                       VAR_23, VAR_24);
                return VAR_0;
            }


            if (VAR_26 == 0)
                VAR_26 = VAR_23;

            if (VAR_26 != 3 && VAR_26 != 4) {
                FUNC_2(VAR_12, "Pack type %d", VAR_26);
                return VAR_1;
            }
            if (FUNC_5(&VAR_17) < 30)
                return VAR_0;
            if ((VAR_21 = FUNC_13(VAR_12, VAR_16, 0)) < 0)
                return VAR_21;


            FUNC_7(&VAR_17, 30);

            if (VAR_28 == 131) {
                FUNC_7(&VAR_17, 2 + 8);
                FUNC_1(VAR_12, "DirectBit mask region");
            }

            if (VAR_12->pix_fmt == VAR_10)
                VAR_21 = FUNC_10(VAR_12, VAR_16, &VAR_17);
            else
                VAR_21 = FUNC_9(VAR_12, VAR_16, &VAR_17, VAR_23);
            if (VAR_21 < 0)
                return VAR_21;
            *VAR_14 = 1;
            break;
        case 130:
            FUNC_3(&VAR_17);
            FUNC_7(&VAR_17, FUNC_3(&VAR_17));
            break;
        default:
            FUNC_0(VAR_12, VAR_4, "Unknown 0x%04X opcode\n", VAR_28);
            break;
        }

        if (*VAR_14) {
            int VAR_29, VAR_30;


            FUNC_7(&VAR_17, FUNC_5(&VAR_17) % 2);

            VAR_29 = FUNC_3(&VAR_17);
            VAR_30 = FUNC_5(&VAR_17);
            if (VAR_29 != VAR_11)
                FUNC_0(VAR_12, VAR_5,
                       "Missing end of picture opcode (found 0x%04X)\n", VAR_29);
            if (VAR_30)
                FUNC_0(VAR_12, VAR_5, "Got %d trailing bytes\n", VAR_30);
            break;
        }
    }

    if (*VAR_14) {
        VAR_16->pict_type = VAR_6;
        VAR_16->key_frame = 1;

        return VAR_15->size;
    } else {
        FUNC_0(VAR_12, VAR_3, "Frame contained no usable data\n");

        return VAR_0;
    }
}
