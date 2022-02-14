
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int rmt_reserve_memsize_t ;
struct TYPE_14__ {int pin; int tx_not_rx; int buffers; size_t channel; } ;
typedef TYPE_5__ rmt_obj_t ;
struct TYPE_11__ {int fifo_mask; } ;
struct TYPE_16__ {TYPE_4__* conf_ch; TYPE_2__ apb_conf; } ;
struct TYPE_15__ {scalar_t__ allocated; } ;
struct TYPE_12__ {int idle_out_en; int mem_owner; int mem_rd_rst; int mem_wr_rst; scalar_t__ ref_always_on; scalar_t__ idle_out_lv; scalar_t__ rx_filter_thres; scalar_t__ rx_filter_en; scalar_t__ ref_cnt_rst; scalar_t__ tx_conti_mode; scalar_t__ rx_en; } ;
struct TYPE_10__ {int div_cnt; int mem_size; int idle_thres; scalar_t__ mem_pd; scalar_t__ carrier_out_lv; scalar_t__ carrier_en; } ;
struct TYPE_13__ {TYPE_3__ conf1; TYPE_1__ conf0; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_9__ VAR_3 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int,size_t,int) ;
 TYPE_5__* FUNC_3 (int,size_t,int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int ,int *,int *) ;
 void* VAR_5 ;
 TYPE_7__* VAR_6 ;
 int ** VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* FUNC_5 () ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*,int ) ;

rmt_obj_t* FUNC_8(int VAR_11, bool VAR_12, rmt_reserve_memsize_t VAR_13)
{
    int VAR_14 = VAR_13;
    rmt_obj_t* VAR_15;
    size_t VAR_16;
    size_t VAR_17;


    if (!VAR_5) {
        VAR_5 = FUNC_5();
    }

    while (FUNC_7(VAR_5, VAR_10) != VAR_9) {}

    for (VAR_16=0; VAR_16<VAR_2; VAR_16++) {
        for (VAR_17=0; VAR_17<VAR_14 && VAR_16+VAR_17 < VAR_2; VAR_17++) {

            if (VAR_6[VAR_16+VAR_17].allocated) {
                VAR_16 += VAR_17;
                break;
            }
        }
        if (VAR_17 == VAR_14) {

            break;
        }
    }
    if (VAR_16 == VAR_2 || VAR_16+VAR_17 >= VAR_2 || VAR_17 != VAR_14) {
        FUNC_6(VAR_5);
        return ((void*)0);
    }
    VAR_15 = FUNC_3(VAR_11, VAR_16, VAR_14);

    FUNC_6(VAR_5);

    size_t VAR_18 = VAR_16;


    if(VAR_7[VAR_18] == ((void*)0)) {
        VAR_7[VAR_18] = FUNC_5();
        if(VAR_7[VAR_18] == ((void*)0)) {
            return ((void*)0);
        }
    }


    FUNC_0(VAR_18);

    VAR_15->pin = VAR_11;
    VAR_15->tx_not_rx = VAR_12;
    VAR_15->buffers =VAR_14;
    VAR_15->channel = VAR_18;
    FUNC_2(VAR_11, VAR_18, VAR_12);





    VAR_3.conf_ch[VAR_18].conf0.div_cnt = 1;
    VAR_3.conf_ch[VAR_18].conf0.mem_size = VAR_14;
    VAR_3.conf_ch[VAR_18].conf0.carrier_en = 0;
    VAR_3.conf_ch[VAR_18].conf0.carrier_out_lv = 0;
    VAR_3.conf_ch[VAR_18].conf0.mem_pd = 0;

    VAR_3.conf_ch[VAR_18].conf0.idle_thres = 0x80;
    VAR_3.conf_ch[VAR_18].conf1.rx_en = 0;
    VAR_3.conf_ch[VAR_18].conf1.tx_conti_mode = 0;
    VAR_3.conf_ch[VAR_18].conf1.ref_cnt_rst = 0;
    VAR_3.conf_ch[VAR_18].conf1.rx_filter_en = 0;
    VAR_3.conf_ch[VAR_18].conf1.rx_filter_thres = 0;
    VAR_3.conf_ch[VAR_18].conf1.idle_out_lv = 0;
    VAR_3.conf_ch[VAR_18].conf1.idle_out_en = 1;
    VAR_3.conf_ch[VAR_18].conf1.ref_always_on = 0;
    VAR_3.apb_conf.fifo_mask = 1;

    if (VAR_12) {

        VAR_3.conf_ch[VAR_18].conf1.mem_owner = 0;
        VAR_3.conf_ch[VAR_18].conf1.mem_rd_rst = 1;
    } else {

        VAR_3.conf_ch[VAR_18].conf1.mem_owner = 1;
        VAR_3.conf_ch[VAR_18].conf1.mem_wr_rst = 1;
    }


    if (!VAR_8) {
        FUNC_4(VAR_1, (int)VAR_0, VAR_4, ((void*)0), &VAR_8);
    }
    FUNC_1(VAR_18);

    return VAR_15;
}
