
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int* data; } ;
typedef TYPE_1__ H2645NAL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(H2645NAL *VAR_2, int VAR_3)
{
    int VAR_4 = VAR_2->size;
    int VAR_5;

    while (VAR_3 && VAR_4 > 0 && VAR_2->data[VAR_4 - 1] == 0)
        VAR_4--;

    if (!VAR_4)
        return 0;

    VAR_5 = VAR_2->data[VAR_4 - 1];

    if (VAR_4 > VAR_1 / 8)
        return FUNC_0(VAR_0);
    VAR_4 *= 8;



    if (VAR_5)
        VAR_4 -= FUNC_1(VAR_5) + 1;

    return VAR_4;
}
