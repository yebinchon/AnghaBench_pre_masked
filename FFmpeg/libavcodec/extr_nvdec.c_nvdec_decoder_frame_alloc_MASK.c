
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ nb_allocated; scalar_t__ dpb_size; } ;
typedef TYPE_1__ NVDECFramePool ;
typedef TYPE_2__ AVBufferRef ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static AVBufferRef *FUNC_1(void *VAR_0, int VAR_1)
{
    NVDECFramePool *VAR_2 = VAR_0;
    AVBufferRef *VAR_3;

    if (VAR_2->nb_allocated >= VAR_2->dpb_size)
        return ((void*)0);

    VAR_3 = FUNC_0(sizeof(unsigned int));
    if (!VAR_3)
        return ((void*)0);

    *(unsigned int*)VAR_3->data = VAR_2->nb_allocated++;

    return VAR_3;
}
