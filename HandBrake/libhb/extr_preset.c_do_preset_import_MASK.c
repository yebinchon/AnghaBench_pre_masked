
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int micro; int minor; int major; int result; } ;
typedef TYPE_1__ preset_import_context_t ;
typedef int preset_do_context_t ;
typedef int hb_value_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(hb_value_t *VAR_1, preset_do_context_t *VAR_2)
{
    preset_import_context_t *VAR_3 = (preset_import_context_t*)VAR_2;
    VAR_3->result |= FUNC_0(VAR_1, VAR_3->major, VAR_3->minor, VAR_3->micro);
    return VAR_0;
}
