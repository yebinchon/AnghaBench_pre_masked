
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int kobj; TYPE_1__* class; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1,
       struct device *VAR_2,
       struct device *VAR_3)
{
 int VAR_4 = 0;
 if (VAR_2)
  FUNC_3(&VAR_1->kobj, "device");
 if (VAR_3)
  VAR_4 = FUNC_2(&VAR_1->kobj, &VAR_3->kobj,
       "device");
 return VAR_4;

}
