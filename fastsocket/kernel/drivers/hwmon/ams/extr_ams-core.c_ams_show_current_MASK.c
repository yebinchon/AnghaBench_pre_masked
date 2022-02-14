
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int s8 ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 s8 VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_1.lock);
 FUNC_0(&VAR_5, &VAR_6, &VAR_7);
 FUNC_2(&VAR_1.lock);

 return FUNC_3(VAR_4, VAR_0, "%d %d %d\n", VAR_5, VAR_6, VAR_7);
}
