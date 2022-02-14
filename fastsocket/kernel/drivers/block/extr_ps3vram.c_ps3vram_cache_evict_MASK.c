
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3vram_cache {int page_size; TYPE_1__* tags; } ;
struct ps3vram_priv {struct ps3vram_cache cache; } ;
struct ps3_system_bus_device {int core; } ;
struct TYPE_2__ {int flags; int address; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (int *,char*,int,int ,int) ;
 struct ps3vram_priv* FUNC_2 (struct ps3_system_bus_device*) ;
 scalar_t__ FUNC_3 (struct ps3_system_bus_device*,scalar_t__,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct ps3_system_bus_device *VAR_3, int VAR_4)
{
 struct ps3vram_priv *VAR_5 = FUNC_2(VAR_3);
 struct ps3vram_cache *VAR_6 = &VAR_5->cache;

 if (!(VAR_6->tags[VAR_4].flags & VAR_1))
  return;

 FUNC_0(&VAR_3->core, "Flushing %d: 0x%08x\n", VAR_4,
  VAR_6->tags[VAR_4].address);
 if (FUNC_3(VAR_3, VAR_0 + VAR_4 * VAR_6->page_size,
      VAR_6->tags[VAR_4].address, VAR_2,
      VAR_6->page_size / VAR_2) < 0) {
  FUNC_1(&VAR_3->core,
   "Failed to upload from 0x%x to " "0x%x size 0x%x\n",
   VAR_4 * VAR_6->page_size, VAR_6->tags[VAR_4].address,
   VAR_6->page_size);
 }
 VAR_6->tags[VAR_4].flags &= ~VAR_1;
}
