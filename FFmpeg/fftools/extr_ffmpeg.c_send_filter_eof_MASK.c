
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int nb_filters; int * filters; TYPE_1__* st; int pts; } ;
struct TYPE_4__ {int time_base; } ;
typedef TYPE_2__ InputStream ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(InputStream *VAR_3)
{
    int VAR_4, VAR_5;

    int64_t VAR_6 = FUNC_0(VAR_3->pts, VAR_2, VAR_3->st->time_base,
                                   VAR_0 | VAR_1);

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_filters; VAR_4++) {
        VAR_5 = FUNC_1(VAR_3->filters[VAR_4], VAR_6);
        if (VAR_5 < 0)
            return VAR_5;
    }
    return 0;
}
