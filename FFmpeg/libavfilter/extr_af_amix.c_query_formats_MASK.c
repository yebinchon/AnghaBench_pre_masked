
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* channel_layouts; } ;
typedef int AVFilterFormats ;
typedef int AVFilterContext ;
typedef TYPE_1__ AVFilterChannelLayouts ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int **,int ) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_5)
{
    AVFilterFormats *VAR_6 = ((void*)0);
    AVFilterChannelLayouts *VAR_7;
    int VAR_8;

    VAR_7 = FUNC_3();
    if (!VAR_7) {
        VAR_8 = FUNC_0(VAR_4);
        goto fail;
    }

    if ((VAR_8 = FUNC_2(&VAR_6, VAR_2 )) < 0 ||
        (VAR_8 = FUNC_2(&VAR_6, VAR_3)) < 0 ||
        (VAR_8 = FUNC_2(&VAR_6, VAR_0 )) < 0 ||
        (VAR_8 = FUNC_2(&VAR_6, VAR_1)) < 0 ||
        (VAR_8 = FUNC_6 (VAR_5, VAR_6)) < 0 ||
        (VAR_8 = FUNC_5(VAR_5, VAR_7)) < 0 ||
        (VAR_8 = FUNC_7(VAR_5, FUNC_4())) < 0)
        goto fail;
    return 0;
fail:
    if (VAR_7)
        FUNC_1(&VAR_7->channel_layouts);
    FUNC_1(&VAR_7);
    return VAR_8;
}
