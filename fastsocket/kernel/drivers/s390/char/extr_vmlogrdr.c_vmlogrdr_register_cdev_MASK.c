
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dev_t ;
struct TYPE_4__ {int kobj; int dev; int * ops; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(dev_t VAR_5)
{
 int VAR_6 = 0;
 VAR_3 = FUNC_1();
 if (!VAR_3) {
  return -VAR_0;
 }
 VAR_3->owner = VAR_2;
 VAR_3->ops = &VAR_4;
 VAR_3->dev = VAR_5;
 VAR_6 = FUNC_0(VAR_3, VAR_3->dev, VAR_1);
 if (!VAR_6)
  return 0;


 FUNC_2(&VAR_3->kobj);
 VAR_3=((void*)0);
 return VAR_6;
}
