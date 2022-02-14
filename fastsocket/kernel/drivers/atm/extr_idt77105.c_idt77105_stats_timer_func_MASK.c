
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct idt77105_stats {int rx_hec_errors; int rx_cells; int tx_cells; int symbol_errors; } ;
struct idt77105_priv {struct idt77105_stats stats; struct atm_dev* dev; struct idt77105_priv* next; } ;
struct atm_dev {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (struct atm_dev*,int ) ;
 struct idt77105_priv* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_9)
{
 struct idt77105_priv *VAR_10;
 struct atm_dev *VAR_11;
 struct idt77105_stats *VAR_12;

        FUNC_0("IDT77105 gathering statistics\n");
 for (VAR_10 = VAR_5; VAR_10; VAR_10 = VAR_10->next) {
  VAR_11 = VAR_10->dev;

  VAR_12 = &VAR_10->stats;
                VAR_12->symbol_errors += FUNC_1(VAR_11, VAR_2);
                VAR_12->tx_cells += FUNC_1(VAR_11, VAR_3);
                VAR_12->rx_cells += FUNC_1(VAR_11, VAR_0);
                VAR_12->rx_hec_errors += FUNC_1(VAR_11, VAR_1);
 }
        if (!VAR_7) FUNC_2(&VAR_8,VAR_6+VAR_4);
}
