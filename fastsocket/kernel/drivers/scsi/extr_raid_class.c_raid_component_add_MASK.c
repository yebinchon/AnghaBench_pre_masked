
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ac; } ;
struct raid_template {TYPE_1__ raid_attrs; } ;
struct raid_data {int component_count; int component_list; } ;
struct TYPE_8__ {int * class; int parent; int release; } ;
struct raid_component {int node; TYPE_3__ dev; scalar_t__ num; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct device* FUNC_1 (int *,struct device*) ;
 struct raid_data* FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct raid_component*) ;
 struct raid_component* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct device*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;

int FUNC_12(struct raid_template *VAR_4,struct device *VAR_5,
         struct device *VAR_6)
{
 struct device *VAR_7 =
  FUNC_1(&VAR_4->raid_attrs.ac,
            VAR_5);
 struct raid_component *VAR_8;
 struct raid_data *VAR_9 = FUNC_2(VAR_7);
 int VAR_10;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(&VAR_8->node);
 FUNC_5(&VAR_8->dev);
 VAR_8->dev.release = VAR_3;
 VAR_8->dev.parent = FUNC_6(VAR_6);
 VAR_8->num = VAR_9->component_count++;

 FUNC_3(&VAR_8->dev, "component-%d", VAR_8->num);
 FUNC_9(&VAR_8->node, &VAR_9->component_list);
 VAR_8->dev.class = &VAR_2.class;
 VAR_10 = FUNC_4(&VAR_8->dev);
 if (VAR_10)
  goto err_out;

 return 0;

err_out:
 FUNC_10(&VAR_8->node);
 VAR_9->component_count--;
 FUNC_11(VAR_6);
 FUNC_7(VAR_8);
 return VAR_10;
}
