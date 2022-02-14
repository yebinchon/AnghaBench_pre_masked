
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int attr_rdpmc; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (char const*,int *,int ) ;
 int FUNC_1 (int ,void*,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
         struct device_attribute *VAR_3,
         const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_4, ((void*)0), 0);

 if (!!VAR_6 != !!VAR_1.attr_rdpmc) {
  VAR_1.attr_rdpmc = !!VAR_6;
  FUNC_1(VAR_0, (void *)VAR_6, 1);
 }

 return VAR_5;
}
