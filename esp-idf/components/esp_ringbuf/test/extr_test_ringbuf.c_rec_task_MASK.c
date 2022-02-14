
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int buffer; } ;
typedef TYPE_1__ task_args_t ;
typedef int RingbufHandle_t ;


 int FUNC_0 (int ,int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
    RingbufHandle_t VAR_2 = ((task_args_t *)VAR_1)->buffer;
    size_t VAR_3 = FUNC_2(VAR_2);


    FUNC_0(VAR_2, ((task_args_t *)VAR_1)->type, 1);

    FUNC_0(VAR_2, ((task_args_t *)VAR_1)->type, VAR_3/2);

    FUNC_0(VAR_2, ((task_args_t *)VAR_1)->type, VAR_3);

    FUNC_3(VAR_0);
    FUNC_1(((void*)0));
}
