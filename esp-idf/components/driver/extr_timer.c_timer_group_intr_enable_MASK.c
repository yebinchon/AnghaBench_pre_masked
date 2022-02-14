
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int timer_intr_t ;
typedef size_t timer_group_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int val; } ;
struct TYPE_4__ {TYPE_1__ int_ena; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_5 ;

esp_err_t FUNC_3(timer_group_t VAR_6, timer_intr_t VAR_7)
{
    FUNC_0(VAR_6 < VAR_3, VAR_4, VAR_0);
    FUNC_1(&VAR_5[VAR_6]);
    VAR_2[VAR_6]->int_ena.val |= VAR_7;
    FUNC_2(&VAR_5[VAR_6]);
    return VAR_1;
}
