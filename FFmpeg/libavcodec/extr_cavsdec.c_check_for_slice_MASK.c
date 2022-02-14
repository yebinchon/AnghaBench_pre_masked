
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb_height; int stc; scalar_t__ mbx; int gb; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVSContext ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static inline int FUNC_6(AVSContext *VAR_0)
{
    GetBitContext *VAR_1 = &VAR_0->gb;
    int VAR_2;

    if (VAR_0->mbx)
        return 0;
    VAR_2 = (-FUNC_2(VAR_1)) & 7;

    if (!VAR_2 && (FUNC_3(VAR_1, 8) == 0x80))
        VAR_2 = 8;
    if ((FUNC_4(VAR_1, 24 + VAR_2) & 0xFFFFFF) == 0x000001) {
        FUNC_5(VAR_1, 24 + VAR_2);
        VAR_0->stc = FUNC_1(VAR_1, 8);
        if (VAR_0->stc >= VAR_0->mb_height)
            return 0;
        FUNC_0(VAR_0, VAR_1);
        return 1;
    }
    return 0;
}
