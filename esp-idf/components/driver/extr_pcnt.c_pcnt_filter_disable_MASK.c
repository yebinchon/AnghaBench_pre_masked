
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t pcnt_unit_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* conf_unit; } ;
struct TYPE_4__ {scalar_t__ filter_en; } ;
struct TYPE_5__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;

esp_err_t FUNC_1(pcnt_unit_t VAR_5)
{
    FUNC_0(VAR_5 < VAR_4, VAR_3, VAR_0);
    VAR_2.conf_unit[VAR_5].conf0.filter_en = 0;
    return VAR_1;
}
