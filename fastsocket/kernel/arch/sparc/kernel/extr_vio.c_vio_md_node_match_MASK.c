
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vio_dev {scalar_t__ mp; } ;
struct device {int dummy; } ;


 struct vio_dev* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1)
{
 struct vio_dev *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->mp == (u64) VAR_1)
  return 1;

 return 0;
}
