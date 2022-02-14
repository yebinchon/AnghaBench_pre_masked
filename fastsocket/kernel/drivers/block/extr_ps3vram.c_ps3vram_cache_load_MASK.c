
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3vram_cache {int page_size; TYPE_1__* tags; } ;
struct ps3vram_priv {struct ps3vram_cache cache; } ;
struct ps3_system_bus_device {int core; } ;
struct TYPE_2__ {unsigned int address; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,unsigned int) ;
 int FUNC_1 (int *,char*,unsigned int,int,int) ;
 struct ps3vram_priv* FUNC_2 (struct ps3_system_bus_device*) ;
 scalar_t__ FUNC_3 (struct ps3_system_bus_device*,unsigned int,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_4(struct ps3_system_bus_device *VAR_3, int VAR_4,
          unsigned int VAR_5)
{
 struct ps3vram_priv *VAR_6 = FUNC_2(VAR_3);
 struct ps3vram_cache *VAR_7 = &VAR_6->cache;

 FUNC_0(&VAR_3->core, "Fetching %d: 0x%08x\n", VAR_4, VAR_5);
 if (FUNC_3(VAR_3, VAR_5,
        VAR_0 + VAR_4 * VAR_7->page_size,
        VAR_2,
        VAR_7->page_size / VAR_2) < 0) {
  FUNC_1(&VAR_3->core,
   "Failed to download from 0x%x to 0x%x size 0x%x\n",
   VAR_5, VAR_4 * VAR_7->page_size, VAR_7->page_size);
 }

 VAR_7->tags[VAR_4].address = VAR_5;
 VAR_7->tags[VAR_4].flags |= VAR_1;
}
