
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum perm { ____Placeholder_perm } perm ;
struct TYPE_8__ {int * outputs; TYPE_1__* priv; } ;
struct TYPE_7__ {TYPE_3__* dst; } ;
struct TYPE_6__ {int mode; int lfg; } ;
typedef TYPE_1__ PermsContext ;
typedef int AVFrame ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ,char*,int ,int ,char*) ;
 int FUNC_7 (int ,int *) ;
 int * VAR_4 ;

__attribute__((used)) static int FUNC_8(AVFilterLink *VAR_5, AVFrame *VAR_6)
{
    int VAR_7;
    AVFilterContext *VAR_8 = VAR_5->dst;
    PermsContext *VAR_9 = VAR_8->priv;
    AVFrame *VAR_10 = VAR_6;
    enum perm VAR_11 = FUNC_3(VAR_6) ? VAR_3 : VAR_2;
    enum perm VAR_12;

    switch (VAR_9->mode) {
    case 128: VAR_12 = VAR_11 == VAR_2 ? VAR_3 : VAR_2; break;
    case 131: VAR_12 = FUNC_5(&VAR_9->lfg) & 1 ? VAR_3 : VAR_2; break;
    case 130: VAR_12 = VAR_2; break;
    case 129: VAR_12 = VAR_3; break;
    default: VAR_12 = VAR_11; break;
    }

    FUNC_6(VAR_8, VAR_0, "%s -> %s%s\n",
           VAR_4[VAR_11], VAR_4[VAR_12],
           VAR_11 == VAR_12 ? " (no-op)" : "");

    if (VAR_11 == VAR_2 && VAR_12 == VAR_3) {
        if ((VAR_7 = FUNC_4(VAR_6)) < 0)
            return VAR_7;
    } else if (VAR_11 == VAR_3 && VAR_12 == VAR_2) {
        VAR_10 = FUNC_1(VAR_6);
        if (!VAR_10)
            return FUNC_0(VAR_1);
    }

    VAR_7 = FUNC_7(VAR_8->outputs[0], VAR_10);

    if (VAR_11 == VAR_3 && VAR_12 == VAR_2)
        FUNC_2(&VAR_6);
    return VAR_7;
}
