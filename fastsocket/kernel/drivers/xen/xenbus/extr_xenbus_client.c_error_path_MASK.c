
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ) ;

__attribute__((used)) static char *FUNC_1(struct xenbus_device *VAR_1)
{
 return FUNC_0(VAR_0, "error/%s", VAR_1->nodename);
}
