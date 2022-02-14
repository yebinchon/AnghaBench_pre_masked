
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_4__ {int (* func ) (size_t,char**) ;} ;
typedef TYPE_1__ cmd_item_t ;
struct TYPE_5__ {int max_cmdline_args; int max_cmdline_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int) ;
 size_t FUNC_1 (int *,char**,int ) ;
 TYPE_1__* FUNC_2 (char*) ;
 int FUNC_3 (char**) ;
 TYPE_2__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (size_t,char**) ;

esp_err_t FUNC_6(const char *VAR_7, int *VAR_8)
{
    if (VAR_6 == ((void*)0)) {
        return VAR_1;
    }
    char **VAR_9 = (char **) FUNC_0(VAR_5.max_cmdline_args, sizeof(char *));
    if (VAR_9 == ((void*)0)) {
        return VAR_3;
    }
    FUNC_4(VAR_6, VAR_7, VAR_5.max_cmdline_length);

    size_t VAR_10 = FUNC_1(VAR_6, VAR_9,
                                         VAR_5.max_cmdline_args);
    if (VAR_10 == 0) {
        FUNC_3(VAR_9);
        return VAR_0;
    }
    const cmd_item_t *VAR_11 = FUNC_2(VAR_9[0]);
    if (VAR_11 == ((void*)0)) {
        FUNC_3(VAR_9);
        return VAR_2;
    }
    *VAR_8 = (*VAR_11->func)(VAR_10, VAR_9);
    FUNC_3(VAR_9);
    return VAR_4;
}
