
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_22__ {int blocks; } ;
struct TYPE_21__ {int width; TYPE_2__* priv_data; } ;
struct TYPE_20__ {int* linesize; scalar_t__* data; } ;
struct TYPE_19__ {int size; int data; } ;
struct TYPE_18__ {long long num_superblocks; TYPE_4__* frame; TYPE_6__* codebooks; } ;
struct TYPE_17__ {int * pixels; } ;
typedef TYPE_1__ SuperBlock ;
typedef int MacroBlock ;
typedef int GetBitContext ;
typedef TYPE_2__ Escape124Context ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (int *,unsigned int,int *,int) ;
 int FUNC_6 (TYPE_2__*,int *,unsigned int*,unsigned int) ;
 unsigned int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*,TYPE_4__*,int ) ;
 unsigned int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 unsigned int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int ,int) ;
 int FUNC_15 (TYPE_1__*,int ,unsigned int) ;
 unsigned int* VAR_5 ;
 TYPE_6__ FUNC_16 (int *,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_6,
                                  void *VAR_7, int *VAR_8,
                                  AVPacket *VAR_9)
{
    int VAR_10 = VAR_9->size;
    Escape124Context *VAR_11 = VAR_6->priv_data;
    AVFrame *VAR_12 = VAR_7;

    GetBitContext VAR_13;
    unsigned VAR_14, VAR_15;
    unsigned VAR_16;

    unsigned VAR_17, VAR_18 = 1,
             VAR_19 = 0,
             VAR_20 = VAR_6->width / 8, VAR_21 = -1;

    uint16_t* VAR_22, *VAR_23;
    unsigned VAR_24, VAR_25;

    int VAR_26;

    if ((VAR_26 = FUNC_14(&VAR_13, VAR_9->data, VAR_9->size)) < 0)
        return VAR_26;







    if (FUNC_12(&VAR_13) < 64 + VAR_11->num_superblocks * 23LL / 4320)
        return -1;

    VAR_14 = FUNC_13(&VAR_13, 32);
    VAR_15 = FUNC_13(&VAR_13, 32);



    if (!(VAR_14 & 0x114) || !(VAR_14 & 0x7800000)) {
        if (!VAR_11->frame->data[0])
            return VAR_0;

        FUNC_3(VAR_6, VAR_2, "Skipping frame\n");

        *VAR_8 = 1;
        if ((VAR_26 = FUNC_0(VAR_12, VAR_11->frame)) < 0)
            return VAR_26;

        return VAR_15;
    }

    for (VAR_16 = 0; VAR_16 < 3; VAR_16++) {
        if (VAR_14 & (1 << (17 + VAR_16))) {
            unsigned VAR_27, VAR_28;
            if (VAR_16 == 2) {


                VAR_28 = FUNC_13(&VAR_13, 20);
                if (!VAR_28) {
                    FUNC_3(VAR_6, VAR_3, "Invalid codebook size 0.\n");
                    return VAR_0;
                }
                VAR_27 = FUNC_4(VAR_28 - 1) + 1;
            } else {
                VAR_27 = FUNC_9(&VAR_13, 4);
                if (VAR_16 == 0) {


                    VAR_28 = 1 << VAR_27;
                } else {



                    VAR_28 = VAR_11->num_superblocks << VAR_27;
                }
            }
            if (VAR_11->num_superblocks >= VAR_4 >> VAR_27) {
                FUNC_3(VAR_6, VAR_3, "Depth or num_superblocks are too large\n");
                return VAR_0;
            }

            FUNC_2(&VAR_11->codebooks[VAR_16].blocks);
            VAR_11->codebooks[VAR_16] = FUNC_16(&VAR_13, VAR_27, VAR_28);
            if (!VAR_11->codebooks[VAR_16].blocks)
                return -1;
        }
    }

    if ((VAR_26 = FUNC_8(VAR_6, VAR_12, VAR_1)) < 0)
        return VAR_26;

    VAR_23 = (uint16_t*)VAR_12->data[0];
    VAR_25 = VAR_12->linesize[0] / 2;
    VAR_22 = (uint16_t*)VAR_11->frame->data[0];
    VAR_24 = VAR_11->frame->linesize[0] / 2;

    for (VAR_17 = 0; VAR_17 < VAR_11->num_superblocks;
         VAR_17++) {
        MacroBlock VAR_29;
        SuperBlock VAR_30;
        unsigned VAR_31 = 0;

        if (VAR_21 == -1) {


            VAR_21 = FUNC_7(&VAR_13);
        }

        if (VAR_21) {
            FUNC_5(VAR_23, VAR_25,
                            VAR_22, VAR_24);
        } else {
            FUNC_5(VAR_30.pixels, 8,
                            VAR_22, VAR_24);

            while (FUNC_12(&VAR_13) >= 1 && !FUNC_10(&VAR_13)) {
                unsigned VAR_32;
                VAR_29 = FUNC_6(VAR_11, &VAR_13, &VAR_18, VAR_17);
                VAR_32 = FUNC_9(&VAR_13, 16);
                VAR_31 |= VAR_32;
                for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
                    if (VAR_32 & VAR_5[VAR_16]) {
                        FUNC_15(&VAR_30, VAR_29, VAR_16);
                    }
                }
            }

            if (!FUNC_10(&VAR_13)) {
                unsigned VAR_33 = FUNC_9(&VAR_13, 4);
                for (VAR_16 = 0; VAR_16 < 4; VAR_16++) {
                    if (VAR_33 & (1 << VAR_16)) {
                        VAR_31 ^= 0xF << VAR_16*4;
                    } else {
                        VAR_31 ^= FUNC_9(&VAR_13, 4) << VAR_16*4;
                    }
                }

                for (VAR_16 = 0; VAR_16 < 16; VAR_16++) {
                    if (VAR_31 & VAR_5[VAR_16]) {
                        VAR_29 = FUNC_6(VAR_11, &VAR_13, &VAR_18,
                                               VAR_17);
                        FUNC_15(&VAR_30, VAR_29, VAR_16);
                    }
                }
            } else if (VAR_14 & (1 << 16)) {
                while (FUNC_12(&VAR_13) >= 1 && !FUNC_10(&VAR_13)) {
                    VAR_29 = FUNC_6(VAR_11, &VAR_13, &VAR_18, VAR_17);
                    FUNC_15(&VAR_30, VAR_29, FUNC_9(&VAR_13, 4));
                }
            }

            FUNC_5(VAR_23, VAR_25, VAR_30.pixels, 8);
        }

        VAR_19++;
        VAR_23 += 8;
        if (VAR_22)
            VAR_22 += 8;
        if (VAR_19 == VAR_20) {
            VAR_23 += VAR_25 * 8 - VAR_20 * 8;
            if (VAR_22)
                VAR_22 += VAR_24 * 8 - VAR_20 * 8;
            VAR_19 = 0;
        }
        VAR_21--;
    }

    FUNC_3(VAR_6, VAR_2,
           "Escape sizes: %i, %i, %i\n",
           VAR_15, VAR_10, FUNC_11(&VAR_13) / 8);

    FUNC_1(VAR_11->frame);
    if ((VAR_26 = FUNC_0(VAR_11->frame, VAR_12)) < 0)
        return VAR_26;

    *VAR_8 = 1;

    return VAR_15;
}
