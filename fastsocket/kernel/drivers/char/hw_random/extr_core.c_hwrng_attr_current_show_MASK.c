
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (char*,int ,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_4,
           struct device_attribute *VAR_5,
           char *VAR_6)
{
 int VAR_7;
 ssize_t VAR_8;
 const char *VAR_9 = "none";

 VAR_7 = FUNC_0(&VAR_3);
 if (VAR_7)
  return -VAR_0;
 if (VAR_2)
  VAR_9 = VAR_2->name;
 VAR_8 = FUNC_2(VAR_6, VAR_1, "%s\n", VAR_9);
 FUNC_1(&VAR_3);

 return VAR_8;
}
