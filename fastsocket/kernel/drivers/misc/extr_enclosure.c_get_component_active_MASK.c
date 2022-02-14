
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct enclosure_device {TYPE_1__* cb; } ;
struct enclosure_component {int active; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_active ) (struct enclosure_device*,struct enclosure_component*) ;} ;


 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (struct enclosure_device*,struct enclosure_component*) ;
 struct enclosure_component* FUNC_2 (struct device*) ;
 struct enclosure_device* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1, char *VAR_2)
{
 struct enclosure_device *VAR_3 = FUNC_3(VAR_0->parent);
 struct enclosure_component *VAR_4 = FUNC_2(VAR_0);

 if (VAR_3->cb->get_active)
  VAR_3->cb->get_active(VAR_3, VAR_4);
 return FUNC_0(VAR_2, 40, "%d\n", VAR_4->active);
}
