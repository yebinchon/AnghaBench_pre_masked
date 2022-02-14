
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time_base; int avctx; } ;
typedef TYPE_1__ MpegEncContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(MpegEncContext *VAR_2, GetBitContext *VAR_3)
{
    int VAR_4, VAR_5, VAR_6;

    if (!FUNC_3(VAR_3, 23)) {
        FUNC_0(VAR_2->avctx, VAR_1, "GOP header invalid\n");
        return VAR_0;
    }

    VAR_4 = FUNC_2(VAR_3, 5);
    VAR_5 = FUNC_2(VAR_3, 6);
    FUNC_1(VAR_2->avctx, VAR_3, "in gop_header");
    VAR_6 = FUNC_2(VAR_3, 6);

    VAR_2->time_base = VAR_6 + 60*(VAR_5 + 60*VAR_4);

    FUNC_4(VAR_3);
    FUNC_4(VAR_3);

    return 0;
}
