
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enclosure_device {int components; struct enclosure_component* component; } ;
struct enclosure_component {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct enclosure_component*) ;
 int FUNC_1 (struct enclosure_component*) ;
 struct device* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;

int FUNC_4(struct enclosure_device *VAR_2, int VAR_3,
    struct device *VAR_4)
{
 struct enclosure_component *VAR_5;

 if (!VAR_2 || VAR_3 >= VAR_2->components)
  return -VAR_1;

 VAR_5 = &VAR_2->component[VAR_3];

 if (VAR_5->dev == VAR_4)
  return -VAR_0;

 if (VAR_5->dev)
  FUNC_1(VAR_5);

 FUNC_3(VAR_5->dev);
 VAR_5->dev = FUNC_2(VAR_4);
 return FUNC_0(VAR_5);
}
