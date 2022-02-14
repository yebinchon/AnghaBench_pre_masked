
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int avctx; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
typedef TYPE_1__ MpegEncContext ;
typedef TYPE_2__ Mpeg4DecContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(Mpeg4DecContext *VAR_2, GetBitContext *VAR_3)
{
    MpegEncContext *VAR_4 = &VAR_2->m;
    int VAR_5;

        FUNC_4(VAR_3, 4);
        VAR_5 = FUNC_2(VAR_3, 4);
        if (VAR_5 != VAR_1) {
            FUNC_0(VAR_4->avctx, "VO type %u", VAR_5);
            return VAR_0;
        }

        FUNC_3(VAR_3);
        FUNC_1(VAR_4, VAR_3, 1);

    return 0;
}
