
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct selfid {int phy_id; scalar_t__ port0; scalar_t__ port1; scalar_t__ port2; scalar_t__ contender; scalar_t__ link_active; int extended; } ;
struct hpsb_host {int selfid_count; int irm_id; int node_count; scalar_t__ nodes_active; scalar_t__ topology_map; } ;
struct ext_selfid {int phy_id; int seq_nr; scalar_t__ porta; scalar_t__ portb; scalar_t__ portc; scalar_t__ portd; scalar_t__ porte; scalar_t__ portf; scalar_t__ portg; scalar_t__ porth; scalar_t__ extended; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct hpsb_host *VAR_2)
{
 int VAR_3 = -1;
 int VAR_4 = VAR_2->selfid_count;
 struct selfid *VAR_5 = (struct selfid *)VAR_2->topology_map;
 struct ext_selfid *VAR_6;
 int VAR_7 = 23;

 VAR_2->nodes_active = 0;

 while (VAR_4--) {
  if (!VAR_5->extended) {
   VAR_3++;
   VAR_7 = 0;

   if (VAR_5->phy_id != VAR_3) {
    FUNC_0("SelfIDs failed monotony check with "
       "%d", VAR_5->phy_id);
    return 0;
   }

   if (VAR_5->link_active) {
    VAR_2->nodes_active++;
    if (VAR_5->contender)
     VAR_2->irm_id = VAR_0 | VAR_5->phy_id;
   }
  } else {
   VAR_6 = (struct ext_selfid *)VAR_5;

   if ((VAR_6->phy_id != VAR_3)
       || (VAR_6->seq_nr != VAR_7)) {
    FUNC_0("SelfIDs failed monotony check with "
       "%d/%d", VAR_6->phy_id, VAR_6->seq_nr);
    return 0;
   }
   VAR_7++;
  }
  VAR_5++;
 }

 VAR_6 = (struct ext_selfid *)(VAR_5 - 1);
 while (VAR_6->extended) {
  if ((VAR_6->porta == VAR_1) ||
      (VAR_6->portb == VAR_1) ||
      (VAR_6->portc == VAR_1) ||
      (VAR_6->portd == VAR_1) ||
      (VAR_6->porte == VAR_1) ||
      (VAR_6->portf == VAR_1) ||
      (VAR_6->portg == VAR_1) ||
      (VAR_6->porth == VAR_1)) {
   FUNC_0("SelfIDs failed root check on "
      "extended SelfID");
   return 0;
  }
  VAR_6--;
 }

 VAR_5 = (struct selfid *)VAR_6;
 if ((VAR_5->port0 == VAR_1) ||
     (VAR_5->port1 == VAR_1) ||
     (VAR_5->port2 == VAR_1)) {
  FUNC_0("SelfIDs failed root check");
  return 0;
 }

 VAR_2->node_count = VAR_3 + 1;
 return 1;
}
