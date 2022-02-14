
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {unsigned int components; int edev; struct enclosure_component* component; } ;
struct device {int groups; int release; int parent; } ;
struct enclosure_component {int number; int type; struct device cdev; } ;
typedef enum enclosure_component_type { ____Placeholder_enclosure_component_type } enclosure_component_type ;


 int VAR_0 ;
 struct enclosure_component* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;

struct enclosure_component *
FUNC_5(struct enclosure_device *VAR_3,
        unsigned int VAR_4,
        enum enclosure_component_type VAR_5,
        const char *VAR_6)
{
 struct enclosure_component *VAR_7;
 struct device *VAR_8;
 int VAR_9;

 if (VAR_4 >= VAR_3->components)
  return FUNC_0(-VAR_0);

 VAR_7 = &VAR_3->component[VAR_4];

 if (VAR_7->number != -1)
  return FUNC_0(-VAR_0);

 VAR_7->type = VAR_5;
 VAR_7->number = VAR_4;
 VAR_8 = &VAR_7->cdev;
 VAR_8->parent = FUNC_3(&VAR_3->edev);
 if (VAR_6 && VAR_6[0])
  FUNC_1(VAR_8, "%s", VAR_6);
 else
  FUNC_1(VAR_8, "%u", VAR_4);

 VAR_8->release = VAR_1;
 VAR_8->groups = VAR_2;

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9) {
  VAR_7->number = -1;
  FUNC_4(VAR_8);
  return FUNC_0(VAR_9);
 }

 return VAR_7;
}
