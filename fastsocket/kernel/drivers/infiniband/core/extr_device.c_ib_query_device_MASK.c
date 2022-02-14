
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device_attr {int dummy; } ;
struct ib_device {int (* query_device ) (struct ib_device*,struct ib_device_attr*) ;} ;


 int FUNC_0 (struct ib_device*,struct ib_device_attr*) ;

int FUNC_1(struct ib_device *VAR_0,
      struct ib_device_attr *VAR_1)
{
 return VAR_0->query_device(VAR_0, VAR_1);
}
