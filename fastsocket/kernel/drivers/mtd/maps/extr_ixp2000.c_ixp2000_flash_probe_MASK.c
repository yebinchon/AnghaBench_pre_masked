
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {struct ixp2000_flash_data* platform_data; } ;
struct platform_device {TYPE_5__ dev; TYPE_1__* resource; } ;
struct TYPE_11__ {unsigned long size; int bankwidth; unsigned long map_priv_2; unsigned long map_priv_1; int copy_to; int copy_from; int write; int read; int name; int phys; } ;
struct ixp2000_flash_info {int partitions; TYPE_2__* mtd; TYPE_4__ map; int res; } ;
struct ixp2000_flash_data {unsigned long nr_banks; scalar_t__ bank_setup; struct flash_platform_data* platform_data; } ;
struct flash_platform_data {int width; int map_name; } ;
struct TYPE_10__ {int owner; } ;
struct TYPE_9__ {int end; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (TYPE_5__*,char*,...) ;
 int FUNC_3 (TYPE_5__*) ;
 TYPE_2__* FUNC_4 (int ,TYPE_4__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct platform_device*) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 () ;
 struct ixp2000_flash_info* FUNC_8 (int,int ) ;
 int FUNC_9 (struct ixp2000_flash_info*,int ,int) ;
 int FUNC_10 (TYPE_2__*,char const**,int *,int ) ;
 int FUNC_11 (struct platform_device*,struct ixp2000_flash_info*) ;
 int FUNC_12 (int,int,int ) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_12)
{
 static const char *VAR_13[] = { "RedBoot", "cmdlinepart", ((void*)0) };
 struct ixp2000_flash_data *VAR_14 = VAR_12->dev.platform_data;
 struct flash_platform_data *VAR_15;
 struct ixp2000_flash_info *VAR_16;
 unsigned long VAR_17;
 int VAR_18 = -1;

 if (!VAR_14)
  return -VAR_1;

 VAR_15 = VAR_14->platform_data;
 if (!VAR_15)
  return -VAR_1;

 VAR_17 = VAR_12->resource->end - VAR_12->resource->start + 1;
 FUNC_2(&VAR_12->dev, "Probe of IXP2000 flash(%d banks x %dMiB)\n",
   VAR_14->nr_banks, ((u32)VAR_17 >> 20));

 if (VAR_15->width != 1) {
  FUNC_1(&VAR_12->dev, "IXP2000 MTD map only supports 8-bit mode, asking for %d\n",
   VAR_15->width * 8);
  return -VAR_0;
 }

 VAR_16 = FUNC_8(sizeof(struct ixp2000_flash_info), VAR_4);
 if(!VAR_16) {
  VAR_18 = -VAR_2;
  goto Error;
 }
 FUNC_9(VAR_16, 0, sizeof(struct ixp2000_flash_info));

 FUNC_11(VAR_12, VAR_16);





 VAR_16->map.phys = VAR_5;

 VAR_16->map.size = VAR_14->nr_banks * VAR_17;
 VAR_16->map.bankwidth = 1;




 VAR_16->map.map_priv_2 = (unsigned long) VAR_14->bank_setup;

 VAR_16->map.name = FUNC_3(&VAR_12->dev);
 VAR_16->map.read = VAR_10;
 VAR_16->map.write = VAR_11;
 VAR_16->map.copy_from = VAR_8;
 VAR_16->map.copy_to = VAR_9;

 VAR_16->res = FUNC_12(VAR_12->resource->start,
   VAR_12->resource->end - VAR_12->resource->start + 1,
   FUNC_3(&VAR_12->dev));
 if (!VAR_16->res) {
  FUNC_1(&VAR_12->dev, "Could not reserve memory region\n");
  VAR_18 = -VAR_2;
  goto Error;
 }

 VAR_16->map.map_priv_1 = (unsigned long) FUNC_5(VAR_12->resource->start,
        VAR_12->resource->end - VAR_12->resource->start + 1);
 if (!VAR_16->map.map_priv_1) {
  FUNC_1(&VAR_12->dev, "Failed to ioremap flash region\n");
  VAR_18 = -VAR_0;
  goto Error;
 }
 VAR_16->mtd = FUNC_4(VAR_15->map_name, &VAR_16->map);
 if (!VAR_16->mtd) {
  FUNC_1(&VAR_12->dev, "map_probe failed\n");
  VAR_18 = -VAR_3;
  goto Error;
 }
 VAR_16->mtd->owner = VAR_6;

 VAR_18 = FUNC_10(VAR_16->mtd, VAR_13, &VAR_16->partitions, 0);
 if (VAR_18 > 0) {
  VAR_18 = FUNC_0(VAR_16->mtd, VAR_16->partitions, VAR_18);
  if(VAR_18)
   FUNC_1(&VAR_12->dev, "Could not parse partitions\n");
 }

 if (VAR_18)
  goto Error;

 return 0;

Error:
 FUNC_6(VAR_12);
 return VAR_18;
}
