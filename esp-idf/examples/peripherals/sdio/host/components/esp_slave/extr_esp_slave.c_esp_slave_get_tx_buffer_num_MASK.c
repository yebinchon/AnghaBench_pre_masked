
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int tx_sent_buffers; } ;
typedef TYPE_1__ esp_slave_context_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int *,int) ;

esp_err_t FUNC_2(esp_slave_context_t *VAR_5, uint32_t* VAR_6)
{
    uint32_t VAR_7;
    esp_err_t VAR_8;

    FUNC_0(VAR_2, "get_tx_buffer_num");
    VAR_8 = FUNC_1(VAR_5, VAR_1, (uint8_t*)&VAR_7, 4);
    if (VAR_8 != VAR_0) return VAR_8;
    VAR_7 = (VAR_7>>16)&VAR_3;
    VAR_7 = (VAR_7 + VAR_4 - VAR_5->tx_sent_buffers)%VAR_4;
    *VAR_6 = VAR_7;
    return VAR_0;
}
