
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


struct TYPE_13__ {int intr_alloc_flags; int tx_len_rem; int tx_sub_len; int wait_done; int tx_sem; scalar_t__ tx_offset; int const* tx_data; } ;
typedef TYPE_5__ rmt_obj_t ;
typedef int rmt_item32_t ;
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
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int const*) ;
 TYPE_5__** VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (size_t,int const*,int,int ) ;
 int FUNC_4 (size_t,int) ;
 int FUNC_5 (size_t,int,int) ;
 int FUNC_6 (size_t,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

esp_err_t FUNC_9(rmt_channel_t VAR_16, const rmt_item32_t* VAR_17, int VAR_18, bool VAR_19)
{
    FUNC_1(VAR_16 < VAR_8, VAR_7, VAR_0);
    FUNC_1(VAR_14[VAR_16] != ((void*)0), VAR_9, VAR_1);
    FUNC_1(VAR_17 != ((void*)0), VAR_6, VAR_1);
    FUNC_1(VAR_18 > 0, VAR_10, VAR_0);
    rmt_obj_t* VAR_20 = VAR_14[VAR_16];
    int VAR_21 = VAR_4.conf_ch[VAR_16].conf0.mem_size;
    int VAR_22 = VAR_21 * VAR_11;
    int VAR_23 = VAR_21 * VAR_11 / 2;
    int VAR_24 = VAR_18;
    FUNC_8(VAR_20->tx_sem, VAR_15);

    if(VAR_18 >= VAR_22) {
        FUNC_3(VAR_16, VAR_17, VAR_22, 0);
        VAR_24 -= VAR_22;
        FUNC_4(VAR_16, 0);
        FUNC_5(VAR_16, 1, VAR_23);
        VAR_20->tx_data = VAR_17 + VAR_22;
        VAR_20->tx_len_rem = VAR_24;
        VAR_20->tx_offset = 0;
        VAR_20->tx_sub_len = VAR_23;
    } else {
        FUNC_3(VAR_16, VAR_17, VAR_24, 0);
        VAR_5.chan[VAR_16].data32[VAR_24].val = 0;
        VAR_20->tx_len_rem = 0;
    }
    FUNC_6(VAR_16, 1);
    VAR_20->wait_done = VAR_19;
    if(VAR_19) {
        FUNC_8(VAR_20->tx_sem, VAR_15);
        FUNC_7(VAR_20->tx_sem);
    }
    return VAR_3;
}
