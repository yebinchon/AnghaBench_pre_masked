
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int avctx; } ;
typedef TYPE_1__ HQContext ;
typedef int GetBitContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int,int) ;
 int FUNC_1 (TYPE_1__*,int *,int,int *,int,int) ;

__attribute__((used)) static int FUNC_2(HQContext *VAR_1, AVFrame *VAR_2, GetBitContext *VAR_3,
                            int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10;
    int VAR_11;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += 16) {
        VAR_10 = (VAR_5 * 16 + VAR_8 * 3) & 0x70;
        for (VAR_9 = VAR_10; VAR_9 < VAR_6; VAR_9 += 128) {
            VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_3, VAR_9, VAR_8);
            if (VAR_11 < 0) {
                FUNC_0(VAR_1->avctx, VAR_0,
                       "Error decoding macroblock at %dx%d.\n", VAR_8, VAR_9);
                return VAR_11;
            }
        }
    }

    return 0;
}
