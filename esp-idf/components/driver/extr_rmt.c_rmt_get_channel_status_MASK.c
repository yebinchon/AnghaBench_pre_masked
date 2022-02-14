
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * status; } ;
typedef TYPE_1__ rmt_channel_status_result_t ;
typedef int esp_err_t ;
typedef int TickType_t ;
struct TYPE_5__ {int * tx_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 TYPE_3__** VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;

esp_err_t FUNC_3(rmt_channel_status_result_t *VAR_9)
{
    FUNC_0(VAR_9 != ((void*)0), VAR_6, VAR_0);
    for(int VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        VAR_9->status[VAR_10]= VAR_5;
        if( VAR_7[VAR_10] != ((void*)0) ) {
            if( VAR_7[VAR_10]->tx_sem != ((void*)0) ) {
                if( FUNC_2(VAR_7[VAR_10]->tx_sem, (TickType_t)0) == VAR_8 ) {
                    VAR_9->status[VAR_10] = VAR_3;
                    FUNC_1(VAR_7[VAR_10]->tx_sem);
                } else {
                    VAR_9->status[VAR_10] = VAR_2;
                }
            }
        }
    }
    return VAR_1;
}
