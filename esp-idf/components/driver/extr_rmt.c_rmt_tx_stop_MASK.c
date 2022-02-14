
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
struct TYPE_12__ {TYPE_3__* conf_ch; } ;
struct TYPE_11__ {TYPE_1__* chan; } ;
struct TYPE_10__ {scalar_t__ val; } ;
struct TYPE_8__ {int tx_stop; int mem_rd_rst; scalar_t__ tx_start; } ;
struct TYPE_9__ {TYPE_2__ conf1; } ;
struct TYPE_7__ {TYPE_4__* data32; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_6 ;

esp_err_t FUNC_3(rmt_channel_t VAR_7)
{
    FUNC_0(VAR_7 < VAR_5, VAR_4, VAR_0);
    FUNC_1(&VAR_6);






    VAR_2.conf_ch[VAR_7].conf1.mem_rd_rst = 1;
    VAR_2.conf_ch[VAR_7].conf1.mem_rd_rst = 0;
    FUNC_2(&VAR_6);
    return VAR_1;
}
