
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {unsigned int powersave_bias; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_3, struct attribute *VAR_4,
        const char *VAR_5, size_t VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 VAR_8 = FUNC_3(VAR_5, "%u", &VAR_7);

 if (VAR_8 != 1)
  return -VAR_0;

 if (VAR_7 > 1000)
  VAR_7 = 1000;

 FUNC_0(&VAR_1);
 VAR_2.powersave_bias = VAR_7;
 FUNC_2();
 FUNC_1(&VAR_1);

 return VAR_6;
}
