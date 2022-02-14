
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct driver_data {int dummy; } ;
struct TYPE_2__ {int attr; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct kobject*,int *) ;

__attribute__((used)) static int FUNC_1(struct driver_data *VAR_2, struct kobject *VAR_3)
{
 if (!VAR_3 || !VAR_2)
  return -VAR_0;

 FUNC_0(VAR_3, &VAR_1.attr);

 return 0;
}
