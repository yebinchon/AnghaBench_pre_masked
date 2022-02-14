
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps3vram_priv {scalar_t__* ctrl; } ;
struct ps3_system_bus_device {int core; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,scalar_t__,scalar_t__,scalar_t__) ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned int) ;
 int FUNC_2 (int) ;
 struct ps3vram_priv* FUNC_3 (struct ps3_system_bus_device*) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ps3_system_bus_device *VAR_5,
        unsigned int VAR_6)
{
 struct ps3vram_priv *VAR_7 = FUNC_3(VAR_5);
 unsigned long VAR_8 = VAR_4 + FUNC_1(VAR_6);

 do {
  if (VAR_7->ctrl[VAR_1] == VAR_7->ctrl[VAR_0])
   return 0;
  FUNC_2(1);
 } while (FUNC_4(VAR_4, VAR_8));

 FUNC_0(&VAR_5->core, "FIFO timeout (%08x/%08x/%08x)\n",
   VAR_7->ctrl[VAR_1], VAR_7->ctrl[VAR_0],
   VAR_7->ctrl[VAR_2]);

 return -VAR_3;
}
