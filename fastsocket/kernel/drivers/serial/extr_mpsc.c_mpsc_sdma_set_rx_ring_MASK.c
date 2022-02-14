
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mpsc_rx_desc {int dummy; } ;
struct TYPE_2__ {int line; } ;
struct mpsc_port_info {scalar_t__ sdma_base; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mpsc_port_info *VAR_1,
  struct mpsc_rx_desc *VAR_2)
{
 FUNC_0("mpsc_sdma_set_rx_ring[%d]: rxre_p: 0x%x\n",
  VAR_1->port.line, (u32)VAR_2);

 FUNC_1((u32)VAR_2, VAR_1->sdma_base + VAR_0);
}
