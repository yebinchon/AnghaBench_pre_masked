
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scale_sws_opts; } ;
typedef TYPE_1__ AVFilterGraph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char const*,int) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_7(const char **VAR_3, AVFilterGraph *VAR_4)
{
    char *VAR_5 = FUNC_5(*VAR_3, ';');

    if (FUNC_6(*VAR_3, "sws_flags=", 10))
        return 0;

    if (!VAR_5) {
        FUNC_2(VAR_4, VAR_0, "sws_flags not terminated with ';'.\n");
        return FUNC_0(VAR_1);
    }

    *VAR_3 += 4;

    FUNC_1(&VAR_4->scale_sws_opts);
    if (!(VAR_4->scale_sws_opts = FUNC_3(VAR_5 - *VAR_3 + 1)))
        return FUNC_0(VAR_2);
    FUNC_4(VAR_4->scale_sws_opts, *VAR_3, VAR_5 - *VAR_3 + 1);

    *VAR_3 = VAR_5 + 1;
    return 0;
}
