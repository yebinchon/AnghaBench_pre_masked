
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int avctx; } ;
typedef int PutBitContext ;
typedef TYPE_1__ ASV1Context ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int ** VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;

__attribute__((used)) static inline void FUNC_4(ASV1Context *VAR_2, PutBitContext *VAR_3, int VAR_4)
{
    unsigned int VAR_5 = VAR_4 + 31;

    if (VAR_5 <= 62) {
        FUNC_3(VAR_3, VAR_1[VAR_5][1], VAR_1[VAR_5][0]);
    } else {
        FUNC_3(VAR_3, VAR_1[31][1], VAR_1[31][0]);
        if (VAR_4 < -128 || VAR_4 > 127) {
            FUNC_2(VAR_2->avctx, VAR_0, "Clipping level %d, increase qscale\n", VAR_4);
            VAR_4 = FUNC_1(VAR_4);
        }
        FUNC_0(VAR_3, 8, VAR_4 & 0xFF);
    }
}
