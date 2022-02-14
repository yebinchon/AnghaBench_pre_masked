
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int release; int * bus; int * parent; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_7__ {int mod_id; } ;
struct superhyway_device {TYPE_4__ dev; TYPE_1__ id; int name; TYPE_2__ vcr; TYPE_3__* resource; struct superhyway_bus* bus; } ;
struct superhyway_bus {int dummy; } ;
struct resource {int dummy; } ;
struct TYPE_8__ {unsigned long start; int end; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,char*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct superhyway_device*) ;
 TYPE_3__* FUNC_3 (int,int ) ;
 struct superhyway_device* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct superhyway_device*,unsigned long,TYPE_2__*) ;

int FUNC_7(unsigned long VAR_6, struct superhyway_device *VAR_7,
     struct superhyway_bus *VAR_8)
{
 struct superhyway_device *VAR_9 = VAR_7;

 if (!VAR_9) {
  VAR_9 = FUNC_4(sizeof(struct superhyway_device), VAR_1);
  if (!VAR_9)
   return -VAR_0;

 }

 VAR_9->bus = VAR_8;
 FUNC_6(VAR_9, VAR_6, &VAR_9->vcr);

 if (!VAR_9->resource) {
  VAR_9->resource = FUNC_3(sizeof(struct resource), VAR_1);
  if (!VAR_9->resource) {
   FUNC_2(VAR_9);
   return -VAR_0;
  }

  VAR_9->resource->name = VAR_9->name;
  VAR_9->resource->start = VAR_6;
  VAR_9->resource->end = VAR_9->resource->start + 0x01000000;
 }

 VAR_9->dev.parent = &VAR_2;
 VAR_9->dev.bus = &VAR_3;
 VAR_9->dev.release = VAR_4;
 VAR_9->id.id = VAR_9->vcr.mod_id;

 FUNC_5(VAR_9->name, "SuperHyway device %04x", VAR_9->id.id);
 FUNC_0(&VAR_9->dev, "%02x", VAR_5);

 VAR_5++;

 return FUNC_1(&VAR_9->dev);
}
