
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uart_port_t ;
struct TYPE_4__ {size_t rd; size_t wr; int* data; } ;
typedef TYPE_1__ uart_pat_rb_t ;
struct TYPE_5__ {TYPE_1__ rx_pattern_pos; } ;


 int FUNC_0 (TYPE_2__*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__** VAR_0 ;
 int * VAR_1 ;

int FUNC_3(uart_port_t VAR_2)
{
    FUNC_0((VAR_0[VAR_2]), "uart driver error", (-1));
    FUNC_1(&VAR_1[VAR_2]);
    uart_pat_rb_t *VAR_3 = &VAR_0[VAR_2]->rx_pattern_pos;
    int VAR_4 = -1;
    if (VAR_3 != ((void*)0) && VAR_3->rd != VAR_3->wr) {
        VAR_4 = VAR_3->data[VAR_3->rd];
    }
    FUNC_2(&VAR_1[VAR_2]);
    return VAR_4;
}
