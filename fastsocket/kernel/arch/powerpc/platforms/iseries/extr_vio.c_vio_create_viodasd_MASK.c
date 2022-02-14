
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vio_dev {int dummy; } ;
struct device_node {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct device_node* FUNC_0 (struct device_node*,char*,scalar_t__,scalar_t__,char*,char*,int *) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (char*) ;
 int FUNC_3 (struct device_node*) ;
 struct vio_dev* FUNC_4 (struct device_node*) ;

struct vio_dev *FUNC_5(u32 VAR_1)
{
 struct device_node *VAR_2;
 struct device_node *VAR_3;
 struct vio_dev *VAR_4 = ((void*)0);

 VAR_2 = FUNC_2("/vdevice");
 if (!VAR_2)
  return ((void*)0);
 VAR_3 = FUNC_0(VAR_2, "viodasd", VAR_0 + VAR_1, VAR_1,
   "block", "IBM,iSeries-viodasd", ((void*)0));
 FUNC_3(VAR_2);
 if (VAR_3) {
  VAR_4 = FUNC_4(VAR_3);
  if (!VAR_4)
   FUNC_1(VAR_3);
 }
 return VAR_4;
}
