
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int avctx; } ;
struct TYPE_5__ {unsigned int mb_width; unsigned int mb_height; unsigned int bitmask_size; int* mxm_bitmask; int* completion_bitmask; int got_mxm_bitmask; int has_complete_frame; TYPE_1__ jpg; } ;
typedef TYPE_2__ MXpegDecodeContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int**) ;
 int FUNC_3 (int ,int ,char*) ;
 int* FUNC_4 (unsigned int) ;
 int* FUNC_5 (unsigned int) ;
 int FUNC_6 (int*,int const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(MXpegDecodeContext *VAR_3,
                            const uint8_t *VAR_4, int VAR_5)
{
    unsigned VAR_6, VAR_7;
    int VAR_8;

    VAR_3->mb_width = FUNC_1(VAR_4+4);
    VAR_3->mb_height = FUNC_1(VAR_4+6);
    VAR_7 = VAR_3->mb_width * VAR_3->mb_height;

    VAR_6 = (VAR_7 + 7) >> 3;
    if (VAR_6 > VAR_5 - 12) {
        FUNC_3(VAR_3->jpg.avctx, VAR_0,
               "MXM bitmask is not complete\n");
        return FUNC_0(VAR_1);
    }

    if (VAR_3->bitmask_size != VAR_6) {
        VAR_3->bitmask_size = 0;
        FUNC_2(&VAR_3->mxm_bitmask);
        VAR_3->mxm_bitmask = FUNC_4(VAR_6);
        if (!VAR_3->mxm_bitmask) {
            FUNC_3(VAR_3->jpg.avctx, VAR_0,
                   "MXM bitmask memory allocation error\n");
            return FUNC_0(VAR_2);
        }

        FUNC_2(&VAR_3->completion_bitmask);
        VAR_3->completion_bitmask = FUNC_5(VAR_6);
        if (!VAR_3->completion_bitmask) {
            FUNC_3(VAR_3->jpg.avctx, VAR_0,
                   "Completion bitmask memory allocation error\n");
            return FUNC_0(VAR_2);
        }

        VAR_3->bitmask_size = VAR_6;
    }

    FUNC_6(VAR_3->mxm_bitmask, VAR_4 + 12, VAR_6);
    VAR_3->got_mxm_bitmask = 1;

    if (!VAR_3->has_complete_frame) {
        uint8_t VAR_9 = 0xFF;
        for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8) {
            VAR_3->completion_bitmask[VAR_8] |= VAR_3->mxm_bitmask[VAR_8];
            VAR_9 &= VAR_3->completion_bitmask[VAR_8];
        }
        VAR_3->has_complete_frame = !(VAR_9 ^ 0xFF);
    }

    return 0;
}
