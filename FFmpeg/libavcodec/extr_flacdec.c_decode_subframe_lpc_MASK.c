
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_7__ {int bps; } ;
struct TYPE_6__ {int (* lpc32 ) (int *,int*,int,int,int ) ;int (* lpc16 ) (int *,int*,int,int,int ) ;} ;
struct TYPE_8__ {int blocksize; TYPE_2__ flac_stream_info; TYPE_1__ dsp; scalar_t__ buggy_lpc; int gb; int avctx; } ;
typedef TYPE_3__ FLACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int*,int,int,int ,int) ;
 int FUNC_7 (int *,int*,int,int,int ) ;
 int FUNC_8 (int *,int*,int,int,int ) ;

__attribute__((used)) static int FUNC_9(FLACContext *VAR_2, int32_t *VAR_3, int VAR_4,
                               int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10[32];


    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_3[VAR_6] = FUNC_5(&VAR_2->gb, VAR_5);
    }

    VAR_8 = FUNC_3(&VAR_2->gb, 4) + 1;
    if (VAR_8 == 16) {
        FUNC_0(VAR_2->avctx, VAR_1, "invalid coeff precision\n");
        return VAR_0;
    }
    VAR_9 = FUNC_4(&VAR_2->gb, 5);
    if (VAR_9 < 0) {
        FUNC_0(VAR_2->avctx, VAR_1, "qlevel %d not supported, maybe buggy stream\n",
               VAR_9);
        return VAR_0;
    }

    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        VAR_10[VAR_4 - VAR_6 - 1] = FUNC_4(&VAR_2->gb, VAR_8);
    }

    if ((VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4)) < 0)
        return VAR_7;

    if ( ( VAR_2->buggy_lpc && VAR_2->flac_stream_info.bps <= 16)
        || ( !VAR_2->buggy_lpc && VAR_5 <= 16
            && VAR_5 + VAR_8 + FUNC_1(VAR_4) <= 32)) {
        VAR_2->dsp.lpc16(VAR_3, VAR_10, VAR_4, VAR_9, VAR_2->blocksize);
    } else {
        VAR_2->dsp.lpc32(VAR_3, VAR_10, VAR_4, VAR_9, VAR_2->blocksize);
        if (VAR_2->flac_stream_info.bps <= 16)
            FUNC_6(VAR_3, VAR_10, VAR_4, VAR_9, VAR_2->blocksize, VAR_5);
    }

    return 0;
}
