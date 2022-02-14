
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int f0r_param_info_t ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int num_params; } ;
struct TYPE_7__ {int (* get_param_info ) (int *,int) ;TYPE_1__ plugin_info; } ;
typedef TYPE_2__ Frei0rContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const**,char*) ;
 int FUNC_3 (TYPE_3__*,int ,int,char*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1, const char *VAR_2)
{
    Frei0rContext *VAR_3 = VAR_1->priv;
    int VAR_4;

    if (!VAR_2)
        return 0;

    for (VAR_4 = 0; VAR_4 < VAR_3->plugin_info.num_params; VAR_4++) {
        f0r_param_info_t VAR_5;
        char *VAR_6;
        int VAR_7;

        VAR_3->get_param_info(&VAR_5, VAR_4);

        if (*VAR_2) {
            if (!(VAR_6 = FUNC_2(&VAR_2, "|")))
                return FUNC_0(VAR_0);
            if (*VAR_2)
                VAR_2++;
            VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_4, VAR_6);
            FUNC_1(VAR_6);
            if (VAR_7 < 0)
                return VAR_7;
        }
    }

    return 0;
}
