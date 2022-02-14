
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_type {scalar_t__ type; } ;
struct bonding {struct packet_type arp_mon_pt; } ;


 int FUNC_0 (struct packet_type*) ;

void FUNC_1(struct bonding *VAR_0)
{
 struct packet_type *VAR_1 = &VAR_0->arp_mon_pt;

 FUNC_0(VAR_1);
 VAR_1->type = 0;
}
