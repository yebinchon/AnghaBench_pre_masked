
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int otherend_id; } ;


 int FUNC_0 (int ,unsigned long,int ) ;
 int FUNC_1 (struct xenbus_device*,int,char*) ;

int FUNC_2(struct xenbus_device *VAR_0, unsigned long VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->otherend_id, VAR_1, 0);
 if (VAR_2 < 0)
  FUNC_1(VAR_0, VAR_2, "granting access to ring page");
 return VAR_2;
}
