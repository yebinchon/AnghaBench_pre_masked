
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* parent; } ;
struct device {TYPE_4__ kobj; TYPE_3__* class; struct device* parent; int bus; } ;
struct TYPE_10__ {TYPE_2__* p; int name; } ;
struct TYPE_8__ {TYPE_4__ kobj; } ;
struct TYPE_9__ {TYPE_1__ class_subsys; } ;


 char* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,char*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_0)
{
 int VAR_1;

 if (!VAR_0->class)
  return 0;

 VAR_1 = FUNC_4(&VAR_0->kobj,
      &VAR_0->class->p->class_subsys.kobj,
      "subsystem");
 if (VAR_1)
  goto out;
 VAR_1 = FUNC_4(&VAR_0->class->p->class_subsys.kobj,
      &VAR_0->kobj, FUNC_0(VAR_0));
 if (VAR_1)
  goto out_subsys;

 if (VAR_0->parent && FUNC_1(VAR_0)) {
  VAR_1 = FUNC_4(&VAR_0->kobj, &VAR_0->parent->kobj,
       "device");
  if (VAR_1)
   goto out_busid;
 }
 return 0;

out_busid:
 FUNC_5(&VAR_0->class->p->class_subsys.kobj, FUNC_0(VAR_0));


out_subsys:
 FUNC_5(&VAR_0->kobj, "subsystem");
out:
 return VAR_1;
}
