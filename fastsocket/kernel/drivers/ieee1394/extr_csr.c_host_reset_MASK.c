
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int state; int bus_manager_id; int bandwidth_available; int channels_available_hi; int broadcast_channel; int node_ids; void** speed_map; void** topology_map; int channels_available_lo; } ;
struct hpsb_host {int node_id; int node_count; int selfid_count; TYPE_2__ csr; int is_root; TYPE_1__* driver; scalar_t__ is_irm; } ;
struct TYPE_3__ {int (* hw_csr_reg ) (struct hpsb_host*,int,int,int ) ;} ;


 int FUNC_0 (void**,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void**,int) ;
 int FUNC_3 (struct hpsb_host*,int,int,int ) ;

__attribute__((used)) static void FUNC_4(struct hpsb_host *VAR_0)
{
        VAR_0->csr.state &= 0x300;

        VAR_0->csr.bus_manager_id = 0x3f;
        VAR_0->csr.bandwidth_available = 4915;
 VAR_0->csr.channels_available_hi = 0xfffffffe;
        VAR_0->csr.channels_available_lo = ~0;
 VAR_0->csr.broadcast_channel = 0x80000000 | 31;

 if (VAR_0->is_irm) {
  if (VAR_0->driver->hw_csr_reg) {
   VAR_0->driver->hw_csr_reg(VAR_0, 2, 0xfffffffe, ~0);
  }
 }

        VAR_0->csr.node_ids = VAR_0->node_id << 16;

        if (!VAR_0->is_root) {

                VAR_0->csr.state &= ~0x100;
        }

 FUNC_0(&VAR_0->csr.topology_map[1], 1);
        VAR_0->csr.topology_map[2] = FUNC_1(VAR_0->node_count << 16
                                                | VAR_0->selfid_count);
        VAR_0->csr.topology_map[0] =
                FUNC_1((VAR_0->selfid_count + 2) << 16
                            | FUNC_2(VAR_0->csr.topology_map + 1,
                                        VAR_0->selfid_count + 2));

 FUNC_0(&VAR_0->csr.speed_map[1], 1);
        VAR_0->csr.speed_map[0] = FUNC_1(0x3f1 << 16
                                             | FUNC_2(VAR_0->csr.speed_map+1,
                                                         0x3f1));
}
