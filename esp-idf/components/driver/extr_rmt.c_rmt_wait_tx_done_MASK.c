
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
typedef scalar_t__ TickType_t ;
struct TYPE_2__ {int wait_done; int tx_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__** VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;

esp_err_t FUNC_4(rmt_channel_t VAR_10, TickType_t VAR_11)
{
    FUNC_1(VAR_10 < VAR_5, VAR_4, VAR_0);
    FUNC_1(VAR_8[VAR_10] != ((void*)0), VAR_6, VAR_2);
    if(FUNC_3(VAR_8[VAR_10]->tx_sem, VAR_11) == VAR_9) {
        VAR_8[VAR_10]->wait_done = 0;
        FUNC_2(VAR_8[VAR_10]->tx_sem);
        return VAR_3;
    }
    else {
        if (VAR_11 != 0) {
            FUNC_0(VAR_7, "Timeout on wait_tx_done");
        }
        return VAR_1;
    }
}
