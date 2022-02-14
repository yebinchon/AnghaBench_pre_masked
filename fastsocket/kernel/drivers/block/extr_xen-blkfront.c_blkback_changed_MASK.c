
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct blkfront_info {int dummy; } ;
typedef enum xenbus_state { ____Placeholder_xenbus_state } xenbus_state ;
 int FUNC_0 (struct blkfront_info*) ;
 int FUNC_1 (struct blkfront_info*) ;
 int FUNC_2 (int *,char*,int) ;
 struct blkfront_info* FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct xenbus_device *VAR_0,
       enum xenbus_state VAR_1)
{
 struct blkfront_info *VAR_2 = FUNC_3(&VAR_0->dev);

 FUNC_2(&VAR_0->dev, "blkfront:blkback_changed to state %d.\n", VAR_1);

 switch (VAR_1) {
 case 129:
 case 131:
 case 130:
 case 128:
 case 134:
  break;

 case 132:
  FUNC_1(VAR_2);
  break;

 case 133:
  FUNC_0(VAR_2);
  break;
 }
}
