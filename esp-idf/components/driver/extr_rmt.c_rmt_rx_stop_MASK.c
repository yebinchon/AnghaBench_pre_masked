
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* conf_ch; } ;
struct TYPE_4__ {scalar_t__ rx_en; } ;
struct TYPE_5__ {TYPE_1__ conf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;

esp_err_t FUNC_3(rmt_channel_t VAR_6)
{
    FUNC_0(VAR_6 < VAR_4, VAR_3, VAR_0);
    FUNC_1(&VAR_5);
    VAR_2.conf_ch[VAR_6].conf1.rx_en = 0;
    FUNC_2(&VAR_5);
    return VAR_1;
}
