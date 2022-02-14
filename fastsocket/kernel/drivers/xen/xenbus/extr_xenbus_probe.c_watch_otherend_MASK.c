
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend; int otherend_watch; } ;


 int VAR_0 ;
 int FUNC_0 (struct xenbus_device*,int *,int ,char*,int ,char*) ;

__attribute__((used)) static int FUNC_1(struct xenbus_device *VAR_1)
{
 return FUNC_0(VAR_1, &VAR_1->otherend_watch, VAR_0,
        "%s/%s", VAR_1->otherend, "state");
}
