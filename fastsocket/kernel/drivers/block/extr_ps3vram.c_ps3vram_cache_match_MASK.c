
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3vram_cache {int page_size; int page_count; int miss; TYPE_1__* tags; int hit; } ;
struct ps3vram_priv {struct ps3vram_cache cache; } ;
struct ps3_system_bus_device {int core; } ;
typedef int loff_t ;
struct TYPE_2__ {int flags; unsigned int address; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int VAR_1 ;
 struct ps3vram_priv* FUNC_1 (struct ps3_system_bus_device*) ;
 int FUNC_2 (struct ps3_system_bus_device*,int) ;
 int FUNC_3 (struct ps3_system_bus_device*,int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct ps3_system_bus_device *VAR_2,
     loff_t VAR_3)
{
 struct ps3vram_priv *VAR_4 = FUNC_1(VAR_2);
 struct ps3vram_cache *VAR_5 = &VAR_4->cache;
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 static int VAR_9;

 VAR_7 = (unsigned int) (VAR_3 & (VAR_5->page_size - 1));
 VAR_6 = (unsigned int) (VAR_3 - VAR_7);


 for (VAR_8 = 0; VAR_8 < VAR_5->page_count; VAR_8++) {
  if ((VAR_5->tags[VAR_8].flags & VAR_0) &&
      VAR_5->tags[VAR_8].address == VAR_6) {
   VAR_5->hit++;
   FUNC_0(&VAR_2->core, "Found entry %d: 0x%08x\n", VAR_8,
    VAR_5->tags[VAR_8].address);
   return VAR_8;
  }
 }


 VAR_8 = (VAR_1 + (VAR_9++)) % VAR_5->page_count;
 FUNC_0(&VAR_2->core, "Using entry %d\n", VAR_8);

 FUNC_2(VAR_2, VAR_8);
 FUNC_3(VAR_2, VAR_8, VAR_6);

 VAR_5->miss++;
 return VAR_8;
}
