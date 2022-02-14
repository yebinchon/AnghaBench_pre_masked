
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prefs; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gchar ;
typedef int gboolean ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int * FUNC_1 (int ,char*) ;
 int * FUNC_2 (int const*,char const*) ;

__attribute__((used)) static gboolean
FUNC_3(signal_user_data_t *VAR_2, const char *VAR_3)
{
    if (FUNC_0(VAR_2->prefs, "auto_name"))
    {
        const gchar *VAR_4;

        VAR_4 = FUNC_1(VAR_2->prefs, "auto_name_template");
        if (FUNC_2(VAR_4, VAR_3) != ((void*)0))
            return VAR_1;
    }
    return VAR_0;
}
