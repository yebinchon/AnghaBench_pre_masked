
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ib_port_attr {int dummy; } ;
struct ib_device {int (* query_port ) (struct ib_device*,scalar_t__,struct ib_port_attr*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_device*) ;
 scalar_t__ FUNC_1 (struct ib_device*) ;
 int FUNC_2 (struct ib_device*,scalar_t__,struct ib_port_attr*) ;

int FUNC_3(struct ib_device *VAR_1,
    u8 VAR_2,
    struct ib_port_attr *VAR_3)
{
 if (VAR_2 < FUNC_1(VAR_1) || VAR_2 > FUNC_0(VAR_1))
  return -VAR_0;

 return VAR_1->query_port(VAR_1, VAR_2, VAR_3);
}
