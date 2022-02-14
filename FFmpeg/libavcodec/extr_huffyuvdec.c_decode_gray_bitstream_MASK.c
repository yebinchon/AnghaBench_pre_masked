
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gb; int ** temp; } ;
typedef TYPE_1__ HYuvContext ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(HYuvContext *VAR_1, int VAR_2)
{
    int VAR_3;
    FUNC_2(VAR_0, &VAR_1->gb);
    VAR_2 /= 2;

    if (VAR_2 >= (FUNC_4(&VAR_1->gb)) / (32 * 2)) {
        for (VAR_3 = 0; VAR_3 < VAR_2 && FUNC_0(VAR_0, &VAR_1->gb) > 0; VAR_3++) {
            FUNC_3(VAR_1->temp[0][2 * VAR_3], VAR_1->temp[0][2 * VAR_3 + 1], 0);
        }
    } else {
        for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
            FUNC_3(VAR_1->temp[0][2 * VAR_3], VAR_1->temp[0][2 * VAR_3 + 1], 0);
        }
    }
    FUNC_1(VAR_0, &VAR_1->gb);
}
