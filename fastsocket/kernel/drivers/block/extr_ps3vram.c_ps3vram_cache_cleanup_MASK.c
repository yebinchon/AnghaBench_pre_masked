
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tags; } ;
struct ps3vram_priv {TYPE_1__ cache; } ;
struct ps3_system_bus_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct ps3vram_priv* FUNC_1 (struct ps3_system_bus_device*) ;
 int FUNC_2 (struct ps3_system_bus_device*) ;

__attribute__((used)) static void FUNC_3(struct ps3_system_bus_device *VAR_0)
{
 struct ps3vram_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_0(VAR_1->cache.tags);
}
