
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int fs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,size_t*,size_t*) ;
 TYPE_1__** VAR_2 ;
 scalar_t__ FUNC_1 (char const*,int*) ;

esp_err_t FUNC_2(const char* VAR_3, size_t *VAR_4, size_t *VAR_5)
{
    int VAR_6;
    if (FUNC_1(VAR_3, &VAR_6) != VAR_1) {
        return VAR_0;
    }
    FUNC_0(VAR_2[VAR_6]->fs, VAR_4, VAR_5);
    return VAR_1;
}
