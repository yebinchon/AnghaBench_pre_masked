
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ rmt_mem_owner_t ;
typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* conf_ch; } ;
struct TYPE_4__ {scalar_t__ mem_owner; } ;
struct TYPE_5__ {TYPE_1__ conf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_7 ;

esp_err_t FUNC_3(rmt_channel_t VAR_8, rmt_mem_owner_t VAR_9)
{
    FUNC_0(VAR_8 < VAR_4, VAR_3, VAR_0);
    FUNC_0(VAR_9 < VAR_6, VAR_5, VAR_0);
    FUNC_1(&VAR_7);
    VAR_2.conf_ch[VAR_8].conf1.mem_owner = VAR_9;
    FUNC_2(&VAR_7);
    return VAR_1;
}
