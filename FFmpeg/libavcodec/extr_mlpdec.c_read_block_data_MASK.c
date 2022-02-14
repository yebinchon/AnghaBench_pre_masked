
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ access_unit_size; int avctx; int ** bypassed_lsbs; TYPE_1__* substream; } ;
struct TYPE_6__ {scalar_t__ blockpos; scalar_t__ blocksize; unsigned int min_channel; unsigned int max_channel; scalar_t__ data_check_present; } ;
typedef TYPE_1__ SubStream ;
typedef TYPE_2__ MLPDecodeContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_2__*,int *,unsigned int,unsigned int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(MLPDecodeContext *VAR_2, GetBitContext *VAR_3,
                           unsigned int VAR_4)
{
    SubStream *VAR_5 = &VAR_2->substream[VAR_4];
    unsigned int VAR_6, VAR_7, VAR_8 = 0;
    int VAR_9;

    if (VAR_5->data_check_present) {
        VAR_8 = FUNC_4(VAR_3);
        VAR_8 += FUNC_3(VAR_3, 16);
        FUNC_1(VAR_2->avctx,
                              "Substreams with VLC block size check info");
    }

    if (VAR_5->blockpos + VAR_5->blocksize > VAR_2->access_unit_size) {
        FUNC_0(VAR_2->avctx, VAR_1, "too many audio samples in frame\n");
        return VAR_0;
    }

    FUNC_5(&VAR_2->bypassed_lsbs[VAR_5->blockpos][0], 0,
           VAR_5->blocksize * sizeof(VAR_2->bypassed_lsbs[0]));

    for (VAR_6 = 0; VAR_6 < VAR_5->blocksize; VAR_6++)
        if ((VAR_9 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_6)) < 0)
            return VAR_9;

    for (VAR_7 = VAR_5->min_channel; VAR_7 <= VAR_5->max_channel; VAR_7++)
        FUNC_2(VAR_2, VAR_4, VAR_7);

    VAR_5->blockpos += VAR_5->blocksize;

    if (VAR_5->data_check_present) {
        if (FUNC_4(VAR_3) != VAR_8)
            FUNC_0(VAR_2->avctx, VAR_1, "block data length mismatch\n");
        FUNC_7(VAR_3, 8);
    }

    return 0;
}
