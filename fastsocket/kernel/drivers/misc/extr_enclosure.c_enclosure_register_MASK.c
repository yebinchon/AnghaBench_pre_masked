
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; int * class; } ;
struct enclosure_device {int components; TYPE_2__ edev; int node; TYPE_1__* component; struct enclosure_component_callbacks* cb; } ;
struct enclosure_component_callbacks {int dummy; } ;
struct enclosure_component {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int number; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct enclosure_device* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*,char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct enclosure_device*) ;
 struct enclosure_device* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

struct enclosure_device *
FUNC_11(struct device *VAR_5, const char *VAR_6, int VAR_7,
     struct enclosure_component_callbacks *VAR_8)
{
 struct enclosure_device *VAR_9 =
  FUNC_6(sizeof(struct enclosure_device) +
   sizeof(struct enclosure_component)*VAR_7,
   VAR_1);
 int VAR_10, VAR_11;

 FUNC_0(!VAR_8);

 if (!VAR_9)
  return FUNC_1(-VAR_0);

 VAR_9->components = VAR_7;

 VAR_9->edev.class = &VAR_4;
 VAR_9->edev.parent = FUNC_4(VAR_5);
 VAR_9->cb = VAR_8;
 FUNC_2(&VAR_9->edev, "%s", VAR_6);
 VAR_10 = FUNC_3(&VAR_9->edev);
 if (VAR_10)
  goto err;

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
  VAR_9->component[VAR_11].number = -1;

 FUNC_8(&VAR_3);
 FUNC_7(&VAR_9->node, &VAR_2);
 FUNC_9(&VAR_3);

 return VAR_9;

 err:
 FUNC_10(VAR_9->edev.parent);
 FUNC_5(VAR_9);
 return FUNC_1(VAR_10);
}
