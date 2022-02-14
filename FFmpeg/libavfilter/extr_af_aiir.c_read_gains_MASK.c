
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_7__ {TYPE_1__* iir; } ;
struct TYPE_6__ {int g; } ;
typedef TYPE_2__ AudioIIRContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_3__*,int ,char*,char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (char*,char*,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_3, char *VAR_4, int VAR_5)
{
    AudioIIRContext *VAR_6 = VAR_3->priv;
    char *VAR_7, *VAR_8, *VAR_9, *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    int VAR_12;

    VAR_7 = VAR_9 = FUNC_3(VAR_4);
    if (!VAR_7)
        return FUNC_0(VAR_2);
    for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
        if (!(VAR_8 = FUNC_4(VAR_7, "|", &VAR_11)))
            VAR_8 = VAR_10;

        if (!VAR_8) {
            FUNC_1(&VAR_9);
            return FUNC_0(VAR_1);
        }

        VAR_7 = ((void*)0);
        if (FUNC_5(VAR_8, "%lf", &VAR_6->iir[VAR_12].g) != 1) {
            FUNC_2(VAR_3, VAR_0, "Invalid gains supplied: %s\n", VAR_8);
            FUNC_1(&VAR_9);
            return FUNC_0(VAR_1);
        }

        VAR_10 = VAR_8;
    }

    FUNC_1(&VAR_9);

    return 0;
}
