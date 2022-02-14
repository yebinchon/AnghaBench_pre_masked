
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mal_instance {int num_tx_chans; int num_rx_chans; TYPE_2__* ofdev; } ;
struct TYPE_4__ {TYPE_1__* node; } ;
struct TYPE_3__ {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct mal_instance*,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(struct mal_instance *VAR_11)
{
 int VAR_12;

 FUNC_4("** MAL %s Registers **\n"
        "CFG = 0x%08x ESR = 0x%08x IER = 0x%08x\n"
        "TX|CASR = 0x%08x CARR = 0x%08x EOBISR = 0x%08x DEIR = 0x%08x\n"
        "RX|CASR = 0x%08x CARR = 0x%08x EOBISR = 0x%08x DEIR = 0x%08x\n",
        VAR_11->ofdev->node->full_name,
        FUNC_3(VAR_11, VAR_0), FUNC_3(VAR_11, VAR_1),
        FUNC_3(VAR_11, VAR_2),
        FUNC_3(VAR_11, VAR_8), FUNC_3(VAR_11, VAR_7),
        FUNC_3(VAR_11, VAR_10), FUNC_3(VAR_11, VAR_9),
        FUNC_3(VAR_11, VAR_4), FUNC_3(VAR_11, VAR_3),
        FUNC_3(VAR_11, VAR_6), FUNC_3(VAR_11, VAR_5)
     );

 FUNC_4("TX|");
 for (VAR_12 = 0; VAR_12 < VAR_11->num_tx_chans; ++VAR_12) {
  if (VAR_12 && !(VAR_12 % 4))
   FUNC_4("\n   ");
  FUNC_4("CTP%d = 0x%08x ", VAR_12, FUNC_3(VAR_11, FUNC_2(VAR_12)));
 }
 FUNC_4("\nRX|");
 for (VAR_12 = 0; VAR_12 < VAR_11->num_rx_chans; ++VAR_12) {
  if (VAR_12 && !(VAR_12 % 4))
   FUNC_4("\n   ");
  FUNC_4("CTP%d = 0x%08x ", VAR_12, FUNC_3(VAR_11, FUNC_1(VAR_12)));
 }
 FUNC_4("\n   ");
 for (VAR_12 = 0; VAR_12 < VAR_11->num_rx_chans; ++VAR_12) {
  u32 VAR_13 = FUNC_3(VAR_11, FUNC_0(VAR_12));
  if (VAR_12 && !(VAR_12 % 3))
   FUNC_4("\n   ");
  FUNC_4("RCBS%d = 0x%08x (%d) ", VAR_12, VAR_13, VAR_13 * 16);
 }
 FUNC_4("\n");
}
