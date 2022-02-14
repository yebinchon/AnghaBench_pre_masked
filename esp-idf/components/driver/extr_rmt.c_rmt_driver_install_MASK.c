
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t channel; int wait_done; int translator; int intr_alloc_flags; int * rx_buf; int * tx_sem; int tx_sem_buffer; int * sample_to_rmt; scalar_t__ tx_sub_len; scalar_t__ tx_offset; int * tx_data; scalar_t__ tx_len_rem; } ;
typedef TYPE_1__ rmt_obj_t ;
typedef size_t rmt_channel_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 size_t VAR_9 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int,int,int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 TYPE_1__** VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_9 (int ,int *,int,int *) ;
 int FUNC_10 (size_t,int) ;
 int FUNC_11 (size_t,int) ;
 int FUNC_12 (size_t,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_13 (size_t,int ) ;
 void* FUNC_14 () ;
 int * FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

esp_err_t FUNC_17(rmt_channel_t VAR_16, size_t VAR_17, int VAR_18)
{
    FUNC_3(VAR_16 < VAR_9, VAR_8, VAR_0);
    FUNC_3((VAR_14 & FUNC_0(VAR_16)) == 0, "RMT driver already installed for channel", VAR_1);

    esp_err_t VAR_19 = VAR_4;

    if(VAR_11[VAR_16] != ((void*)0)) {
        FUNC_1(VAR_10, "RMT driver already installed");
        return VAR_1;
    }


    VAR_11[VAR_16] = (rmt_obj_t*) FUNC_7(sizeof(rmt_obj_t));
    if(VAR_11[VAR_16] == ((void*)0)) {
        FUNC_2(VAR_10, "RMT driver malloc error");
        return VAR_2;
    }
    FUNC_8(VAR_11[VAR_16], 0, sizeof(rmt_obj_t));

    VAR_11[VAR_16]->tx_len_rem = 0;
    VAR_11[VAR_16]->tx_data = ((void*)0);
    VAR_11[VAR_16]->channel = VAR_16;
    VAR_11[VAR_16]->tx_offset = 0;
    VAR_11[VAR_16]->tx_sub_len = 0;
    VAR_11[VAR_16]->wait_done = 0;
    VAR_11[VAR_16]->translator = 0;
    VAR_11[VAR_16]->sample_to_rmt = ((void*)0);
    if(VAR_11[VAR_16]->tx_sem == ((void*)0)) {

        VAR_11[VAR_16]->tx_sem = FUNC_14();
        FUNC_16(VAR_11[VAR_16]->tx_sem);
    }
    if(VAR_11[VAR_16]->rx_buf == ((void*)0) && VAR_17 > 0) {
        VAR_11[VAR_16]->rx_buf = FUNC_13(VAR_17, VAR_7);
        FUNC_11(VAR_16, 1);
        FUNC_10(VAR_16, 1);
    }

    FUNC_4(&VAR_13);

    if(VAR_14 == 0) {
        VAR_19 = FUNC_9(VAR_12, ((void*)0), VAR_18, &VAR_15);
    }
    if (VAR_19 == VAR_4) {
        VAR_14 |= FUNC_0(VAR_16);
        FUNC_12(VAR_16, 1);
    }

    FUNC_5(&VAR_13);

    return VAR_19;
}
