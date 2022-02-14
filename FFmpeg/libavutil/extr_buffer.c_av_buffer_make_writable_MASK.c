
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int size; int data; } ;
typedef TYPE_1__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**,TYPE_1__**) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(AVBufferRef **VAR_1)
{
    AVBufferRef *VAR_2, *VAR_3 = *VAR_1;

    if (FUNC_2(VAR_3))
        return 0;

    VAR_2 = FUNC_1(VAR_3->size);
    if (!VAR_2)
        return FUNC_0(VAR_0);

    FUNC_4(VAR_2->data, VAR_3->data, VAR_3->size);

    FUNC_3(VAR_1, &VAR_2);

    return 0;
}
