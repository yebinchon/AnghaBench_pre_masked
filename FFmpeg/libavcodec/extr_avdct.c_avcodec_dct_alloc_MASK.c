
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * av_class; } ;
typedef TYPE_1__ AVDCT ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

AVDCT *FUNC_2(void)
{
    AVDCT *VAR_1 = FUNC_0(sizeof(AVDCT));

    if (!VAR_1)
        return ((void*)0);

    VAR_1->av_class = &VAR_0;
    FUNC_1(VAR_1);

    return VAR_1;
}
