
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_3__ {int base_path; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int*) ;
 int FUNC_1 (TYPE_1__**) ;
 scalar_t__ FUNC_2 (int ) ;

esp_err_t FUNC_3(const char* VAR_3)
{
    int VAR_4;
    if (FUNC_0(VAR_3, &VAR_4) != VAR_1) {
        return VAR_0;
    }
    esp_err_t VAR_5 = FUNC_2(VAR_2[VAR_4]->base_path);
    if (VAR_5 != VAR_1) {
        return VAR_5;
    }
    FUNC_1(&VAR_2[VAR_4]);
    return VAR_1;
}
