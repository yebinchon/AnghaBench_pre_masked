
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int tx_buffer; int rx_buffer; } ;
typedef TYPE_1__ spi_transaction_t ;
struct TYPE_6__ {int len; int data; int tx_start; } ;
typedef TYPE_2__ slave_rxdata_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

esp_err_t FUNC_2(int VAR_1, spi_transaction_t *VAR_2, slave_rxdata_t *VAR_3, bool VAR_4, bool VAR_5, bool VAR_6)
{

    if (VAR_5) {
        uint32_t VAR_7 = VAR_3->len;
        FUNC_0(VAR_7 >= VAR_1 - 1 && VAR_7 <= VAR_1 + 4);
    }

    if (VAR_4) {
        FUNC_1(VAR_3->tx_start, VAR_2->rx_buffer, (VAR_1 + 7) / 8);
    }

    if (VAR_6) {
        FUNC_1(VAR_2->tx_buffer, VAR_3->data, (VAR_1 + 7) / 8);
    }
    return VAR_0;
}
