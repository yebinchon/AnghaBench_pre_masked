
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct env {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 struct env* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct env*,scalar_t__) ;
 int FUNC_4 (char*,char*,int) ;
 TYPE_1__* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_5(VAR_2)->index;
 struct env *VAR_5 = FUNC_2(VAR_1);
 int VAR_6, VAR_7;
 u8 VAR_8;

 VAR_8 = FUNC_3(VAR_5, VAR_0 + VAR_4);
 VAR_7 = (int) VAR_8 << 8;
 if (FUNC_0(VAR_7))
  VAR_6 = FUNC_1(VAR_7);
 else
  VAR_6 = 0;

 return FUNC_4(VAR_3, "%d\n", VAR_6);
}
