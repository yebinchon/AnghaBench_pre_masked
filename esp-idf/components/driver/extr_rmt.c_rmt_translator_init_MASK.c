
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * sample_to_rmt_t ;
typedef int rmt_item32_t ;
typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
struct TYPE_8__ {TYPE_2__* conf_ch; } ;
struct TYPE_7__ {int intr_alloc_flags; int * sample_cur; scalar_t__ sample_size_remain; int * sample_to_rmt; int * tx_buf; } ;
struct TYPE_5__ {int mem_size; } ;
struct TYPE_6__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_2 (int,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int,int const,int) ;
 scalar_t__ FUNC_4 (int const) ;
 TYPE_3__** VAR_13 ;

esp_err_t FUNC_5(rmt_channel_t VAR_14, sample_to_rmt_t VAR_15)
{
    FUNC_2(VAR_15 != ((void*)0), VAR_12, VAR_0);
    FUNC_2(VAR_14 < VAR_8, VAR_7, VAR_0);
    FUNC_2(VAR_13[VAR_14] != ((void*)0), VAR_9, VAR_1);
    const uint32_t VAR_16 = VAR_6.conf_ch[VAR_14].conf0.mem_size * VAR_10 * sizeof(rmt_item32_t);
    if (VAR_13[VAR_14]->tx_buf == ((void*)0)) {

        VAR_13[VAR_14]->tx_buf = (rmt_item32_t *)FUNC_4(VAR_16);







        if(VAR_13[VAR_14]->tx_buf == ((void*)0)) {
            FUNC_1(VAR_11, "RMT translator buffer create fail");
            return VAR_1;
        }
    }
    VAR_13[VAR_14]->sample_to_rmt = VAR_15;
    VAR_13[VAR_14]->sample_size_remain = 0;
    VAR_13[VAR_14]->sample_cur = ((void*)0);
    FUNC_0(VAR_11, "RMT translator init done");
    return VAR_3;
}
