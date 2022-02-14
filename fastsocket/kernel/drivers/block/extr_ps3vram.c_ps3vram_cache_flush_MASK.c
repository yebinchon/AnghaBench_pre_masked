
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3vram_cache {int page_count; TYPE_1__* tags; } ;
struct ps3vram_priv {struct ps3vram_cache cache; } ;
struct ps3_system_bus_device {int core; } ;
struct TYPE_2__ {scalar_t__ flags; } ;


 int FUNC_0 (int *,char*) ;
 struct ps3vram_priv* FUNC_1 (struct ps3_system_bus_device*) ;
 int FUNC_2 (struct ps3_system_bus_device*,int) ;

__attribute__((used)) static void FUNC_3(struct ps3_system_bus_device *VAR_0)
{
 struct ps3vram_priv *VAR_1 = FUNC_1(VAR_0);
 struct ps3vram_cache *VAR_2 = &VAR_1->cache;
 int VAR_3;

 FUNC_0(&VAR_0->core, "FLUSH\n");
 for (VAR_3 = 0; VAR_3 < VAR_2->page_count; VAR_3++) {
  FUNC_2(VAR_0, VAR_3);
  VAR_2->tags[VAR_3].flags = 0;
 }
}
