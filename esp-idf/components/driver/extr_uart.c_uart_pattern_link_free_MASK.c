
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int* data; scalar_t__ rd; scalar_t__ wr; } ;
struct TYPE_5__ {TYPE_1__ rx_pattern_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int*) ;
 TYPE_2__** VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static esp_err_t FUNC_4(uart_port_t VAR_4)
{
    FUNC_0((VAR_2[VAR_4]), "uart driver error", VAR_0);
    if (VAR_2[VAR_4]->rx_pattern_pos.data != ((void*)0)) {
        int *VAR_5 = VAR_2[VAR_4]->rx_pattern_pos.data;
        FUNC_1(&VAR_3[VAR_4]);
        VAR_2[VAR_4]->rx_pattern_pos.data = ((void*)0);
        VAR_2[VAR_4]->rx_pattern_pos.wr = 0;
        VAR_2[VAR_4]->rx_pattern_pos.rd = 0;
        FUNC_2(&VAR_3[VAR_4]);
        FUNC_3(VAR_5);
    }
    return VAR_1;
}
