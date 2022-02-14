
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** attrs; } ;
struct fw_attribute_group {TYPE_2__** groups; TYPE_1__** attrs; TYPE_2__ group; } ;
struct TYPE_5__ {int * name; } ;
struct device_attribute {scalar_t__ (* show ) (struct device*,struct device_attribute*,int *) ;TYPE_1__ attr; } ;
struct device {struct attribute_group const** groups; } ;
struct attribute_group {int dummy; } ;
struct TYPE_7__ {struct device_attribute attr; } ;


 int FUNC_0 (TYPE_3__*) ;
 TYPE_3__* VAR_0 ;
 scalar_t__ FUNC_1 (struct device*,struct device_attribute*,int *) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2,
        struct fw_attribute_group *VAR_3)
{
 struct device_attribute *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_6 = 0; VAR_2[VAR_6].attr.name != ((void*)0); VAR_6++)
  VAR_3->attrs[VAR_6] = &VAR_2[VAR_6].attr;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  VAR_4 = &VAR_0[VAR_5].attr;
  if (VAR_4->show(VAR_1, VAR_4, ((void*)0)) < 0)
   continue;
  VAR_3->attrs[VAR_6++] = &VAR_4->attr;
 }

 VAR_3->attrs[VAR_6] = ((void*)0);
 VAR_3->groups[0] = &VAR_3->group;
 VAR_3->groups[1] = ((void*)0);
 VAR_3->group.attrs = VAR_3->attrs;
 VAR_1->groups = (const struct attribute_group **) VAR_3->groups;
}
