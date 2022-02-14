
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int kobj; TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* p; } ;
struct TYPE_3__ {int kobj; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->driver->p->kobj, &VAR_0->kobj,
     FUNC_0(&VAR_0->kobj));
 if (VAR_1 == 0) {
  VAR_1 = FUNC_1(&VAR_0->kobj, &VAR_0->driver->p->kobj,
     "driver");
  if (VAR_1)
   FUNC_2(&VAR_0->driver->p->kobj,
     FUNC_0(&VAR_0->kobj));
 }
 return VAR_1;
}
