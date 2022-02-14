
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* int8_t ;
struct TYPE_11__ {int buffer; } ;
struct TYPE_10__ {int avctx; TYPE_6__ gb; int * block; } ;
typedef TYPE_1__ TgqContext ;
typedef int GetBitContext ;
typedef int AVFrame ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (TYPE_6__*,void**,int) ;
 void* FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (void**,void*,int) ;
 int FUNC_8 (TYPE_1__*,int ,int *) ;
 int FUNC_9 (TYPE_1__*,int *,int *,int,int) ;
 int FUNC_10 (TYPE_1__*,int *,int,int,void**) ;

__attribute__((used)) static int FUNC_11(TgqContext *VAR_1, AVFrame *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6;
    int8_t VAR_7[6];

    VAR_5 = FUNC_3(&VAR_1->gb);
    if (VAR_5 > 12) {
        GetBitContext VAR_8;
        int VAR_9 = FUNC_6(&VAR_8, VAR_1->gb.buffer, FUNC_0(FUNC_4(&VAR_1->gb), VAR_5));
        if (VAR_9 < 0)
            return VAR_9;

        for (VAR_6 = 0; VAR_6 < 6; VAR_6++)
            FUNC_8(VAR_1, VAR_1->block[VAR_6], &VAR_8);
        FUNC_9(VAR_1, VAR_1->block, VAR_2, VAR_4, VAR_3);
        FUNC_5(&VAR_1->gb, VAR_5);
    } else {
        if (VAR_5 == 3) {
            FUNC_7(VAR_7, FUNC_3(&VAR_1->gb), 4);
            VAR_7[4] = FUNC_3(&VAR_1->gb);
            VAR_7[5] = FUNC_3(&VAR_1->gb);
        } else if (VAR_5 == 6) {
            FUNC_2(&VAR_1->gb, VAR_7, 6);
        } else if (VAR_5 == 12) {
            for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
                VAR_7[VAR_6] = FUNC_3(&VAR_1->gb);
                FUNC_5(&VAR_1->gb, 1);
            }
        } else {
            FUNC_1(VAR_1->avctx, VAR_0, "unsupported mb mode %i\n", VAR_5);
            return -1;
        }
        FUNC_10(VAR_1, VAR_2, VAR_4, VAR_3, VAR_7);
    }
    return 0;
}
