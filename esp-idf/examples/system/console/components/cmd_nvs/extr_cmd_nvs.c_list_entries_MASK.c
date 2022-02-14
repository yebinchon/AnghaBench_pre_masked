
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* type; TYPE_2__* namespace; TYPE_1__* partition; int end; } ;
struct TYPE_7__ {char** sval; } ;
struct TYPE_6__ {char** sval; } ;
struct TYPE_5__ {char** sval; } ;


 int FUNC_0 (int,char**,void**) ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (char const*,char const*,char const*) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(int VAR_2, char **VAR_3)
{
    VAR_0.partition->sval[0] = "";
    VAR_0.namespace->sval[0] = "";
    VAR_0.type->sval[0] = "";

    int VAR_4 = FUNC_0(VAR_2, VAR_3, (void **) &VAR_0);
    if (VAR_4 != 0) {
        FUNC_1(VAR_1, VAR_0.end, VAR_3[0]);
        return 1;
    }

    const char *VAR_5 = VAR_0.partition->sval[0];
    const char *VAR_6 = VAR_0.namespace->sval[0];
    const char *VAR_7 = VAR_0.type->sval[0];

    return FUNC_2(VAR_5, VAR_6, VAR_7);
}
