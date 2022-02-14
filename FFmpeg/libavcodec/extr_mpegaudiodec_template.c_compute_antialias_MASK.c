
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int block_type; int * sb_hybrid; int switch_point; } ;
typedef int MPADecodeContext ;
typedef int INTFLOAT ;
typedef TYPE_1__ GranuleDef ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(MPADecodeContext *VAR_1, GranuleDef *VAR_2)
{
    INTFLOAT *VAR_3;
    int VAR_4, VAR_5;


    if (VAR_2->block_type == 2) {
        if (!VAR_2->switch_point)
            return;

        VAR_4 = 1;
    } else {
        VAR_4 = VAR_0 - 1;
    }

    VAR_3 = VAR_2->sb_hybrid + 18;
    for (VAR_5 = VAR_4; VAR_5 > 0; VAR_5--) {
        FUNC_0(0);
        FUNC_0(1);
        FUNC_0(2);
        FUNC_0(3);
        FUNC_0(4);
        FUNC_0(5);
        FUNC_0(6);
        FUNC_0(7);

        VAR_3 += 18;
    }
}
