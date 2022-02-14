
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int depth; } ;
struct TYPE_5__ {TYPE_1__ path; } ;
typedef TYPE_2__ preset_do_context_t ;
typedef int hb_value_t ;


 int VAR_0 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int ,int *,TYPE_2__*) ;

int FUNC_5(const char *VAR_1)
{
    hb_value_t *VAR_2 = FUNC_3(VAR_1);
    if (VAR_2 == ((void*)0))
        VAR_2 = FUNC_0(VAR_1);
    if (VAR_2 == ((void*)0))
        return -1;

    preset_do_context_t VAR_3;

    VAR_3.path.depth = 1;
    FUNC_4(VAR_0, VAR_2, &VAR_3);

    int VAR_4 = FUNC_1(VAR_2);
    FUNC_2(&VAR_2);

    return VAR_4;
}
