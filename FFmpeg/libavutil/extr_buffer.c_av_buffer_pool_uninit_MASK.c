
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refcount; } ;
typedef TYPE_1__ AVBufferPool ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

void FUNC_2(AVBufferPool **VAR_1)
{
    AVBufferPool *VAR_2;

    if (!VAR_1 || !*VAR_1)
        return;
    VAR_2 = *VAR_1;
    *VAR_1 = ((void*)0);

    if (FUNC_0(&VAR_2->refcount, -1, VAR_0) == 1)
        FUNC_1(VAR_2);
}
