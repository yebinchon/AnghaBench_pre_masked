
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int item_str; } ;
typedef TYPE_1__ esp_gps_t ;


 float FUNC_0 (int ,int *) ;

__attribute__((used)) static float FUNC_1(esp_gps_t *VAR_0)
{
    float VAR_1 = FUNC_0(VAR_0->item_str, ((void*)0));
    int VAR_2 = ((int)VAR_1) / 100;
    float VAR_3 = VAR_1 - (VAR_2 * 100);
    VAR_1 = VAR_2 + VAR_3 / 60.0f;
    return VAR_1;
}
