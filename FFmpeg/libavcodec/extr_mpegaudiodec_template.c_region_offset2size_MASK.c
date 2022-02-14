
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* region_size; int big_values; } ;
typedef TYPE_1__ GranuleDef ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(GranuleDef *VAR_0)
{
    int VAR_1, VAR_2, VAR_3 = 0;
    VAR_0->region_size[2] = 576 / 2;
    for (VAR_1 = 0; VAR_1 < 3; VAR_1++) {
        VAR_2 = FUNC_0(VAR_0->region_size[VAR_1], VAR_0->big_values);
        VAR_0->region_size[VAR_1] = VAR_2 - VAR_3;
        VAR_3 = VAR_2;
    }
}
