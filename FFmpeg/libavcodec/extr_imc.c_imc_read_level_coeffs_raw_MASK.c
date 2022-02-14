
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gb; void* coef0_pos; } ;
typedef TYPE_1__ IMCContext ;


 int VAR_0 ;
 void* FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(IMCContext *VAR_1, int VAR_2,
                                      int *VAR_3)
{
    int VAR_4;

    VAR_1->coef0_pos = FUNC_0(&VAR_1->gb, 5);
    VAR_3[0] = FUNC_0(&VAR_1->gb, 7);
    for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++)
        VAR_3[VAR_4] = FUNC_0(&VAR_1->gb, 4);
}
