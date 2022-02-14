
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int avctx; } ;
struct TYPE_5__ {scalar_t__ time_increment_bits; TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef int GetBitContext ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(Mpeg4DecContext *VAR_0, GetBitContext *VAR_1) {
    MpegEncContext *VAR_2 = &VAR_0->m;
    int VAR_3 = FUNC_0(VAR_0->time_increment_bits + 3, 15);

    FUNC_2(VAR_1, VAR_3);
    if (FUNC_3(VAR_1))
        FUNC_2(VAR_1, VAR_3);
    FUNC_1(VAR_2->avctx, VAR_1, "after new_pred");

    return 0;
}
