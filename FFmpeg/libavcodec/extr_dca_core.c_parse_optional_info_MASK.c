
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int err_recognition; TYPE_2__* priv_data; } ;
struct TYPE_10__ {int size_in_bits; int buffer; } ;
struct TYPE_9__ {int crctab; int request_channel_layout; int core_only; } ;
struct TYPE_8__ {int frame_size; int ext_audio_type; int xch_pos; int x96_pos; int xxch_pos; TYPE_7__* avctx; TYPE_3__ gb; scalar_t__ ext_audio_present; scalar_t__ prim_dmix_embedded; scalar_t__ aux_present; scalar_t__ ts_present; } ;
typedef TYPE_1__ DCACoreDecoder ;
typedef TYPE_2__ DCAContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int,int ,int) ;
 int FUNC_3 (TYPE_7__*,int ,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_7(DCACoreDecoder *VAR_6)
{
    DCAContext *VAR_7 = VAR_6->avctx->priv_data;
    int VAR_8 = -1;


    if (VAR_6->ts_present)
        FUNC_6(&VAR_6->gb, 32);


    if (VAR_6->aux_present && (VAR_8 = FUNC_5(VAR_6)) < 0
        && (VAR_6->avctx->err_recognition & VAR_1))
        return VAR_8;

    if (VAR_8 < 0)
        VAR_6->prim_dmix_embedded = 0;


    if (VAR_6->ext_audio_present && !VAR_7->core_only) {
        int VAR_9 = FUNC_1(VAR_6->frame_size / 4, VAR_6->gb.size_in_bits / 32) - 1;
        int VAR_10 = FUNC_4(&VAR_6->gb) / 32;
        int VAR_11, VAR_12;
        uint32_t VAR_13, VAR_14 = 0;




        switch (VAR_6->ext_audio_type) {
        case 129:
            if (VAR_7->request_channel_layout)
                break;






            for (; VAR_9 >= VAR_10; VAR_9--, VAR_14 = VAR_13) {
                VAR_13 = FUNC_0(VAR_6->gb.buffer + VAR_9 * 4);
                if (VAR_13 == VAR_4) {
                    VAR_11 = (VAR_14 >> 22) + 1;
                    VAR_12 = VAR_6->frame_size - VAR_9 * 4;
                    if (VAR_11 >= 96
                        && (VAR_11 == VAR_12 || VAR_11 - 1 == VAR_12)
                        && (VAR_14 >> 15 & 0x7f) == 0x08) {
                        VAR_6->xch_pos = VAR_9 * 32 + 49;
                        break;
                    }
                }
            }

            if (!VAR_6->xch_pos) {
                FUNC_3(VAR_6->avctx, VAR_2, "XCH sync word not found\n");
                if (VAR_6->avctx->err_recognition & VAR_1)
                    return VAR_0;
            }
            break;

        case 130:



            for (; VAR_9 >= VAR_10; VAR_9--, VAR_14 = VAR_13) {
                VAR_13 = FUNC_0(VAR_6->gb.buffer + VAR_9 * 4);
                if (VAR_13 == VAR_3) {
                    VAR_11 = (VAR_14 >> 20) + 1;
                    VAR_12 = VAR_6->frame_size - VAR_9 * 4;
                    if (VAR_11 >= 96 && VAR_11 == VAR_12) {
                        VAR_6->x96_pos = VAR_9 * 32 + 44;
                        break;
                    }
                }
            }

            if (!VAR_6->x96_pos) {
                FUNC_3(VAR_6->avctx, VAR_2, "X96 sync word not found\n");
                if (VAR_6->avctx->err_recognition & VAR_1)
                    return VAR_0;
            }
            break;

        case 128:
            if (VAR_7->request_channel_layout)
                break;



            for (; VAR_9 >= VAR_10; VAR_9--, VAR_14 = VAR_13) {
                VAR_13 = FUNC_0(VAR_6->gb.buffer + VAR_9 * 4);
                if (VAR_13 == VAR_5) {
                    VAR_11 = (VAR_14 >> 26) + 1;
                    VAR_12 = VAR_6->gb.size_in_bits / 8 - VAR_9 * 4;
                    if (VAR_11 >= 11 && VAR_11 <= VAR_12 &&
                        !FUNC_2(VAR_7->crctab, 0xffff, VAR_6->gb.buffer +
                                (VAR_9 + 1) * 4, VAR_11 - 4)) {
                        VAR_6->xxch_pos = VAR_9 * 32;
                        break;
                    }
                }
            }

            if (!VAR_6->xxch_pos) {
                FUNC_3(VAR_6->avctx, VAR_2, "XXCH sync word not found\n");
                if (VAR_6->avctx->err_recognition & VAR_1)
                    return VAR_0;
            }
            break;
        }
    }

    return 0;
}
