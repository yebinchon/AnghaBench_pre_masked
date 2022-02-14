
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int intr_alloc_flags; size_t sample_size_remain; int tx_sub_len; int translator; int wait_done; int tx_sem; int const* sample_cur; scalar_t__ tx_len_rem; scalar_t__ tx_offset; int tx_buf; int tx_data; int (* sample_to_rmt ) (void*,int ,size_t,int const,size_t*,size_t*) ;} ;
typedef TYPE_5__ rmt_obj_t ;
typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
struct TYPE_15__ {TYPE_2__* conf_ch; } ;
struct TYPE_14__ {TYPE_4__* chan; } ;
struct TYPE_12__ {TYPE_3__* data32; } ;
struct TYPE_11__ {scalar_t__ val; } ;
struct TYPE_9__ {int mem_size; } ;
struct TYPE_10__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 TYPE_8__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int const*) ;
 TYPE_5__** VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (size_t,int ,size_t,int ) ;
 int FUNC_4 (size_t,int,int const) ;
 int FUNC_5 (size_t,int) ;
 int FUNC_6 (void*,int ,size_t,int const,size_t*,size_t*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

esp_err_t FUNC_9(rmt_channel_t VAR_15, const uint8_t *VAR_16, size_t VAR_17, bool VAR_18)
{
    FUNC_1(VAR_15 < VAR_7, VAR_6, VAR_0);
    FUNC_1(VAR_13[VAR_15] != ((void*)0), VAR_8, VAR_1);
    FUNC_1(VAR_13[VAR_15]->sample_to_rmt != ((void*)0),VAR_12, VAR_1);
    size_t VAR_19 = 0;
    size_t VAR_20 = 0;
    rmt_obj_t* VAR_21 = VAR_13[VAR_15];
    const uint32_t VAR_22 = VAR_4.conf_ch[VAR_15].conf0.mem_size * VAR_9;
    const uint32_t VAR_23 = VAR_22 / 2;
    FUNC_8(VAR_21->tx_sem, VAR_14);
    VAR_21->sample_to_rmt((void *)VAR_16, VAR_21->tx_buf, VAR_17, VAR_22, &VAR_20, &VAR_19);
    VAR_21->sample_size_remain = VAR_17 - VAR_20;
    VAR_21->sample_cur = VAR_16 + VAR_20;
    FUNC_3(VAR_15, VAR_21->tx_buf, VAR_19, 0);
    if (VAR_19 == VAR_22) {
        FUNC_4(VAR_15, 1, VAR_23);
        VAR_21->tx_data = VAR_21->tx_buf;
        VAR_21->tx_offset = 0;
        VAR_21->tx_sub_len = VAR_23;
        VAR_21->translator = 1;
    } else {
        VAR_5.chan[VAR_15].data32[VAR_19].val = 0;
        VAR_21->tx_len_rem = 0;
        VAR_21->sample_cur = ((void*)0);
        VAR_21->translator = 0;
    }
    FUNC_5(VAR_15, 1);
    VAR_21->wait_done = VAR_18;
    if (VAR_18) {
        FUNC_8(VAR_21->tx_sem, VAR_14);
        FUNC_7(VAR_21->tx_sem);
    }
    return VAR_3;
}
