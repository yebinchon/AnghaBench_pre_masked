
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct env {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 struct env* FUNC_1 (struct device*) ;
 int FUNC_2 (struct env*,scalar_t__,int) ;
 int FUNC_3 (char const*,int *,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2, struct device_attribute *VAR_3,
        const char *VAR_4, size_t VAR_5)
{
 int VAR_6 = FUNC_4(VAR_3)->index;
 int VAR_7 = FUNC_3(VAR_4, ((void*)0), 10);
 struct env *VAR_8 = FUNC_1(VAR_2);
 int VAR_9;
 u8 VAR_10;

 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_7);
 VAR_10 = VAR_9 >> 8;
 FUNC_2(VAR_8, VAR_1 + VAR_6, VAR_10);

 return VAR_5;
}
