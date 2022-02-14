
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t pcnt_unit_t ;
typedef scalar_t__ int16_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* cnt_unit; } ;
struct TYPE_3__ {scalar_t__ cnt_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;

esp_err_t FUNC_1(pcnt_unit_t VAR_6, int16_t* VAR_7)
{
    FUNC_0(VAR_6 < VAR_5, VAR_4, VAR_0);
    FUNC_0(VAR_7 != ((void*)0), VAR_3, VAR_0);
    *VAR_7 = (int16_t) VAR_2.cnt_unit[VAR_6].cnt_val;
    return VAR_1;
}
