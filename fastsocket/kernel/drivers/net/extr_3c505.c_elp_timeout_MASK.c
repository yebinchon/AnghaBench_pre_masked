
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; int trans_start; int name; int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ,char*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->base_addr);
 FUNC_3("%s: transmit timed out, lost %s?\n", VAR_3->name,
     (VAR_4 & VAR_0) ? "interrupt" : "command");
 if (VAR_1 >= 1)
  FUNC_2("%s: status %#02x\n", VAR_3->name, VAR_4);
 VAR_3->trans_start = VAR_2;
 VAR_3->stats.tx_dropped++;
 FUNC_1(VAR_3);
}
