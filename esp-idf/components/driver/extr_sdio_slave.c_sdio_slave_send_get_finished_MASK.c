
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ portBASE_TYPE ;
typedef int esp_err_t ;
typedef int TickType_t ;
struct TYPE_2__ {int ret_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,void**,int ) ;

esp_err_t FUNC_1(void** VAR_4, TickType_t VAR_5)
{
    void* VAR_6 = ((void*)0);
    portBASE_TYPE VAR_7 = FUNC_0(VAR_2.ret_queue, &VAR_6, VAR_5);
    if (VAR_4) *VAR_4 = VAR_6;
    if (VAR_7 != VAR_3) return VAR_0;
    return VAR_1;
}
