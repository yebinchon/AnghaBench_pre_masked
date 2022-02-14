
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int * inputs; TYPE_1__* priv; } ;
struct TYPE_12__ {int reinit; int * class; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,char const*,char*,char*) ;
 int FUNC_6 (int ) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_4, const char *VAR_5, const char *VAR_6, char *VAR_7, int VAR_8, int VAR_9)
{
    DrawTextContext *VAR_10 = VAR_4->priv;
    DrawTextContext *VAR_11 = ((void*)0);
    int VAR_12;

    if (!FUNC_8(VAR_5, "reinit")) {
        VAR_11 = FUNC_3(sizeof(DrawTextContext));
        if (!VAR_11)
            return FUNC_0(VAR_1);

        VAR_11->class = &VAR_3;
        VAR_12 = FUNC_4(VAR_11, VAR_10);
        if (VAR_12 < 0)
            goto fail;

        VAR_4->priv = VAR_11;
        VAR_12 = FUNC_5(VAR_4, VAR_6, "=", ":");
        if (VAR_12 < 0) {
            VAR_4->priv = VAR_10;
            goto fail;
        }

        VAR_12 = FUNC_7(VAR_4);
        if (VAR_12 < 0) {
            FUNC_9(VAR_4);
            VAR_4->priv = VAR_10;
            goto fail;
        }

        VAR_11->reinit = 1;

        VAR_4->priv = VAR_10;
        FUNC_9(VAR_4);
        FUNC_1(&VAR_10);

        VAR_4->priv = VAR_11;
        return FUNC_6(VAR_4->inputs[0]);
    } else
        return FUNC_0(VAR_2);

fail:
    FUNC_2(VAR_4, VAR_0, "Failed to process command. Continuing with existing parameters.\n");
    FUNC_1(&VAR_11);
    return VAR_12;
}
