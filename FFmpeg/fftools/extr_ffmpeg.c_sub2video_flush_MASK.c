
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ end_pts; } ;
struct TYPE_8__ {int nb_filters; TYPE_2__** filters; TYPE_1__ sub2video; } ;
struct TYPE_7__ {int filter; } ;
typedef TYPE_3__ InputStream ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (TYPE_3__*,int *) ;

__attribute__((used)) static void FUNC_3(InputStream *VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (VAR_3->sub2video.end_pts < VAR_2)
        FUNC_2(VAR_3, ((void*)0));
    for (VAR_4 = 0; VAR_4 < VAR_3->nb_filters; VAR_4++) {
        VAR_5 = FUNC_0(VAR_3->filters[VAR_4]->filter, ((void*)0));
        if (VAR_5 != VAR_0 && VAR_5 < 0)
            FUNC_1(((void*)0), VAR_1, "Flush the frame error.\n");
    }
}
