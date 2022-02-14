
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* o_append; int lock; int base_path; } ;
typedef TYPE_1__ vfs_fat_ctx_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__** VAR_3 ;

esp_err_t FUNC_4(const char* VAR_4)
{
    size_t VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 == VAR_2) {
        return VAR_0;
    }
    vfs_fat_ctx_t* VAR_6 = VAR_3[VAR_5];
    esp_err_t VAR_7 = FUNC_1(VAR_6->base_path);
    if (VAR_7 != VAR_1) {
        return VAR_7;
    }
    FUNC_0(&VAR_6->lock);
    FUNC_3(VAR_6->o_append);
    FUNC_3(VAR_6);
    VAR_3[VAR_5] = ((void*)0);
    return VAR_1;
}
