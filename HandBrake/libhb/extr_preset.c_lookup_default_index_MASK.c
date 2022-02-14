
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int depth; } ;
struct TYPE_4__ {TYPE_3__ path; } ;
typedef TYPE_1__ preset_do_context_t ;
typedef int hb_value_t ;
typedef int hb_preset_index_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *,TYPE_1__*) ;

__attribute__((used)) static hb_preset_index_t * FUNC_2(hb_value_t *VAR_2)
{
    preset_do_context_t VAR_3;
    int VAR_4;

    VAR_3.path.depth = 1;
    VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_3);
    if (VAR_4 != VAR_0)
        VAR_3.path.depth = 0;
    return FUNC_0(&VAR_3.path);
}
