
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3vram_priv {int dummy; } ;
struct ps3_system_bus_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ps3vram_priv* FUNC_0 (struct ps3_system_bus_device*) ;
 int FUNC_1 (struct ps3vram_priv*,int ,int,int) ;
 int FUNC_2 (struct ps3_system_bus_device*) ;
 int FUNC_3 (struct ps3vram_priv*,int) ;

__attribute__((used)) static void FUNC_4(struct ps3_system_bus_device *VAR_4)
{
 struct ps3vram_priv *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_5, VAR_3, 0, 1);
 FUNC_3(VAR_5, 0x31337303);
 FUNC_1(VAR_5, VAR_3, 0x180, 3);
 FUNC_3(VAR_5, VAR_0 + VAR_2);
 FUNC_3(VAR_5, 0xfeed0001);
 FUNC_3(VAR_5, 0xfeed0000);

 FUNC_1(VAR_5, VAR_1, 0, 1);
 FUNC_3(VAR_5, 0x3137c0de);
 FUNC_1(VAR_5, VAR_1, 0x180, 3);
 FUNC_3(VAR_5, VAR_0 + VAR_2);
 FUNC_3(VAR_5, 0xfeed0000);
 FUNC_3(VAR_5, 0xfeed0001);

 FUNC_2(VAR_4);
}
