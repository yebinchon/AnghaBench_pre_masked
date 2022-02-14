
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int* mc_charmap; int* mc_colram; int* mc_charset; int* mc_meta_charset; int* mc_best_cb; int mc_use_5col; int mc_lifetime; int mc_frame_counter; scalar_t__ next_pts; int randctx; } ;
struct TYPE_15__ {scalar_t__ extradata; int width; int height; TYPE_4__* priv_data; } ;
struct TYPE_14__ {scalar_t__ pts; } ;
struct TYPE_13__ {int* data; scalar_t__ pts; scalar_t__ dts; int size; int flags; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ A64Context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int) ;
 int VAR_6 ;
 int FUNC_2 (int*,int*,int*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int*,int,int,int*,int ,int,int*,int *) ;
 int FUNC_5 (int*,int,int,int*,int ,int,int*,int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_1__*,int,int ) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (TYPE_3__*,int*,int*) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__ const*,int*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_7, AVPacket *VAR_8,
                                 const AVFrame *VAR_9, int *VAR_10)
{
    A64Context *VAR_11 = VAR_7->priv_data;

    int VAR_12;
    int VAR_13, VAR_14;
    int VAR_15;
    int VAR_16;

    int VAR_17, VAR_18;
    uint8_t *VAR_19 = ((void*)0);

    int *VAR_20 = VAR_11->mc_charmap;
    uint8_t *VAR_21 = VAR_11->mc_colram;
    uint8_t *VAR_22 = VAR_11->mc_charset;
    int *VAR_23 = VAR_11->mc_meta_charset;
    int *VAR_24 = VAR_11->mc_best_cb;

    int VAR_25 = 0x800 * (VAR_6 + 1);
    int VAR_26 = 0x100 * VAR_11->mc_use_5col;
    int VAR_27;

    if(VAR_5) {
        VAR_15 = FUNC_1(VAR_7->height,VAR_3) >> 3;
        VAR_16 = FUNC_1(VAR_7->width ,VAR_2) >> 3;
        VAR_27 = VAR_16 * VAR_15;
    } else {
        VAR_15 = VAR_3 >> 3;
        VAR_16 = VAR_2 >> 3;
        VAR_27 = 0x400;
    }


    if (!VAR_9) {

        if (!VAR_11->mc_lifetime) return 0;

        if (!VAR_11->mc_frame_counter) {
            VAR_11->mc_lifetime = 0;
        }

        else VAR_11->mc_lifetime = VAR_11->mc_frame_counter;

    } else {

        if (VAR_11->mc_frame_counter < VAR_11->mc_lifetime) {
            FUNC_9(VAR_7, VAR_9, VAR_23 + 32000 * VAR_11->mc_frame_counter);
            VAR_11->mc_frame_counter++;
            if (VAR_11->next_pts == VAR_0)
                VAR_11->next_pts = VAR_9->pts;

            return 0;
        }
    }


    if (VAR_11->mc_frame_counter == VAR_11->mc_lifetime) {
        VAR_17 = 0;

        if (VAR_11->mc_lifetime) {
            int VAR_28 = VAR_25 + VAR_11->mc_lifetime*(VAR_27 + VAR_26);
            if ((VAR_18 = FUNC_6(VAR_7, VAR_8, VAR_28, 0)) < 0)
                return VAR_18;
            VAR_19 = VAR_8->data;


            VAR_18 = FUNC_5(VAR_23, 32, 1000 * VAR_11->mc_lifetime, VAR_24,
                               VAR_4, 50, VAR_20, &VAR_11->randctx);
            if (VAR_18 < 0)
                return VAR_18;
            VAR_18 = FUNC_4(VAR_23, 32, 1000 * VAR_11->mc_lifetime, VAR_24,
                             VAR_4, 50, VAR_20, &VAR_11->randctx);
            if (VAR_18 < 0)
                return VAR_18;


            FUNC_8(VAR_7, VAR_22, VAR_21);


            FUNC_7(VAR_19, VAR_22, VAR_25);


            VAR_19 += VAR_25;
            VAR_17 += VAR_25;
        }


        for (VAR_12 = 0; VAR_12 < VAR_11->mc_lifetime; VAR_12++) {

            for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
                for (VAR_13 = 0; VAR_13 < VAR_16; VAR_13++) {
                    VAR_19[VAR_14 * VAR_16 + VAR_13] = VAR_20[VAR_14 * VAR_16 + VAR_13];
                }
            }

            VAR_19 += VAR_27;
            VAR_17 += VAR_27;


            if (VAR_11->mc_use_5col) {
                FUNC_2(VAR_19, VAR_20, VAR_21);

                VAR_19 += VAR_26;
                VAR_17 += VAR_26;
            }


            VAR_20 += 1000;
        }

        FUNC_0(VAR_7->extradata + 4, VAR_11->mc_frame_counter);
        FUNC_0(VAR_7->extradata + 8, VAR_25);
        FUNC_0(VAR_7->extradata + 12, VAR_27 + VAR_26);


        VAR_11->mc_frame_counter = 0;

        VAR_8->pts = VAR_8->dts = VAR_11->next_pts;
        VAR_11->next_pts = VAR_0;

        FUNC_3(VAR_8->size >= VAR_17);
        VAR_8->size = VAR_17;
        VAR_8->flags |= VAR_1;
        *VAR_10 = !!VAR_17;
    }
    return 0;
}
