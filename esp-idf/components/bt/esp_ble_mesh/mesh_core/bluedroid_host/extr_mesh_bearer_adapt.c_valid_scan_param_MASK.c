
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_scan_param {scalar_t__ type; scalar_t__ filter_dup; int interval; int window; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(const struct bt_mesh_scan_param *VAR_4)
{
    if (VAR_4->type != VAR_3 &&
            VAR_4->type != VAR_0) {
        return 0;
    }

    if (VAR_4->filter_dup != VAR_1 &&
            VAR_4->filter_dup != VAR_2) {
        return 0;
    }

    if (VAR_4->interval < 0x0004 || VAR_4->interval > 0x4000) {
        return 0;
    }

    if (VAR_4->window < 0x0004 || VAR_4->window > 0x4000) {
        return 0;
    }

    if (VAR_4->window > VAR_4->interval) {
        return 0;
    }

    return 1;
}
