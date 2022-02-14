
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int size; int data; } ;
typedef TYPE_4__ uint32_t ;
typedef TYPE_4__ esp_local_ctrl_prop_val_t ;
typedef int esp_err_t ;
struct TYPE_21__ {int status; } ;
struct TYPE_20__ {TYPE_7__* resp_set_prop_vals; int payload_case; TYPE_3__* cmd_set_prop_vals; } ;
struct TYPE_18__ {size_t n_props; TYPE_2__** props; } ;
struct TYPE_16__ {int len; int data; } ;
struct TYPE_17__ {TYPE_1__ value; TYPE_4__ index; } ;
typedef TYPE_6__ LocalCtrlMessage ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (size_t,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t,TYPE_4__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_7__* VAR_5 ;
 int FUNC_6 (TYPE_7__*) ;

__attribute__((used)) static esp_err_t FUNC_7(LocalCtrlMessage *VAR_6,
                                           LocalCtrlMessage *VAR_7, void **VAR_8)
{
    FUNC_1(VAR_3, VAR_5);
    FUNC_6(VAR_5);

    uint32_t *VAR_9 = FUNC_2(VAR_6->cmd_set_prop_vals->n_props, sizeof(uint32_t));
    esp_local_ctrl_prop_val_t *VAR_10 = FUNC_2(VAR_6->cmd_set_prop_vals->n_props,
                                             sizeof(esp_local_ctrl_prop_val_t));
    if (!VAR_9 || !VAR_10) {
        FUNC_0(VAR_4, "Failed to allocate memory for setting values");
        FUNC_5(VAR_9);
        FUNC_5(VAR_10);
        return VAR_0;
    }
    for (size_t VAR_11 = 0; VAR_11 < VAR_6->cmd_set_prop_vals->n_props; VAR_11++) {
        VAR_9[VAR_11] = VAR_6->cmd_set_prop_vals->props[VAR_11]->index;
        VAR_10[VAR_11].data = VAR_6->cmd_set_prop_vals->props[VAR_11]->value.data;
        VAR_10[VAR_11].size = VAR_6->cmd_set_prop_vals->props[VAR_11]->value.len;
    }

    esp_err_t VAR_12 = FUNC_4(VAR_6->cmd_set_prop_vals->n_props,
                                                   VAR_9, VAR_10);
    VAR_5->status = FUNC_3(VAR_12);
    VAR_7->payload_case = VAR_2;
    VAR_7->resp_set_prop_vals = VAR_5;
    FUNC_5(VAR_9);
    FUNC_5(VAR_10);



    return VAR_1;
}
