
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rx_errors; int tx_errors; } ;
struct net_device {int name; TYPE_1__ stats; } ;
struct lance_regs {int rap; int rdp; } ;
struct lance_private {struct lance_regs* ll; } ;
typedef int irqreturn_t ;


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
 int FUNC_0 (struct lance_private*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct lance_private*) ;
 struct lance_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int*,int) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_12, void *VAR_13)
{
 struct net_device *VAR_14 = VAR_13;
 struct lance_private *VAR_15 = FUNC_5(VAR_14);
 volatile struct lance_regs *VAR_16 = VAR_15->ll;
 int VAR_17;

 FUNC_8(&VAR_16->rap, VAR_11);
 VAR_17 = VAR_16->rdp;


 FUNC_8(&VAR_16->rdp, VAR_17 & (VAR_5 | VAR_10 | VAR_8));

 if ((VAR_17 & VAR_3)) {

  FUNC_8(&VAR_16->rdp, VAR_1 | VAR_3 | VAR_7 |
    VAR_2 | VAR_6);
 }
 if (VAR_17 & VAR_8)
  FUNC_2(VAR_14);

 if (VAR_17 & VAR_10)
  FUNC_3(VAR_14);

 if (VAR_17 & VAR_1)
  VAR_14->stats.tx_errors++;

 if (VAR_17 & VAR_7)
  VAR_14->stats.rx_errors++;

 if (VAR_17 & VAR_6) {
  FUNC_7("%s: Memory error, status %04x\n", VAR_14->name, VAR_17);

  FUNC_8(&VAR_16->rdp, VAR_9);

  FUNC_1(VAR_14);
  FUNC_4(VAR_15);
  FUNC_0(VAR_15);
  FUNC_6(VAR_14);
 }

 FUNC_8(&VAR_16->rdp, VAR_4);
 FUNC_8(&VAR_16->rdp, VAR_4);
 return VAR_0;
}
