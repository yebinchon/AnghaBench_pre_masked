
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* parent; } ;
struct device {TYPE_5__ kobj; TYPE_4__* class; TYPE_1__* parent; } ;
struct TYPE_10__ {TYPE_3__* p; int name; } ;
struct TYPE_8__ {TYPE_5__ kobj; } ;
struct TYPE_9__ {TYPE_2__ class_subsys; } ;
struct TYPE_7__ {TYPE_5__ kobj; } ;


 char* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,char*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 if (!VAR_0->class)
  return;
 if (VAR_0->parent && FUNC_1(VAR_0))
  FUNC_4(&VAR_0->kobj, "device");

 FUNC_4(&VAR_0->class->p->class_subsys.kobj, FUNC_0(VAR_0));


 FUNC_4(&VAR_0->kobj, "subsystem");
}
