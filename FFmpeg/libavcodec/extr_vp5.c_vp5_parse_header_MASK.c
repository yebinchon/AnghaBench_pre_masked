
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int VP56RangeCoder ;
struct TYPE_9__ {int macroblocks; TYPE_5__* avctx; TYPE_1__** frames; int c; } ;
typedef TYPE_2__ VP56Context ;
struct TYPE_10__ {int coded_width; int coded_height; } ;
struct TYPE_8__ {int key_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,char*,int,int) ;
 int FUNC_1 (TYPE_5__*,char*) ;
 int FUNC_2 (TYPE_5__*,int,int) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *,int const*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int FUNC_7(VP56Context *VAR_5, const uint8_t *VAR_6, int VAR_7)
{
    VP56RangeCoder *VAR_8 = &VAR_5->c;
    int VAR_9, VAR_10;
    int VAR_11;

    VAR_11 = FUNC_4(&VAR_5->c, VAR_6, VAR_7);
    if (VAR_11 < 0)
        return VAR_11;
    VAR_5->frames[VAR_3]->key_frame = !FUNC_5(VAR_8);
    FUNC_5(VAR_8);
    FUNC_3(VAR_5, FUNC_6(VAR_8, 6));
    if (VAR_5->frames[VAR_3]->key_frame)
    {
        int VAR_12, VAR_13;

        FUNC_6(VAR_8, 8);
        if(FUNC_6(VAR_8, 5) > 5)
            return VAR_0;
        FUNC_6(VAR_8, 2);
        if (FUNC_5(VAR_8)) {
            FUNC_1(VAR_5->avctx, "Interlacing");
            return VAR_1;
        }
        VAR_9 = FUNC_6(VAR_8, 8);
        VAR_10 = FUNC_6(VAR_8, 8);
        if (!VAR_9 || !VAR_10) {
            FUNC_0(VAR_5->avctx, VAR_2, "Invalid size %dx%d\n",
                   VAR_10 << 4, VAR_9 << 4);
            return VAR_0;
        }
        VAR_13 = FUNC_6(VAR_8, 8);
        VAR_12 = FUNC_6(VAR_8, 8);
        if (VAR_12 == 0 || VAR_12 > VAR_10 ||
            VAR_13 == 0 || VAR_13 > VAR_9)
            return VAR_0;
        FUNC_6(VAR_8, 2);
        if (!VAR_5->macroblocks ||
            16*VAR_10 != VAR_5->avctx->coded_width ||
            16*VAR_9 != VAR_5->avctx->coded_height) {
            int VAR_14 = FUNC_2(VAR_5->avctx, 16 * VAR_10, 16 * VAR_9);
            if (VAR_14 < 0)
                return VAR_14;
            return VAR_4;
        }
    } else if (!VAR_5->macroblocks)
        return VAR_0;
    return 0;
}
