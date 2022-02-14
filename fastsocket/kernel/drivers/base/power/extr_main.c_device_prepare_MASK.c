
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


struct device {int sem; TYPE_6__* class; TYPE_4__* type; TYPE_2__* bus; } ;
typedef int pm_message_t ;
struct TYPE_12__ {TYPE_5__* pm; } ;
struct TYPE_11__ {int (* prepare ) (struct device*) ;} ;
struct TYPE_10__ {TYPE_3__* pm; } ;
struct TYPE_9__ {int (* prepare ) (struct device*) ;} ;
struct TYPE_8__ {TYPE_1__* pm; } ;
struct TYPE_7__ {int (* prepare ) (struct device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ,char*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int (*) (struct device*),int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0, pm_message_t VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(&VAR_0->sem);

 if (VAR_0->bus && VAR_0->bus->pm && VAR_0->bus->pm->prepare) {
  FUNC_1(VAR_0, VAR_1, "preparing ");
  VAR_2 = VAR_0->bus->pm->prepare(VAR_0);
  FUNC_5(VAR_0->bus->pm->prepare, VAR_2);
  if (VAR_2)
   goto End;
 }

 if (VAR_0->type && VAR_0->type->pm && VAR_0->type->pm->prepare) {
  FUNC_1(VAR_0, VAR_1, "preparing type ");
  VAR_2 = VAR_0->type->pm->prepare(VAR_0);
  FUNC_5(VAR_0->type->pm->prepare, VAR_2);
  if (VAR_2)
   goto End;
 }

 if (VAR_0->class && VAR_0->class->pm && VAR_0->class->pm->prepare) {
  FUNC_1(VAR_0, VAR_1, "preparing class ");
  VAR_2 = VAR_0->class->pm->prepare(VAR_0);
  FUNC_5(VAR_0->class->pm->prepare, VAR_2);
 }
 End:
 FUNC_6(&VAR_0->sem);

 return VAR_2;
}
