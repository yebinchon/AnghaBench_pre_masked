
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_13__ {scalar_t__ size; } ;
typedef TYPE_3__ esp_local_ctrl_prop_val_t ;
struct TYPE_14__ {scalar_t__ size; int ctx; int flags; int type; int name; } ;
typedef TYPE_4__ esp_local_ctrl_prop_t ;
struct TYPE_15__ {int usr_ctx; int (* get_prop_values ) (size_t,TYPE_4__*,TYPE_3__*,int ) ;} ;
typedef TYPE_5__ esp_local_ctrl_handlers_t ;
typedef int esp_err_t ;
struct TYPE_11__ {TYPE_5__ handlers; } ;
struct TYPE_16__ {size_t props_count; TYPE_2__** props; TYPE_1__ config; } ;
struct TYPE_12__ {scalar_t__ size; int ctx; int flags; int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 TYPE_8__* VAR_3 ;
 int FUNC_1 (size_t,TYPE_4__*,TYPE_3__*,int ) ;

esp_err_t FUNC_2(size_t VAR_4, uint32_t *VAR_5,
                                         esp_local_ctrl_prop_t *VAR_6,
                                         esp_local_ctrl_prop_val_t *VAR_7)
{
    if (!VAR_3) {
        FUNC_0(VAR_2, "Service not running");
        return VAR_1;
    }
    if (!VAR_5 || !VAR_6 || !VAR_7) {
        return VAR_0;
    }


    for (size_t VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        if (VAR_5[VAR_8] >= VAR_3->props_count) {
            FUNC_0(VAR_2, "Invalid property index %d", VAR_5[VAR_8]);
            return VAR_0;
        }
        VAR_6[VAR_8].name = VAR_3->props[VAR_5[VAR_8]]->name;
        VAR_6[VAR_8].type = VAR_3->props[VAR_5[VAR_8]]->type;
        VAR_6[VAR_8].flags = VAR_3->props[VAR_5[VAR_8]]->flags;
        VAR_6[VAR_8].size = VAR_3->props[VAR_5[VAR_8]]->size;
        VAR_6[VAR_8].ctx = VAR_3->props[VAR_5[VAR_8]]->ctx;
    }

    esp_local_ctrl_handlers_t *VAR_9 = &VAR_3->config.handlers;
    esp_err_t VAR_10 = VAR_9->get_prop_values(VAR_4, VAR_6, VAR_7, VAR_9->usr_ctx);


    for (size_t VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
        if (VAR_3->props[VAR_5[VAR_11]]->size != 0) {
            VAR_7[VAR_11].size = VAR_3->props[VAR_5[VAR_11]]->size;
        }
    }
    return VAR_10;
}
