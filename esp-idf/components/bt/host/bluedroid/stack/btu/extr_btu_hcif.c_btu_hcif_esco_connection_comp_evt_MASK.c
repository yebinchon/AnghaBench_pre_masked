
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bd_addr; int air_mode; int tx_pkt_len; int rx_pkt_len; int retrans_window; int tx_interval; int link_type; } ;
typedef TYPE_1__ tBTM_ESCO_DATA ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5 (UINT8 *VAR_1)
{

    tBTM_ESCO_DATA VAR_2;
    UINT16 VAR_3;
    BD_ADDR VAR_4;
    UINT8 VAR_5;

    FUNC_2 (VAR_5, VAR_1);
    FUNC_1 (VAR_3, VAR_1);
    FUNC_0 (VAR_4, VAR_1);

    FUNC_2 (VAR_2.link_type, VAR_1);
    FUNC_2 (VAR_2.tx_interval, VAR_1);
    FUNC_2 (VAR_2.retrans_window, VAR_1);
    FUNC_1 (VAR_2.rx_pkt_len, VAR_1);
    FUNC_1 (VAR_2.tx_pkt_len, VAR_1);
    FUNC_2 (VAR_2.air_mode, VAR_1);

    FUNC_4 (VAR_2.bd_addr, VAR_4, VAR_0);
    FUNC_3 (VAR_5, VAR_4, VAR_3, &VAR_2);

}
