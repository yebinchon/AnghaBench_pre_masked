
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sample_rate; } ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;
typedef int AVFilterChannelLayouts ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_3)
{
    AVFilterFormats *VAR_4 = ((void*)0);
    AVFilterChannelLayouts *VAR_5 = ((void*)0);
    int VAR_6, VAR_7;

    if ((VAR_7 = FUNC_2 (&VAR_4, VAR_1 )) < 0 ||
        (VAR_7 = FUNC_4 (VAR_3 , VAR_4 )) < 0 ||
        (VAR_7 = FUNC_1 (&VAR_5 , VAR_0)) < 0 ||
        (VAR_7 = FUNC_3 (VAR_3 , VAR_5 )) < 0)
        return VAR_7;

    VAR_4 = ((void*)0);
    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
        if ((VAR_7 = FUNC_2(&VAR_4, VAR_2[VAR_6].sample_rate)) < 0)
            return VAR_7;
    }

    return FUNC_5(VAR_3, VAR_4);
}
