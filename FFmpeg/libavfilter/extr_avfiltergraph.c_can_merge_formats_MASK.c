
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_13__ {struct TYPE_13__* formats; struct TYPE_13__* refs; } ;
typedef TYPE_1__ AVFilterFormats ;


 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVFilterFormats *VAR_0,
                             AVFilterFormats *VAR_1,
                             enum AVMediaType VAR_2,
                             int VAR_3)
{
    AVFilterFormats *VAR_4, *VAR_5, *VAR_6;
    if (VAR_0 == VAR_1)
        return 1;
    VAR_4 = FUNC_1(VAR_0);
    VAR_5 = FUNC_1(VAR_1);

    if (!VAR_4 || !VAR_5) {
        if (VAR_4)
            FUNC_0(&VAR_4->formats);
        if (VAR_5)
            FUNC_0(&VAR_5->formats);

        FUNC_0(&VAR_4);
        FUNC_0(&VAR_5);

        return 0;
    }

    if (VAR_3) {
        VAR_6 = FUNC_3(VAR_4, VAR_5);
    } else {
        VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_2);
    }
    if (VAR_6) {
        FUNC_0(&VAR_6->formats);
        FUNC_0(&VAR_6->refs);
        FUNC_0(&VAR_6);
        return 1;
    } else {
        if (VAR_4)
            FUNC_0(&VAR_4->formats);
        if (VAR_5)
            FUNC_0(&VAR_5->formats);
        FUNC_0(&VAR_4);
        FUNC_0(&VAR_5);
        return 0;
    }
}
