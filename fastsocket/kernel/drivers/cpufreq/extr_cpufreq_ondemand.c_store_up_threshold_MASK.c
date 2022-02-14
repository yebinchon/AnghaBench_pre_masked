
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {unsigned int up_threshold; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_5, struct attribute *VAR_6,
      const char *VAR_7, size_t VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;
 VAR_10 = FUNC_2(VAR_7, "%u", &VAR_9);

 if (VAR_10 != 1 || VAR_9 > VAR_1 ||
   VAR_9 < VAR_2) {
  return -VAR_0;
 }

 FUNC_0(&VAR_3);
 VAR_4.up_threshold = VAR_9;
 FUNC_1(&VAR_3);

 return VAR_8;
}
