
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

esp_err_t FUNC_1(rmt_channel_t VAR_6, rmt_mem_owner_t* VAR_7)
{
    FUNC_0(VAR_6 < VAR_4, VAR_3, VAR_0);
    FUNC_0(VAR_7 != ((void*)0), VAR_5, VAR_0);
    *VAR_7 = (rmt_mem_owner_t) VAR_2.conf_ch[VAR_6].conf1.mem_owner;
    return VAR_1;
}
