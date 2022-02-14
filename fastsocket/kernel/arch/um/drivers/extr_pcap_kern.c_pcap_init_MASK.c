
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_net_private {scalar_t__ user; } ;
struct pcap_init {int filter; int optimize; int promisc; int host_if; } ;
struct pcap_data {int host_if; int filter; int optimize; int promisc; } ;
struct net_device {int dummy; } ;


 struct uml_net_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 struct uml_net_private *VAR_2;
 struct pcap_data *VAR_3;
 struct pcap_init *VAR_4 = VAR_1;

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = (struct pcap_data *) VAR_2->user;
 VAR_3->host_if = VAR_4->host_if;
 VAR_3->promisc = VAR_4->promisc;
 VAR_3->optimize = VAR_4->optimize;
 VAR_3->filter = VAR_4->filter;

 FUNC_1("pcap backend, host interface %s\n", VAR_3->host_if);
}
