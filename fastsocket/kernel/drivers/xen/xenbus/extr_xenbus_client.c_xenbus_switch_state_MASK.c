
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int state; int nodename; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xenbus_device*,int,char*) ;
 int FUNC_1 (int ,int ,char*,char*,int) ;
 int FUNC_2 (int ,int ,char*,char*,int*) ;

int FUNC_3(struct xenbus_device *VAR_2, enum xenbus_state VAR_3)
{
 int VAR_4;
 int VAR_5;

 if (VAR_3 == VAR_2->state)
  return 0;

 VAR_5 = FUNC_2(VAR_0, VAR_2->nodename, "state", "%d",
      &VAR_4);
 if (VAR_5 != 1)
  return 0;

 VAR_5 = FUNC_1(VAR_0, VAR_2->nodename, "state", "%d", VAR_3);
 if (VAR_5) {
  if (VAR_3 != VAR_1)
   FUNC_0(VAR_2, VAR_5, "writing new state");
  return VAR_5;
 }

 VAR_2->state = VAR_3;

 return 0;
}
