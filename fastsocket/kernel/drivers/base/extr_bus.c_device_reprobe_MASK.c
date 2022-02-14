
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* parent; scalar_t__ driver; } ;
struct TYPE_2__ {int sem; } ;


 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct device *VAR_0)
{
 if (VAR_0->driver) {
  if (VAR_0->parent)
   FUNC_2(&VAR_0->parent->sem);
  FUNC_1(VAR_0);
  if (VAR_0->parent)
   FUNC_3(&VAR_0->parent->sem);
 }
 return FUNC_0(VAR_0, ((void*)0));
}
