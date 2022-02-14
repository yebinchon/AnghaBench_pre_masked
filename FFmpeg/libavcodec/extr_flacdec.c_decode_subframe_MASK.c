
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int bps; } ;
struct TYPE_7__ {int** decoded; scalar_t__ ch_mode; int blocksize; int avctx; int gb; TYPE_1__ flac_stream_info; } ;
typedef TYPE_2__ FLACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*,int*,int,int) ;
 int FUNC_3 (TYPE_2__*,int*,int,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static inline int FUNC_10(FLACContext *VAR_6, int VAR_7)
{
    int32_t *VAR_8 = VAR_6->decoded[VAR_7];
    int VAR_9, VAR_10 = 0;
    int VAR_11 = VAR_6->flac_stream_info.bps;
    int VAR_12, VAR_13, VAR_14;

    if (VAR_7 == 0) {
        if (VAR_6->ch_mode == VAR_5)
            VAR_11++;
    } else {
        if (VAR_6->ch_mode == VAR_3 || VAR_6->ch_mode == VAR_4)
            VAR_11++;
    }

    if (FUNC_5(&VAR_6->gb)) {
        FUNC_0(VAR_6->avctx, VAR_2, "invalid subframe padding\n");
        return VAR_0;
    }
    VAR_9 = FUNC_4(&VAR_6->gb, 6);

    if (FUNC_5(&VAR_6->gb)) {
        int VAR_15 = FUNC_6(&VAR_6->gb);
        if ( VAR_15 <= 0 ||
            (VAR_15 < VAR_11 && !FUNC_9(&VAR_6->gb, VAR_15)) ||
                           !FUNC_9(&VAR_6->gb, VAR_11)) {
            FUNC_0(VAR_6->avctx, VAR_2,
                   "Invalid number of wasted bits > available bits (%d) - left=%d\n",
                   VAR_11, VAR_15);
            return VAR_0;
        }
        VAR_10 = 1 + FUNC_8(&VAR_6->gb, 1, FUNC_6(&VAR_6->gb));
        VAR_11 -= VAR_10;
    }
    if (VAR_11 > 32) {
        FUNC_1(VAR_6->avctx, "Decorrelated bit depth > 32");
        return VAR_1;
    }


    if (VAR_9 == 0) {
        VAR_13 = FUNC_7(&VAR_6->gb, VAR_11);
        for (VAR_12 = 0; VAR_12 < VAR_6->blocksize; VAR_12++)
            VAR_8[VAR_12] = VAR_13;
    } else if (VAR_9 == 1) {
        for (VAR_12 = 0; VAR_12 < VAR_6->blocksize; VAR_12++)
            VAR_8[VAR_12] = FUNC_7(&VAR_6->gb, VAR_11);
    } else if ((VAR_9 >= 8) && (VAR_9 <= 12)) {
        if ((VAR_14 = FUNC_2(VAR_6, VAR_8, VAR_9 & ~0x8, VAR_11)) < 0)
            return VAR_14;
    } else if (VAR_9 >= 32) {
        if ((VAR_14 = FUNC_3(VAR_6, VAR_8, (VAR_9 & ~0x20)+1, VAR_11)) < 0)
            return VAR_14;
    } else {
        FUNC_0(VAR_6->avctx, VAR_2, "invalid coding type\n");
        return VAR_0;
    }

    if (VAR_10 && VAR_10 < 32) {
        int VAR_16;
        for (VAR_16 = 0; VAR_16 < VAR_6->blocksize; VAR_16++)
            VAR_8[VAR_16] = (unsigned)VAR_8[VAR_16] << VAR_10;
    }

    return 0;
}
