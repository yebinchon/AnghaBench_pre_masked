
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int config_props; int type; int member_0; } ;
typedef TYPE_1__ AVFilterPad ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*,char const*,int ) ;
 int VAR_4 ;
 int FUNC_4 (int *,int,TYPE_1__*) ;
 int FUNC_5 (int *,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    const char *VAR_9 = VAR_7 ? "in" : "out";
    int VAR_10 = 0, VAR_11 = 0;

    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
        AVFilterPad VAR_12 = { 0 };

        VAR_12.type = VAR_8 ? VAR_0 : VAR_1;

        VAR_12.name = FUNC_1("%sput%d", VAR_9, VAR_10);
        if (!VAR_12.name)
            return FUNC_0(VAR_3);

        FUNC_3(VAR_5, VAR_2, "Add %s pad %s\n", VAR_9, VAR_12.name);

        if (VAR_7) {
            VAR_11 = FUNC_4(VAR_5, VAR_10, &VAR_12);
        } else {
            VAR_12.config_props = VAR_4;
            VAR_11 = FUNC_5(VAR_5, VAR_10, &VAR_12);
        }

        if (VAR_11 < 0) {
            FUNC_2(&VAR_12.name);
            return VAR_11;
        }
    }

    return 0;
}
