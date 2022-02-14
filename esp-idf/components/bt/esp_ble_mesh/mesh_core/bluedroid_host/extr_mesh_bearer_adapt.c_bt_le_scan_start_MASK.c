
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bt_mesh_scan_param {scalar_t__ filter_dup; int window; int interval; int type; } ;
typedef int bt_mesh_scan_cb_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct bt_mesh_scan_param const*) ;

int FUNC_5(const struct bt_mesh_scan_param *VAR_6, bt_mesh_scan_cb_t VAR_7)
{
    int VAR_8;







    if (!FUNC_4(VAR_6)) {
        return -VAR_3;
    }
    VAR_8 = FUNC_3(VAR_6->type, VAR_6->interval, VAR_6->window, VAR_6->filter_dup);
    if (VAR_8) {
        return VAR_8;
    }





    VAR_5 = VAR_7;
    return VAR_8;
}
