
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * class; struct device* parent; } ;
struct unit_directory {struct device device; struct device unit_dev; int id; } ;
struct node_entry {struct device device; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 scalar_t__ FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int *,int) ;
 int FUNC_7 (struct unit_directory*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct node_entry *VAR_2,
 struct unit_directory *VAR_3, struct device *VAR_4)
{
 FUNC_6(&VAR_3->device, &VAR_0,
        sizeof(VAR_3->device));

 VAR_3->device.parent = VAR_4;

 FUNC_2(&VAR_3->device, "%s-%u", FUNC_1(&VAR_2->device), VAR_3->id);

 VAR_3->unit_dev.parent = &VAR_3->device;
 VAR_3->unit_dev.class = &VAR_1;
 FUNC_2(&VAR_3->unit_dev, "%s-%u", FUNC_1(&VAR_2->device), VAR_3->id);

 if (FUNC_3(&VAR_3->device))
  goto fail_devreg;
 if (FUNC_3(&VAR_3->unit_dev))
  goto fail_classdevreg;
 FUNC_5(&VAR_3->device);

 FUNC_7(VAR_3);

 return;

fail_classdevreg:
 FUNC_4(&VAR_3->device);
fail_devreg:
 FUNC_0("Failed to create unit %s", FUNC_1(&VAR_3->device));
}
