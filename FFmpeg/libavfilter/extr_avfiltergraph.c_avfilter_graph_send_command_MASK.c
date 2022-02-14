
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* name; TYPE_1__* filter; } ;
struct TYPE_7__ {int nb_filters; TYPE_3__** filters; } ;
struct TYPE_6__ {char* name; } ;
typedef TYPE_2__ AVFilterGraph ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,char const*,char const*,char*,int,int) ;
 int FUNC_2 (char const*,char*) ;

int FUNC_3(AVFilterGraph *VAR_3, const char *VAR_4, const char *VAR_5, const char *VAR_6, char *VAR_7, int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11 = FUNC_0(VAR_2);

    if (!VAR_3)
        return VAR_11;

    if ((VAR_9 & VAR_1) && !(VAR_9 & VAR_0)) {
        VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 | VAR_0);
        if (VAR_11 != FUNC_0(VAR_2))
            return VAR_11;
    }

    if (VAR_8 && VAR_7)
        VAR_7[0] = 0;

    for (VAR_10 = 0; VAR_10 < VAR_3->nb_filters; VAR_10++) {
        AVFilterContext *VAR_12 = VAR_3->filters[VAR_10];
        if (!FUNC_2(VAR_4, "all") || (VAR_12->name && !FUNC_2(VAR_4, VAR_12->name)) || !FUNC_2(VAR_4, VAR_12->filter->name)) {
            VAR_11 = FUNC_1(VAR_12, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
            if (VAR_11 != FUNC_0(VAR_2)) {
                if ((VAR_9 & VAR_1) || VAR_11 < 0)
                    return VAR_11;
            }
        }
    }

    return VAR_11;
}
