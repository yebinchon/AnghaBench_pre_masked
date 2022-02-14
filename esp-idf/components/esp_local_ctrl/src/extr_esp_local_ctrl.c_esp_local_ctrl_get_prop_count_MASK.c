
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_2__ {size_t props_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

esp_err_t FUNC_1(size_t *VAR_5)
{
    if (!VAR_4) {
        FUNC_0(VAR_3, "Service not running");
        return VAR_1;
    }
    if (!VAR_5) {
        return VAR_0;
    }
    *VAR_5 = VAR_4->props_count;
    return VAR_2;
}
