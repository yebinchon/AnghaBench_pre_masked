
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct configfs_attribute {int dummy; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* sysname; char* machine; char* release; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,char*,char*,char*,char*,char*) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_1,
          struct configfs_attribute *VAR_2,
          char *VAR_3)
{
 return FUNC_0(VAR_3, "Target Engine Core ConfigFS Infrastructure %s"
  " on %s/%s on %s\n", VAR_0,
         FUNC_1()->sysname, FUNC_1()->machine, FUNC_1()->release);
}
