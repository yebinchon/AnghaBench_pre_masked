
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int sem; int bus; int * driver; TYPE_1__* p; } ;
struct TYPE_2__ {int knode_driver; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,struct device*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct device *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_1->sem);
 if (VAR_1->driver) {
  if (FUNC_3(&VAR_1->p->knode_driver)) {
   VAR_2 = 1;
   goto out_unlock;
  }
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 == 0)
   VAR_2 = 1;
  else {
   VAR_1->driver = ((void*)0);
   VAR_2 = 0;
  }
 } else {
  FUNC_4(VAR_1);
  VAR_2 = FUNC_0(VAR_1->bus, ((void*)0), VAR_1, VAR_0);
  FUNC_5(VAR_1);
 }
out_unlock:
 FUNC_6(&VAR_1->sem);
 return VAR_2;
}
