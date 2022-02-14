
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct TYPE_11__ {char* name; int * virt; int size; int bankwidth; scalar_t__ phys; } ;
struct platram_info {int free_partitions; TYPE_3__* mtd; int partitions; TYPE_2__ map; int * area; struct platdata_mtd_ram* pdata; TYPE_5__* dev; } ;
struct TYPE_13__ {struct platdata_mtd_ram* platform_data; } ;
struct platform_device {TYPE_5__ dev; scalar_t__ name; } ;
struct platdata_mtd_ram {char** map_probes; int nr_partitions; int partitions; scalar_t__ probes; int bankwidth; int * mapname; } ;
struct TYPE_10__ {TYPE_5__* parent; } ;
struct TYPE_12__ {TYPE_1__ dev; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 int FUNC_3 (TYPE_5__*,char*) ;
 int FUNC_4 (TYPE_5__*,char*) ;
 void* FUNC_5 (char const*,TYPE_2__*) ;
 int * FUNC_6 (scalar_t__,int ) ;
 struct platram_info* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,int *,int ) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct platram_info*) ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (struct platram_info*,int ) ;
 int * FUNC_13 (scalar_t__,int ,scalar_t__) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_7)
{
 struct platdata_mtd_ram *VAR_8;
 struct platram_info *VAR_9;
 struct resource *VAR_10;
 int VAR_11 = 0;

 FUNC_2(&VAR_7->dev, "probe entered\n");

 if (VAR_7->dev.platform_data == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "no platform data supplied\n");
  VAR_11 = -VAR_1;
  goto exit_error;
 }

 VAR_8 = VAR_7->dev.platform_data;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_3);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "no memory for flash info\n");
  VAR_11 = -VAR_2;
  goto exit_error;
 }

 FUNC_10(VAR_7, VAR_9);

 VAR_9->dev = &VAR_7->dev;
 VAR_9->pdata = VAR_8;



 VAR_10 = FUNC_9(VAR_7, VAR_4, 0);

 if (VAR_10 == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "no memory resource specified\n");
  VAR_11 = -VAR_1;
  goto exit_free;
 }

 FUNC_2(&VAR_7->dev, "got platform resource %p (0x%llx)\n", VAR_10,
  (unsigned long long)VAR_10->start);



 VAR_9->map.phys = VAR_10->start;
 VAR_9->map.size = FUNC_14(VAR_10);
 VAR_9->map.name = VAR_8->mapname != ((void*)0) ?
   (char *)VAR_8->mapname : (char *)VAR_7->name;
 VAR_9->map.bankwidth = VAR_8->bankwidth;



 VAR_9->area = FUNC_13(VAR_10->start, VAR_9->map.size, VAR_7->name);
 if (VAR_9->area == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "failed to request memory region\n");
  VAR_11 = -VAR_0;
  goto exit_free;
 }



 VAR_9->map.virt = FUNC_6(VAR_10->start, VAR_9->map.size);
 FUNC_2(&VAR_7->dev, "virt %p, %lu bytes\n", VAR_9->map.virt, VAR_9->map.size);

 if (VAR_9->map.virt == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "failed to ioremap() region\n");
  VAR_11 = -VAR_0;
  goto exit_free;
 }

 FUNC_15(&VAR_9->map);

 FUNC_2(&VAR_7->dev, "initialised map, probing for mtd\n");




 if (VAR_8->map_probes) {
  const char **VAR_12 = VAR_8->map_probes;

  for ( ; !VAR_9->mtd && *VAR_12; VAR_12++)
   VAR_9->mtd = FUNC_5(*VAR_12 , &VAR_9->map);
 }

 else
  VAR_9->mtd = FUNC_5("map_ram", &VAR_9->map);

 if (VAR_9->mtd == ((void*)0)) {
  FUNC_3(&VAR_7->dev, "failed to probe for map_ram\n");
  VAR_11 = -VAR_2;
  goto exit_free;
 }

 VAR_9->mtd->owner = VAR_6;
 VAR_9->mtd->dev.parent = &VAR_7->dev;

 FUNC_12(VAR_9, VAR_5);
 if (FUNC_0(VAR_9->mtd)) {
  FUNC_3(&VAR_7->dev, "add_mtd_device() failed\n");
  VAR_11 = -VAR_2;
 }

 if (!VAR_11)
  FUNC_4(&VAR_7->dev, "registered mtd device\n");

 return VAR_11;

 exit_free:
 FUNC_11(VAR_7);
 exit_error:
 return VAR_11;
}
