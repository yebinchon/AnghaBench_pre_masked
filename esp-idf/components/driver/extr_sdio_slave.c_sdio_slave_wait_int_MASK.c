
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int TickType_t ;
struct TYPE_2__ {int * events; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ,int ) ;

esp_err_t FUNC_2(int VAR_2, TickType_t VAR_3)
{
    FUNC_0(VAR_2 >= 0 && VAR_2 < 8, "interrupt num invalid", VAR_0);
    return FUNC_1(VAR_1.events[VAR_2], VAR_3);
}
