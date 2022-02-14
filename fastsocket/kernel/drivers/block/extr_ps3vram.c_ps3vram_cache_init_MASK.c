
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps3vram_tag {int dummy; } ;
struct TYPE_2__ {int page_count; int page_size; int * tags; } ;
struct ps3vram_priv {TYPE_1__ cache; } ;
struct ps3_system_bus_device {int core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int,int) ;
 int * FUNC_2 (int,int ) ;
 struct ps3vram_priv* FUNC_3 (struct ps3_system_bus_device*) ;

__attribute__((used)) static int FUNC_4(struct ps3_system_bus_device *VAR_4)
{
 struct ps3vram_priv *VAR_5 = FUNC_3(VAR_4);

 VAR_5->cache.page_count = VAR_0;
 VAR_5->cache.page_size = VAR_1;
 VAR_5->cache.tags = FUNC_2(sizeof(struct ps3vram_tag) *
       VAR_0, VAR_3);
 if (VAR_5->cache.tags == ((void*)0)) {
  FUNC_0(&VAR_4->core, "Could not allocate cache tags\n");
  return -VAR_2;
 }

 FUNC_1(&VAR_4->core, "Created ram cache: %d entries, %d KiB each\n",
  VAR_0, VAR_1 / 1024);

 return 0;
}
