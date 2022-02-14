
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ extradata_size; scalar_t__ extradata; } ;
struct TYPE_5__ {int* mmap_last; int* mclr_last; int* full_last; int* type_last; scalar_t__* type_tbl; TYPE_4__* avctx; scalar_t__* full_tbl; scalar_t__* mclr_tbl; scalar_t__* mmap_tbl; } ;
typedef TYPE_1__ SmackVContext ;
typedef int GetBitContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,int ,char*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int *,scalar_t__**,int*,int) ;

__attribute__((used)) static int FUNC_7(SmackVContext *VAR_3) {
    GetBitContext VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10 = 0;

    VAR_5 = FUNC_1(VAR_3->avctx->extradata);
    VAR_6 = FUNC_1(VAR_3->avctx->extradata + 4);
    VAR_7 = FUNC_1(VAR_3->avctx->extradata + 8);
    VAR_8 = FUNC_1(VAR_3->avctx->extradata + 12);

    VAR_9 = FUNC_5(&VAR_4, VAR_3->avctx->extradata + 16, VAR_3->avctx->extradata_size - 16);
    if (VAR_9 < 0)
        return VAR_9;

    if(!FUNC_4(&VAR_4)) {
        VAR_10 ++;
        FUNC_2(VAR_3->avctx, VAR_1, "Skipping MMAP tree\n");
        VAR_3->mmap_tbl = FUNC_3(sizeof(int) * 2);
        if (!VAR_3->mmap_tbl)
            return FUNC_0(VAR_2);
        VAR_3->mmap_tbl[0] = 0;
        VAR_3->mmap_last[0] = VAR_3->mmap_last[1] = VAR_3->mmap_last[2] = 1;
    } else {
        VAR_9 = FUNC_6(VAR_3, &VAR_4, &VAR_3->mmap_tbl, VAR_3->mmap_last, VAR_5);
        if (VAR_9 < 0)
            return VAR_9;
    }
    if(!FUNC_4(&VAR_4)) {
        VAR_10 ++;
        FUNC_2(VAR_3->avctx, VAR_1, "Skipping MCLR tree\n");
        VAR_3->mclr_tbl = FUNC_3(sizeof(int) * 2);
        if (!VAR_3->mclr_tbl)
            return FUNC_0(VAR_2);
        VAR_3->mclr_tbl[0] = 0;
        VAR_3->mclr_last[0] = VAR_3->mclr_last[1] = VAR_3->mclr_last[2] = 1;
    } else {
        VAR_9 = FUNC_6(VAR_3, &VAR_4, &VAR_3->mclr_tbl, VAR_3->mclr_last, VAR_6);
        if (VAR_9 < 0)
            return VAR_9;
    }
    if(!FUNC_4(&VAR_4)) {
        VAR_10 ++;
        FUNC_2(VAR_3->avctx, VAR_1, "Skipping FULL tree\n");
        VAR_3->full_tbl = FUNC_3(sizeof(int) * 2);
        if (!VAR_3->full_tbl)
            return FUNC_0(VAR_2);
        VAR_3->full_tbl[0] = 0;
        VAR_3->full_last[0] = VAR_3->full_last[1] = VAR_3->full_last[2] = 1;
    } else {
        VAR_9 = FUNC_6(VAR_3, &VAR_4, &VAR_3->full_tbl, VAR_3->full_last, VAR_7);
        if (VAR_9 < 0)
            return VAR_9;
    }
    if(!FUNC_4(&VAR_4)) {
        VAR_10 ++;
        FUNC_2(VAR_3->avctx, VAR_1, "Skipping TYPE tree\n");
        VAR_3->type_tbl = FUNC_3(sizeof(int) * 2);
        if (!VAR_3->type_tbl)
            return FUNC_0(VAR_2);
        VAR_3->type_tbl[0] = 0;
        VAR_3->type_last[0] = VAR_3->type_last[1] = VAR_3->type_last[2] = 1;
    } else {
        VAR_9 = FUNC_6(VAR_3, &VAR_4, &VAR_3->type_tbl, VAR_3->type_last, VAR_8);
        if (VAR_9 < 0)
            return VAR_9;
    }
    if (VAR_10 == 4)
        return VAR_0;

    return 0;
}
