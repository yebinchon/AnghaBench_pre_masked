
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_err_t ;
struct TYPE_2__ {int * intr_handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(void)
{
    esp_err_t VAR_2 = FUNC_2(VAR_1.intr_handle);
    FUNC_0(VAR_2==VAR_0);
    VAR_1.intr_handle = ((void*)0);
    FUNC_1();
}
