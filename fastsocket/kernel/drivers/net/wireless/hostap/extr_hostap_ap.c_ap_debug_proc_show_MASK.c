
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ap_data* private; } ;
struct ap_data {int bridged_unicast; int bridged_multicast; int max_inactivity; int bridge_packets; int nullfunc_ack; int autom_ap_wds; int tx_drop_nonassoc; TYPE_1__* local; } ;
struct TYPE_2__ {int auth_algs; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct ap_data *VAR_3 = VAR_1->private;

 FUNC_0(VAR_1, "BridgedUnicastFrames=%u\n", VAR_3->bridged_unicast);
 FUNC_0(VAR_1, "BridgedMulticastFrames=%u\n", VAR_3->bridged_multicast);
 FUNC_0(VAR_1, "max_inactivity=%u\n", VAR_3->max_inactivity / VAR_0);
 FUNC_0(VAR_1, "bridge_packets=%u\n", VAR_3->bridge_packets);
 FUNC_0(VAR_1, "nullfunc_ack=%u\n", VAR_3->nullfunc_ack);
 FUNC_0(VAR_1, "autom_ap_wds=%u\n", VAR_3->autom_ap_wds);
 FUNC_0(VAR_1, "auth_algs=%u\n", VAR_3->local->auth_algs);
 FUNC_0(VAR_1, "tx_drop_nonassoc=%u\n", VAR_3->tx_drop_nonassoc);
 return 0;
}
