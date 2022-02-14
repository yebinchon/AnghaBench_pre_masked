
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct resource {int start; } ;
struct TYPE_13__ {unsigned long size; int virt; int phys; int bankwidth; int name; } ;
struct rbtx4939_flash_info {int nr_parts; TYPE_3__* mtd; int parts; TYPE_1__ map; } ;
struct rbtx4939_flash_data {int nr_parts; int parts; int (* map_init ) (TYPE_1__*) ;int width; } ;
struct TYPE_15__ {struct rbtx4939_flash_data* platform_data; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_14__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int ,unsigned long) ;
 struct rbtx4939_flash_info* FUNC_5 (TYPE_6__*,int,int ) ;
 int FUNC_6 (TYPE_6__*,int ,unsigned long,int ) ;
 TYPE_3__* FUNC_7 (char const*,TYPE_1__*) ;
 int FUNC_8 (TYPE_3__*,int ,int *,int ) ;
 int VAR_7 ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct rbtx4939_flash_info*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct platform_device*) ;
 unsigned long FUNC_13 (struct resource*) ;
 char** VAR_8 ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct rbtx4939_flash_data *VAR_10;
 struct rbtx4939_flash_info *VAR_11;
 struct resource *VAR_12;
 const char **VAR_13;
 int VAR_14 = 0;
 unsigned long VAR_15;

 VAR_10 = VAR_9->dev.platform_data;
 if (!VAR_10)
  return -VAR_1;

 VAR_12 = FUNC_9(VAR_9, VAR_5, 0);
 if (!VAR_12)
  return -VAR_1;
 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(struct rbtx4939_flash_info),
       VAR_4);
 if (!VAR_11)
  return -VAR_2;

 FUNC_10(VAR_9, VAR_11);

 VAR_15 = FUNC_13(VAR_12);
 FUNC_11("rbtx4939 platform flash device: %pR\n", VAR_12);

 if (!FUNC_6(&VAR_9->dev, VAR_12->start, VAR_15,
         FUNC_3(&VAR_9->dev)))
  return -VAR_0;

 VAR_11->map.name = FUNC_3(&VAR_9->dev);
 VAR_11->map.phys = VAR_12->start;
 VAR_11->map.size = VAR_15;
 VAR_11->map.bankwidth = VAR_10->width;

 VAR_11->map.virt = FUNC_4(&VAR_9->dev, VAR_11->map.phys, VAR_15);
 if (!VAR_11->map.virt)
  return -VAR_0;

 if (VAR_10->map_init)
  (*VAR_10->map_init)(&VAR_11->map);
 else
  FUNC_14(&VAR_11->map);

 VAR_13 = VAR_8;
 for (; !VAR_11->mtd && *VAR_13; VAR_13++)
  VAR_11->mtd = FUNC_7(*VAR_13, &VAR_11->map);
 if (!VAR_11->mtd) {
  FUNC_2(&VAR_9->dev, "map_probe failed\n");
  VAR_14 = -VAR_3;
  goto err_out;
 }
 VAR_11->mtd->owner = VAR_6;
 if (VAR_14)
  goto err_out;
 FUNC_0(VAR_11->mtd);
 return 0;

err_out:
 FUNC_12(VAR_9);
 return VAR_14;
}
