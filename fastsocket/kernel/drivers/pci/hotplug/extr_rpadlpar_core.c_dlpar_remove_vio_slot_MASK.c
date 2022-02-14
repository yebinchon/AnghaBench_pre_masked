
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct vio_dev* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_2(char *VAR_1, struct device_node *VAR_2)
{
 struct vio_dev *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(VAR_3);
 return 0;
}
