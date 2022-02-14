
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_14__ {scalar_t__ size; } ;
typedef TYPE_3__ esp_local_ctrl_prop_val_t ;
struct TYPE_15__ {scalar_t__ size; int ctx; int flags; int type; int name; } ;
typedef TYPE_4__ esp_local_ctrl_prop_t ;
struct TYPE_16__ {int usr_ctx; int (* set_prop_values ) (size_t,TYPE_4__*,TYPE_3__ const*,int ) ;} ;
typedef TYPE_5__ esp_local_ctrl_handlers_t ;
typedef int esp_err_t ;
struct TYPE_13__ {TYPE_5__ handlers; } ;
struct TYPE_17__ {size_t props_count; TYPE_2__ config; TYPE_1__** props; } ;
struct TYPE_12__ {scalar_t__ size; int ctx; int flags; int type; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 TYPE_4__* FUNC_1 (size_t,int) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_8__* VAR_4 ;
 int FUNC_3 (size_t,TYPE_4__*,TYPE_3__ const*,int ) ;

esp_err_t FUNC_4(size_t VAR_5, uint32_t *VAR_6,
                                         const esp_local_ctrl_prop_val_t *VAR_7)
{
   if (!VAR_4) {
        FUNC_0(VAR_3, "Service not running");
        return VAR_1;
    }
    if (!VAR_6 || !VAR_7) {
        return VAR_0;
    }

    esp_local_ctrl_prop_t *VAR_8 = FUNC_1(VAR_5,
                                          sizeof(esp_local_ctrl_prop_t));
    if (!VAR_8) {
        FUNC_0(VAR_3, "Unable to allocate memory for properties array");
        return VAR_2;
    }
    for (size_t VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        if (VAR_6[VAR_9] >= VAR_4->props_count) {
            FUNC_0(VAR_3, "Invalid property index %d", VAR_6[VAR_9]);
            FUNC_2(VAR_8);
            return VAR_0;
        }


        if ((VAR_4->props[VAR_6[VAR_9]]->size != VAR_7[VAR_9].size) &&
            (VAR_4->props[VAR_6[VAR_9]]->size != 0)) {
            FUNC_0(VAR_3, "Invalid property size %d. Expected %d",
                     VAR_7[VAR_9].size, VAR_4->props[VAR_6[VAR_9]]->size);
            FUNC_2(VAR_8);
            return VAR_0;
        }

        VAR_8[VAR_9].name = VAR_4->props[VAR_6[VAR_9]]->name;
        VAR_8[VAR_9].type = VAR_4->props[VAR_6[VAR_9]]->type;
        VAR_8[VAR_9].flags = VAR_4->props[VAR_6[VAR_9]]->flags;
        VAR_8[VAR_9].size = VAR_4->props[VAR_6[VAR_9]]->size;
        VAR_8[VAR_9].ctx = VAR_4->props[VAR_6[VAR_9]]->ctx;
    }

    esp_local_ctrl_handlers_t *VAR_10 = &VAR_4->config.handlers;
    esp_err_t VAR_11 = VAR_10->set_prop_values(VAR_5, VAR_8, VAR_7, VAR_10->usr_ctx);

    FUNC_2(VAR_8);
    return VAR_11;
}
