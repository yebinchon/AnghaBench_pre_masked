
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int prefer_port3; int has_port3; int has_ibss; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3,
      struct iw_request_info *VAR_4,
      void *VAR_5,
      char *VAR_6)
{
 struct orinoco_private *VAR_7 = FUNC_0(VAR_3);
 int VAR_8 = *((int *) VAR_6);
 int VAR_9 = 0;
 unsigned long VAR_10;

 if (FUNC_1(VAR_7, &VAR_10) != 0)
  return -VAR_0;

 switch (VAR_8) {
 case 0:
  if (!VAR_7->has_ibss) {
   VAR_9 = -VAR_2;
   break;
  }
  VAR_7->prefer_port3 = 0;

  break;

 case 1:
  if (!VAR_7->has_port3) {
   VAR_9 = -VAR_2;
   break;
  }
  VAR_7->prefer_port3 = 1;
  break;

 default:
  VAR_9 = -VAR_2;
 }

 if (!VAR_9) {

  FUNC_3(VAR_7);
  VAR_9 = -VAR_1;
 }

 FUNC_2(VAR_7, &VAR_10);

 return VAR_9;
}
