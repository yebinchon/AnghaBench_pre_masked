
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data; } ;
typedef int AVMasteringDisplayMetadata ;
typedef TYPE_1__ AVFrameSideData ;
typedef int AVFrame ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int) ;
 int FUNC_1 (scalar_t__,int ,int) ;

AVMasteringDisplayMetadata *FUNC_2(AVFrame *VAR_1)
{
    AVFrameSideData *VAR_2 = FUNC_0(VAR_1,
                                                        VAR_0,
                                                        sizeof(AVMasteringDisplayMetadata));
    if (!VAR_2)
        return ((void*)0);

    FUNC_1(VAR_2->data, 0, sizeof(AVMasteringDisplayMetadata));

    return (AVMasteringDisplayMetadata *)VAR_2->data;
}
