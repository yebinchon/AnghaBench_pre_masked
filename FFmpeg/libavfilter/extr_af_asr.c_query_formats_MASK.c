
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int rate; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef int AVFilterFormats ;
typedef TYPE_1__ AVFilterContext ;
typedef int AVFilterChannelLayouts ;
typedef TYPE_2__ ASRContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ) ;
 int FUNC_1 (int **,int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_2)
{
    ASRContext *VAR_3 = VAR_2->priv;
    int VAR_4[] = { VAR_3->rate, -1 };
    int VAR_5;

    AVFilterFormats *VAR_6 = ((void*)0);
    AVFilterChannelLayouts *VAR_7 = ((void*)0);

    if ((VAR_5 = FUNC_1 (&VAR_6, VAR_1 )) < 0 ||
        (VAR_5 = FUNC_4 (VAR_2 , VAR_6 )) < 0 ||
        (VAR_5 = FUNC_0 (&VAR_7 , VAR_0 )) < 0 ||
        (VAR_5 = FUNC_3 (VAR_2 , VAR_7 )) < 0 ||
        (VAR_5 = FUNC_5 (VAR_2 , FUNC_2(VAR_4) )) < 0)
        return VAR_5;

    return 0;
}
