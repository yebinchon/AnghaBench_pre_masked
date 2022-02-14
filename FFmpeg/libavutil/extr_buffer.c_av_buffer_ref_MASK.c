
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* buffer; } ;
struct TYPE_6__ {int refcount; } ;
typedef TYPE_2__ AVBufferRef ;


 int FUNC_0 (int *,int,int ) ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_0 ;

AVBufferRef *FUNC_2(AVBufferRef *VAR_1)
{
    AVBufferRef *VAR_2 = FUNC_1(sizeof(*VAR_2));

    if (!VAR_2)
        return ((void*)0);

    *VAR_2 = *VAR_1;

    FUNC_0(&VAR_1->buffer->refcount, 1, VAR_0);

    return VAR_2;
}
