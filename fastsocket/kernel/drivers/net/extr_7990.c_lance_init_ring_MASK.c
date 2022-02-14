
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * dev_addr; } ;
struct lance_private {int lance_log_tx_bufs; int lance_log_rx_bufs; scalar_t__ tx_full; scalar_t__ tx_old; scalar_t__ rx_old; scalar_t__ tx_new; scalar_t__ rx_new; struct lance_init_block* lance_init_block; struct lance_init_block* init_block; } ;
struct lance_init_block {int rx_len; int rx_ptr; int tx_len; int tx_ptr; scalar_t__* filter; TYPE_1__* btx_ring; TYPE_1__* brx_ring; TYPE_1__*** rx_buf; TYPE_1__*** tx_buf; int * phys_addr; int mode; } ;
struct TYPE_2__ {int tmd0; int tmd1_hadr; int length; int rmd0; int rmd1_hadr; scalar_t__ mblength; int rmd1_bits; scalar_t__ misc; scalar_t__ tmd1_bits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__**) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 struct lance_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void FUNC_4 (struct net_device *VAR_4)
{
        struct lance_private *VAR_5 = FUNC_2(VAR_4);
        volatile struct lance_init_block *VAR_6 = VAR_5->init_block;
        volatile struct lance_init_block *VAR_7;
        int VAR_8;
        int VAR_9;

        VAR_7 = VAR_5->lance_init_block;

        VAR_5->rx_new = VAR_5->tx_new = 0;
        VAR_5->rx_old = VAR_5->tx_old = 0;

        VAR_6->mode = VAR_1;
        for (VAR_9=0; VAR_9<6; VAR_9++)
           VAR_6->phys_addr[VAR_9] = VAR_4->dev_addr[VAR_9];


        if (VAR_0)
                FUNC_3 ("TX rings:\n");

 VAR_5->tx_full = 0;

        for (VAR_9 = 0; VAR_9 < (1<<VAR_5->lance_log_tx_bufs); VAR_9++) {
                VAR_8 = FUNC_0(&VAR_7->tx_buf[VAR_9][0]);
                VAR_6->btx_ring [VAR_9].tmd0 = VAR_8;
                VAR_6->btx_ring [VAR_9].tmd1_hadr = VAR_8 >> 16;
                VAR_6->btx_ring [VAR_9].tmd1_bits = 0;
                VAR_6->btx_ring [VAR_9].length = 0xf000;
                VAR_6->btx_ring [VAR_9].misc = 0;
                if (VAR_0)
                   FUNC_3 ("%d: 0x%8.8x\n", VAR_9, VAR_8);
        }


        if (VAR_0)
                FUNC_3 ("RX rings:\n");
        for (VAR_9 = 0; VAR_9 < (1<<VAR_5->lance_log_rx_bufs); VAR_9++) {
                VAR_8 = FUNC_0(&VAR_7->rx_buf[VAR_9][0]);

                VAR_6->brx_ring [VAR_9].rmd0 = VAR_8;
                VAR_6->brx_ring [VAR_9].rmd1_hadr = VAR_8 >> 16;
                VAR_6->brx_ring [VAR_9].rmd1_bits = VAR_2;

                VAR_6->brx_ring [VAR_9].length = -VAR_3 | 0xf000;
                VAR_6->brx_ring [VAR_9].mblength = 0;
                if (VAR_0)
                        FUNC_3 ("%d: 0x%8.8x\n", VAR_9, VAR_8);
        }




        VAR_8 = FUNC_0(&VAR_7->brx_ring);
        VAR_6->rx_len = (VAR_5->lance_log_rx_bufs << 13) | (VAR_8 >> 16);
        VAR_6->rx_ptr = VAR_8;
        if (VAR_0)
                FUNC_3 ("RX ptr: %8.8x\n", VAR_8);


        VAR_8 = FUNC_0(&VAR_7->btx_ring);
        VAR_6->tx_len = (VAR_5->lance_log_tx_bufs << 13) | (VAR_8 >> 16);
        VAR_6->tx_ptr = VAR_8;
        if (VAR_0)
                FUNC_3 ("TX ptr: %8.8x\n", VAR_8);


        VAR_6->filter [0] = 0;
        VAR_6->filter [1] = 0;
        FUNC_1();
}
