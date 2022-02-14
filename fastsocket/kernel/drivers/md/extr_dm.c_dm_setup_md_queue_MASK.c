
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mapped_device*) ;
 int FUNC_2 (struct mapped_device*) ;

int FUNC_3(struct mapped_device *VAR_2)
{
 if ((FUNC_1(VAR_2) == VAR_0) &&
     !FUNC_2(VAR_2)) {
  FUNC_0("Cannot initialize queue for request-based mapped device");
  return -VAR_1;
 }

 return 0;
}
