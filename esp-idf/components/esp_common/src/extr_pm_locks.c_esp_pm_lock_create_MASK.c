
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ portMUX_TYPE ;
typedef int esp_pm_lock_type_t ;
struct TYPE_5__ {int arg; char const* name; scalar_t__ spinlock; int mode; int type; } ;
typedef TYPE_1__ esp_pm_lock_t ;
typedef TYPE_1__* esp_pm_lock_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

esp_err_t FUNC_5(esp_pm_lock_type_t VAR_8, int VAR_9,
        const char* VAR_10, esp_pm_lock_handle_t* VAR_11)
{

    return VAR_1;


    if (VAR_11 == ((void*)0)) {
        return VAR_0;
    }
    esp_pm_lock_t* VAR_12 = (esp_pm_lock_t*) FUNC_3(1, sizeof(*VAR_12));
    if (!VAR_12) {
        return VAR_2;
    }
    VAR_12->type = VAR_8;
    VAR_12->arg = VAR_9;
    VAR_12->mode = FUNC_4(VAR_8, VAR_9);
    VAR_12->name = VAR_10;
    VAR_12->spinlock = (portMUX_TYPE) VAR_5;
    *VAR_11 = VAR_12;

    FUNC_1(&VAR_7);
    FUNC_0(&VAR_6, VAR_12, VAR_4);
    FUNC_2(&VAR_7);
    return VAR_3;
}
