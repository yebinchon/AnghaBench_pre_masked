
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uart_port_t ;
struct TYPE_4__ {int rd; int wr; scalar_t__* data; int len; } ;
typedef TYPE_1__ uart_pat_rb_t ;
typedef int esp_err_t ;
struct TYPE_5__ {TYPE_1__ rx_pattern_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__** VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_3(uart_port_t VAR_4, int VAR_5)
{
    FUNC_0((VAR_2[VAR_4]), "uart driver error", VAR_0);
    FUNC_1(&VAR_3[VAR_4]);
    uart_pat_rb_t *VAR_6 = &VAR_2[VAR_4]->rx_pattern_pos;
    int VAR_7 = VAR_6->rd;
    while (VAR_7 != VAR_6->wr) {
        VAR_6->data[VAR_7] -= VAR_5;
        int VAR_8 = VAR_7;
        VAR_7 ++;
        if (VAR_7 >= VAR_6->len) {
            VAR_7 = 0;
        }
        if (VAR_6->data[VAR_8] < 0) {
            VAR_6->rd = VAR_7;
        }
    }
    FUNC_2(&VAR_3[VAR_4]);
    return VAR_1;
}
