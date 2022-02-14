
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct device {int sem; TYPE_6__* bus; TYPE_4__* type; TYPE_2__* class; } ;
typedef int pm_message_t ;
struct TYPE_12__ {TYPE_5__* pm; } ;
struct TYPE_11__ {int (* complete ) (struct device*) ;} ;
struct TYPE_10__ {TYPE_3__* pm; } ;
struct TYPE_9__ {int (* complete ) (struct device*) ;} ;
struct TYPE_8__ {TYPE_1__* pm; } ;
struct TYPE_7__ {int (* complete ) (struct device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_0, pm_message_t VAR_1)
{
 FUNC_0(&VAR_0->sem);

 if (VAR_0->class && VAR_0->class->pm && VAR_0->class->pm->complete) {
  FUNC_1(VAR_0, VAR_1, "completing class ");
  VAR_0->class->pm->complete(VAR_0);
 }

 if (VAR_0->type && VAR_0->type->pm && VAR_0->type->pm->complete) {
  FUNC_1(VAR_0, VAR_1, "completing type ");
  VAR_0->type->pm->complete(VAR_0);
 }

 if (VAR_0->bus && VAR_0->bus->pm && VAR_0->bus->pm->complete) {
  FUNC_1(VAR_0, VAR_1, "completing ");
  VAR_0->bus->pm->complete(VAR_0);
 }

 FUNC_5(&VAR_0->sem);
}
