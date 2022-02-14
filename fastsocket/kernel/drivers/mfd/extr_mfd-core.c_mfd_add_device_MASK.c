
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int flags; scalar_t__ end; scalar_t__ start; struct resource* parent; int name; } ;
struct TYPE_3__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mfd_cell {int num_resources; TYPE_2__* resources; int data_size; int platform_data; int driver_data; scalar_t__ id; int name; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int flags; scalar_t__ end; scalar_t__ start; struct resource* parent; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int ,int ) ;
 int FUNC_4 (struct platform_device*,struct resource*,int) ;
 struct platform_device* FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_4, int VAR_5,
     const struct mfd_cell *VAR_6,
     struct resource *VAR_7,
     int VAR_8)
{
 struct resource *VAR_9;
 struct platform_device *VAR_10;
 int VAR_11 = -VAR_0;
 int VAR_12;

 VAR_10 = FUNC_5(VAR_6->name, VAR_5 + VAR_6->id);
 if (!VAR_10)
  goto fail_alloc;

 VAR_9 = FUNC_1(sizeof(*VAR_9) * VAR_6->num_resources, VAR_1);
 if (!VAR_9)
  goto fail_device;

 VAR_10->dev.parent = VAR_4;
 FUNC_7(VAR_10, VAR_6->driver_data);

 VAR_11 = FUNC_3(VAR_10,
   VAR_6->platform_data, VAR_6->data_size);
 if (VAR_11)
  goto fail_res;

 for (VAR_12 = 0; VAR_12 < VAR_6->num_resources; VAR_12++) {
  VAR_9[VAR_12].name = VAR_6->resources[VAR_12].name;
  VAR_9[VAR_12].flags = VAR_6->resources[VAR_12].flags;


  if ((VAR_6->resources[VAR_12].flags & VAR_3) && VAR_7) {
   VAR_9[VAR_12].parent = VAR_7;
   VAR_9[VAR_12].start = VAR_7->start +
    VAR_6->resources[VAR_12].start;
   VAR_9[VAR_12].end = VAR_7->start +
    VAR_6->resources[VAR_12].end;
  } else if (VAR_6->resources[VAR_12].flags & VAR_2) {
   VAR_9[VAR_12].start = VAR_8 +
    VAR_6->resources[VAR_12].start;
   VAR_9[VAR_12].end = VAR_8 +
    VAR_6->resources[VAR_12].end;
  } else {
   VAR_9[VAR_12].parent = VAR_6->resources[VAR_12].parent;
   VAR_9[VAR_12].start = VAR_6->resources[VAR_12].start;
   VAR_9[VAR_12].end = VAR_6->resources[VAR_12].end;
  }
 }

 FUNC_4(VAR_10, VAR_9, VAR_6->num_resources);

 VAR_11 = FUNC_2(VAR_10);
 if (VAR_11)
  goto fail_res;

 FUNC_0(VAR_9);

 return 0;


fail_res:
 FUNC_0(VAR_9);
fail_device:
 FUNC_6(VAR_10);
fail_alloc:
 return VAR_11;
}
