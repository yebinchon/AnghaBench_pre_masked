
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int node_id; int selfid_count; int * topology_map; scalar_t__ in_bus_reset; } ;
typedef int quadlet_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct hpsb_host *VAR_0, quadlet_t VAR_1)
{
 if (VAR_0->in_bus_reset) {
  FUNC_1("Including SelfID 0x%x", VAR_1);
  VAR_0->topology_map[VAR_0->selfid_count++] = VAR_1;
 } else {
  FUNC_0("Spurious SelfID packet (0x%08x) received from bus %d",
       VAR_1, FUNC_2(VAR_0->node_id));
 }
}
