
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysdev_class {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_3(struct sysdev_class *VAR_2,
         char *VAR_3)
{
 ssize_t VAR_4;

 FUNC_0(&VAR_1);
 if (VAR_0)
  VAR_4 = FUNC_2(VAR_3, "%s\n", VAR_0->name);
 else
  VAR_4 = FUNC_2(VAR_3, "none\n");
 FUNC_1(&VAR_1);

 return VAR_4;
}
