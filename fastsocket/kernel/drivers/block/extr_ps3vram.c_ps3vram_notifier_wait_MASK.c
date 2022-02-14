
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ps3vram_priv {int reports; } ;
struct ps3_system_bus_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 struct ps3vram_priv* FUNC_2 (struct ps3_system_bus_device*) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ps3_system_bus_device *VAR_3,
     unsigned int VAR_4)
{
 struct ps3vram_priv *VAR_5 = FUNC_2(VAR_3);
 u32 *VAR_6 = FUNC_3(VAR_5->reports, VAR_1);
 unsigned long VAR_7 = VAR_2 + FUNC_0(VAR_4);

 do {
  if (!VAR_6[3])
   return 0;
  FUNC_1(1);
 } while (FUNC_4(VAR_2, VAR_7));

 return -VAR_0;
}
