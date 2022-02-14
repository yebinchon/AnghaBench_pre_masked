
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; } ;
typedef TYPE_1__ task_args_t ;
typedef int RingbufHandle_t ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    RingbufHandle_t VAR_1 = ((task_args_t *)VAR_0)->buffer;
    size_t VAR_2 = FUNC_2(VAR_1);


    FUNC_0(VAR_1, 1);

    FUNC_0(VAR_1, VAR_2/2);

    FUNC_0(VAR_1, VAR_2);
    FUNC_1(((void*)0));
}
