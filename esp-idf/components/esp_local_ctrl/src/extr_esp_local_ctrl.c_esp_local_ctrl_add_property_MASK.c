
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {int ctx_free_fn; int ctx; int flags; int size; int type; int name; } ;
typedef TYPE_2__ esp_local_ctrl_prop_t ;
typedef int esp_err_t ;
struct TYPE_10__ {int ctx_free_fn; int ctx; int flags; int size; int type; int name; } ;
struct TYPE_7__ {scalar_t__ max_properties; } ;
struct TYPE_9__ {scalar_t__ props_count; TYPE_4__** props; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_3__* VAR_5 ;
 int FUNC_4 (int ) ;

esp_err_t FUNC_5(const esp_local_ctrl_prop_t *VAR_6)
{
    if (!VAR_5) {
        FUNC_0(VAR_4, "Service not running");
        return VAR_1;
    }
    if (!VAR_6 || !VAR_6->name) {
        return VAR_0;
    }
    if (FUNC_2(VAR_6->name) >= 0) {
        FUNC_0(VAR_4, "Property with name %s exists", VAR_6->name);
        return VAR_1;
    }

    if (VAR_5->config.max_properties
        == VAR_5->props_count) {
        FUNC_0(VAR_4, "Max properties limit reached. Cannot add property %s", VAR_6->name);
        return VAR_2;
    }

    uint32_t VAR_7 = VAR_5->props_count;
    VAR_5->props[VAR_7] = FUNC_1(1, sizeof(esp_local_ctrl_prop_t));
    if (!VAR_5->props[VAR_7]) {
        FUNC_0(VAR_4, "Failed to allocate memory for new property %s", VAR_6->name);
        return VAR_2;
    }
    VAR_5->props[VAR_7]->name = FUNC_4(VAR_6->name);
    if (!VAR_5->props[VAR_7]->name) {
        FUNC_0(VAR_4, "Failed to allocate memory for property data %s", VAR_6->name);
        FUNC_3(VAR_5->props[VAR_7]);
        VAR_5->props[VAR_7] = ((void*)0);
        return VAR_2;
    }
    VAR_5->props[VAR_7]->type = VAR_6->type;
    VAR_5->props[VAR_7]->size = VAR_6->size;
    VAR_5->props[VAR_7]->flags = VAR_6->flags;
    VAR_5->props[VAR_7]->ctx = VAR_6->ctx;
    VAR_5->props[VAR_7]->ctx_free_fn = VAR_6->ctx_free_fn;
    VAR_5->props_count++;
    return VAR_3;
}
