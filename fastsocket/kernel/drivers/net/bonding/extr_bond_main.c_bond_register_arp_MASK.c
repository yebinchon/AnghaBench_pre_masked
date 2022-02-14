
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_type {int func; int dev; scalar_t__ type; } ;
struct bonding {int dev; struct packet_type arp_mon_pt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct packet_type*) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(struct bonding *VAR_2)
{
 struct packet_type *VAR_3 = &VAR_2->arp_mon_pt;

 if (VAR_3->type)
  return;

 VAR_3->type = FUNC_1(VAR_0);
 VAR_3->dev = VAR_2->dev;
 VAR_3->func = VAR_1;
 FUNC_0(VAR_3);
}
