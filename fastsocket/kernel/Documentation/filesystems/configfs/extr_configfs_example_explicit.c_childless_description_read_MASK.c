
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct childless {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct childless *VAR_0,
       char *VAR_1)
{
 return FUNC_0(VAR_1,
"[01-childless]\n"
"\n"
"The childless subsystem is the simplest possible subsystem in\n"
"configfs.  It does not support the creation of child config_items.\n"
"It only has a few attributes.  In fact, it isn't much different\n"
"than a directory in /proc.\n");
}
