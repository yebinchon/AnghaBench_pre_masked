
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fw_card {int* topology_map; TYPE_1__* root_node; } ;
struct TYPE_2__ {int node_id; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_0,
    u32 *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_0->topology_map[1]++;
 VAR_3 = (VAR_0->root_node->node_id & 0x3f) + 1;
 VAR_0->topology_map[2] = (VAR_3 << 16) | VAR_2;
 VAR_0->topology_map[0] = (VAR_2 + 2) << 16;
 FUNC_1(&VAR_0->topology_map[3], VAR_1, VAR_2 * 4);
 FUNC_0(VAR_0->topology_map);
}
