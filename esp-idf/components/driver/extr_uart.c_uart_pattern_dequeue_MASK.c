
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uart_port_t ;
struct TYPE_4__ {scalar_t__ rd; scalar_t__ wr; scalar_t__ len; int * data; } ;
typedef TYPE_1__ uart_pat_rb_t ;
typedef int esp_err_t ;
struct TYPE_5__ {TYPE_1__ rx_pattern_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__** VAR_3 ;
 int * VAR_4 ;

__attribute__((used)) static esp_err_t FUNC_3(uart_port_t VAR_5)
{
    FUNC_0((VAR_3[VAR_5]), "uart driver error", VAR_1);
    if (VAR_3[VAR_5]->rx_pattern_pos.data == ((void*)0)) {
        return VAR_0;
    } else {
        esp_err_t VAR_6 = VAR_2;
        FUNC_1(&VAR_4[VAR_5]);
        uart_pat_rb_t *VAR_7 = &VAR_3[VAR_5]->rx_pattern_pos;
        if (VAR_7->rd == VAR_7->wr) {
            VAR_6 = VAR_1;
        } else {
            VAR_7->rd++;
        }
        if (VAR_7->rd >= VAR_7->len) {
            VAR_7->rd = 0;
        }
        FUNC_2(&VAR_4[VAR_5]);
        return VAR_6;
    }
}
