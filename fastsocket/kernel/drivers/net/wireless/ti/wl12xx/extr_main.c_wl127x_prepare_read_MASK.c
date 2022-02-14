
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl12xx_priv {TYPE_2__* rx_mem_addr; } ;
struct wl1271_acx_mem_map {int packet_memory_pool_start; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct wl1271 {struct wl12xx_priv* priv; struct wl1271_acx_mem_map* target_mem_map; TYPE_1__ chip; } ;
struct TYPE_4__ {scalar_t__ addr; scalar_t__ addr_extra; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wl1271*,int ,TYPE_2__*,int,int) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_3, u32 VAR_4, u32 VAR_5)
{
 int VAR_6;

 if (VAR_3->chip.id != VAR_0) {
  struct wl1271_acx_mem_map *VAR_7 = VAR_3->target_mem_map;
  struct wl12xx_priv *VAR_8 = VAR_3->priv;






  u32 VAR_9 = VAR_4 & VAR_1;

  VAR_8->rx_mem_addr->addr = (VAR_9 << 8) +
   FUNC_0(VAR_7->packet_memory_pool_start);

  VAR_8->rx_mem_addr->addr_extra = VAR_8->rx_mem_addr->addr + 4;

  VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_8->rx_mem_addr,
       sizeof(*VAR_8->rx_mem_addr), 0);
  if (VAR_6 < 0)
   return VAR_6;
 }

 return 0;
}
