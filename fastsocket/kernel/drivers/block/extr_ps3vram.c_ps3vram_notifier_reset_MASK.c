
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ps3vram_priv {int reports; } ;
struct ps3_system_bus_device {int dummy; } ;


 int VAR_0 ;
 struct ps3vram_priv* FUNC_0 (struct ps3_system_bus_device*) ;
 int* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ps3_system_bus_device *VAR_1)
{
 struct ps3vram_priv *VAR_2 = FUNC_0(VAR_1);
 u32 *VAR_3 = FUNC_1(VAR_2->reports, VAR_0);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_3[VAR_4] = 0xffffffff;
}
