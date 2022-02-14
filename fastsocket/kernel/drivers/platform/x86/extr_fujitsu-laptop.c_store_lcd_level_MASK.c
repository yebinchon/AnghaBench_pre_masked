
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int max_brightness; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char const*,char*,int*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
          struct device_attribute *VAR_4, const char *VAR_5,
          size_t VAR_6)
{

 int VAR_7, VAR_8;

 if (FUNC_3(VAR_5, "%i", &VAR_7) != 1
     || (VAR_7 < 0 || VAR_7 >= VAR_1->max_brightness))
  return -VAR_0;

 if (VAR_2)
  VAR_8 = FUNC_2(VAR_7);
 else
  VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_0();
 if (VAR_8 < 0)
  return VAR_8;

 return VAR_6;
}
