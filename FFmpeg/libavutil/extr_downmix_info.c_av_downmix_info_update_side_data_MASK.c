
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef int AVFrame ;
typedef int AVDownmixInfo ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,int ,int) ;

AVDownmixInfo *FUNC_2(AVFrame *VAR_1)
{
    AVFrameSideData *VAR_2;

    VAR_2 = FUNC_0(VAR_1, VAR_0);

    if (!VAR_2)
        VAR_2 = FUNC_1(VAR_1, VAR_0,
                                           sizeof(AVDownmixInfo));

    if (!VAR_2)
        return ((void*)0);

    return (AVDownmixInfo*)VAR_2->data;
}
