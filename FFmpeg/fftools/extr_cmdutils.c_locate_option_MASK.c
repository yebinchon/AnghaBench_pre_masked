
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* name; int flags; } ;
typedef TYPE_1__ OptionDef ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;

int FUNC_2(int VAR_1, char **VAR_2, const OptionDef *VAR_3,
                  const char *VAR_4)
{
    const OptionDef *VAR_5;
    int VAR_6;

    for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
        const char *VAR_7 = VAR_2[VAR_6];

        if (*VAR_7++ != '-')
            continue;

        VAR_5 = FUNC_0(VAR_3, VAR_7);
        if (!VAR_5->name && VAR_7[0] == 'n' && VAR_7[1] == 'o')
            VAR_5 = FUNC_0(VAR_3, VAR_7 + 2);

        if ((!VAR_5->name && !FUNC_1(VAR_7, VAR_4)) ||
             (VAR_5->name && !FUNC_1(VAR_4, VAR_5->name)))
            return VAR_6;

        if (!VAR_5->name || VAR_5->flags & VAR_0)
            VAR_6++;
    }
    return 0;
}
