
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; int tx_start; } ;
typedef TYPE_1__ slave_rxdata_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;

void FUNC_2(slave_rxdata_t *VAR_1, bool VAR_2)
{
    int VAR_3 = (VAR_1->len+7)/8;
    FUNC_0(VAR_0, "trans_len: %d", VAR_1->len);
    FUNC_1("slave tx", VAR_1->tx_start, VAR_3);
    if (VAR_2) FUNC_1("slave rx", VAR_1->data, VAR_3);
}
