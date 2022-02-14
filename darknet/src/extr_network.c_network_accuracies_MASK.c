
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int network ;
typedef int matrix ;
struct TYPE_4__ {int y; } ;
typedef TYPE_1__ data ;


 int FUNC_0 (int ) ;
 float FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,TYPE_1__) ;

float *FUNC_3(network *VAR_0, data VAR_1, int VAR_2)
{
    static float VAR_3[2];
    matrix VAR_4 = FUNC_2(VAR_0, VAR_1);
    VAR_3[0] = FUNC_1(VAR_1.y, VAR_4, 1);
    VAR_3[1] = FUNC_1(VAR_1.y, VAR_4, VAR_2);
    FUNC_0(VAR_4);
    return VAR_3;
}
