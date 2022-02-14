
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_packets; scalar_t__ collisions; int tx_fifo_errors; int tx_carrier_errors; int tx_window_errors; int tx_aborted_errors; int tx_errors; } ;
struct net_device {TYPE_1__ stats; int name; } ;
struct lance_tx_desc {int tmd1_bits; int misc; } ;
struct lance_private {int tx_old; int tx_new; int tx_ring_mod_mask; scalar_t__ tpe; scalar_t__ auto_select; struct lance_init_block* init_block; } ;
struct lance_init_block {struct lance_tx_desc* btx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct lance_private*,int ) ;
 int FUNC_1 (struct lance_private*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct lance_private*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct lance_private*) ;
 struct lance_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ,...) ;

__attribute__((used)) static int FUNC_8 (struct net_device *VAR_14)
{
        struct lance_private *VAR_15 = FUNC_6(VAR_14);
        volatile struct lance_init_block *VAR_16 = VAR_15->init_block;
        volatile struct lance_tx_desc *VAR_17;
        int VAR_18, VAR_19;
        int VAR_20;





        FUNC_1(VAR_15, VAR_2 | VAR_0);


        VAR_19 = VAR_15->tx_old;
        for (VAR_18 = VAR_19; VAR_18 != VAR_15->tx_new; VAR_18 = VAR_19) {
                VAR_17 = &VAR_16->btx_ring [VAR_18];


                if (VAR_17->tmd1_bits & VAR_7)
                        break;

                if (VAR_17->tmd1_bits & VAR_6) {
                        VAR_20 = VAR_17->misc;

                        VAR_14->stats.tx_errors++;
                        if (VAR_20 & VAR_12) VAR_14->stats.tx_aborted_errors++;
                        if (VAR_20 & VAR_11) VAR_14->stats.tx_window_errors++;

                        if (VAR_20 & VAR_10) {
                                VAR_14->stats.tx_carrier_errors++;
                                if (VAR_15->auto_select) {
                                        VAR_15->tpe = 1 - VAR_15->tpe;
                                        FUNC_7("%s: Carrier Lost, trying %s\n",
                                               VAR_14->name, VAR_15->tpe?"TPE":"AUI");

                                        FUNC_0(VAR_15, VAR_3);
                                        FUNC_1(VAR_15, VAR_1);
                                        FUNC_4 (VAR_14);
                                        FUNC_5 (VAR_15);
                                        FUNC_3 (VAR_15);
                                        return 0;
                                }
                        }



                        if (VAR_20 & (VAR_9|VAR_13)) {
                                VAR_14->stats.tx_fifo_errors++;

                                FUNC_7 ("%s: Tx: ERR_BUF|ERR_UFL, restarting\n",
                                        VAR_14->name);

                                FUNC_0(VAR_15, VAR_3);
                                FUNC_1(VAR_15, VAR_1);
                                FUNC_4 (VAR_14);
                                FUNC_5 (VAR_15);
                                FUNC_3 (VAR_15);
                                return 0;
                        }
                } else if ((VAR_17->tmd1_bits & VAR_8) == VAR_8) {



                        VAR_17->tmd1_bits &= ~(VAR_8);


                        if (VAR_17->tmd1_bits & VAR_5)
                                VAR_14->stats.collisions++;


                        if (VAR_17->tmd1_bits & VAR_4)
                                VAR_14->stats.collisions += 2;

                        VAR_14->stats.tx_packets++;
                }

                VAR_19 = (VAR_19 + 1) & VAR_15->tx_ring_mod_mask;
        }
        VAR_15->tx_old = VAR_19;
        FUNC_1(VAR_15, VAR_2 | VAR_0);
        return 0;
}
