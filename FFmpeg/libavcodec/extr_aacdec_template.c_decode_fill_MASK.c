
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int buf ;
struct TYPE_7__ {int debug; TYPE_1__* internal; } ;
struct TYPE_6__ {TYPE_4__* avctx; } ;
struct TYPE_5__ {int skip_samples; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AACContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,char*,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (scalar_t__*,char*,int*,int*) ;

__attribute__((used)) static int FUNC_4(AACContext *VAR_2, GetBitContext *VAR_3, int VAR_4) {
    uint8_t VAR_5[256];
    int VAR_6, VAR_7, VAR_8;

    if (VAR_4 < 13+7*8)
        goto unknown;

    FUNC_1(VAR_3, 13); VAR_4 -= 13;

    for(VAR_6=0; VAR_6+1<sizeof(VAR_5) && VAR_4>=8; VAR_6++, VAR_4-=8)
        VAR_5[VAR_6] = FUNC_1(VAR_3, 8);

    VAR_5[VAR_6] = 0;
    if (VAR_2->avctx->debug & VAR_1)
        FUNC_0(VAR_2->avctx, VAR_0, "FILL:%s\n", VAR_5);

    if (FUNC_3(VAR_5, "libfaac %d.%d", &VAR_7, &VAR_8) == 2){
        VAR_2->avctx->internal->skip_samples = 1024;
    }

unknown:
    FUNC_2(VAR_3, VAR_4);

    return 0;
}
