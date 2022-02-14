
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int avctx; } ;
struct TYPE_5__ {TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef int GetBitContext ;


 int FUNC_0 (int ,int *,char*) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(Mpeg4DecContext *VAR_0, GetBitContext *VAR_1)
{
    MpegEncContext *VAR_2 = &VAR_0->m;

    FUNC_1(VAR_1, 16);
    FUNC_0(VAR_2->avctx, VAR_1, "after Time_code[63..48]");
    FUNC_1(VAR_1, 16);
    FUNC_0(VAR_2->avctx, VAR_1, "after Time_code[47..32]");
    FUNC_1(VAR_1, 16);
    FUNC_0(VAR_2->avctx, VAR_1, "after Time_code[31..16]");
    FUNC_1(VAR_1, 16);
    FUNC_0(VAR_2->avctx, VAR_1, "after Time_code[15..0]");
    FUNC_1(VAR_1, 4);
}
