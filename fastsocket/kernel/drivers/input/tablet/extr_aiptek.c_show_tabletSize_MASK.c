
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct aiptek {TYPE_1__* inputdev; } ;
typedef int ssize_t ;
struct TYPE_2__ {int* absmax; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct aiptek* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct aiptek *VAR_6 = FUNC_0(VAR_3);

 return FUNC_1(VAR_5, VAR_2, "%dx%d\n",
   VAR_6->inputdev->absmax[VAR_0] + 1,
   VAR_6->inputdev->absmax[VAR_1] + 1);
}
