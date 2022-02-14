
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef int AVFrame ;
typedef int AVContentLightMetadata ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

AVContentLightMetadata *FUNC_2(AVFrame *VAR_1)
{
    AVFrameSideData *VAR_2 = FUNC_0(VAR_1,
                                                        VAR_0,
                                                        sizeof(AVContentLightMetadata));
    if (!VAR_2)
        return ((void*)0);

    FUNC_1(VAR_2->data, 0, sizeof(AVContentLightMetadata));

    return (AVContentLightMetadata *)VAR_2->data;
}
