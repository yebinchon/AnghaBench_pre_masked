
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct hpsb_host {int dummy; } ;
struct eth1394_priv {struct hpsb_host* host; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct hpsb_host*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct hpsb_host *VAR_2 =
   ((struct eth1394_priv *)FUNC_2(VAR_1))->host;

 FUNC_0(VAR_0, VAR_1->name, "Timeout, resetting host\n");
 FUNC_1(VAR_2);
}
