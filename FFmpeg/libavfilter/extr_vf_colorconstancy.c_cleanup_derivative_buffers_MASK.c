
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** data; } ;
typedef TYPE_1__ ThreadData ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(ThreadData *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
        for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
            FUNC_0(&VAR_1->data[VAR_4][VAR_5]);
        }
    }

    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
        FUNC_0(&VAR_1->data[VAR_4][VAR_5]);
    }
}
