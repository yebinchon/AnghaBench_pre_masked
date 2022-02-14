
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef size_t rmt_channel_t ;
typedef int esp_err_t ;
struct TYPE_4__ {TYPE_1__* tx_lim_ch; } ;
struct TYPE_3__ {int limit; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 char* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int VAR_5 ;

esp_err_t FUNC_7(rmt_channel_t VAR_6, bool VAR_7, uint16_t VAR_8)
{
    FUNC_1(VAR_6 < VAR_4, VAR_3, VAR_0);
    if(VAR_7) {
        FUNC_1(VAR_8 <= 256, "RMT EVT THRESH ERR", VAR_0);
        FUNC_2(&VAR_5);
        VAR_2.tx_lim_ch[VAR_6].limit = VAR_8;
        FUNC_3(&VAR_5);
        FUNC_6(1);
    }
    return VAR_1;
}
