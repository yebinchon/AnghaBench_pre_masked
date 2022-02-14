
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__ AVBufferRef ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

AVBufferRef *FUNC_2(int VAR_0)
{
    AVBufferRef *VAR_1 = FUNC_0(VAR_0);
    if (!VAR_1)
        return ((void*)0);

    FUNC_1(VAR_1->data, 0, VAR_0);
    return VAR_1;
}
