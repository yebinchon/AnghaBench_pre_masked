
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;

 int FUNC_0 (struct net_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_9,
     struct iw_request_info *VAR_10,
     struct iw_param *VAR_11, char *VAR_12)
{



 int VAR_13 = 0;

 if (VAR_11->disabled)
  return FUNC_0(VAR_9, VAR_4, 0);

 switch (VAR_11->flags & VAR_6) {
 case 128:
  VAR_13 = FUNC_0(VAR_9, VAR_3, 0);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_0(VAR_9, VAR_4, 1);
  if (VAR_13)
   return VAR_13;
  break;
 case 130:
  VAR_13 = FUNC_0(VAR_9, VAR_3, 1);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_0(VAR_9, VAR_4, 1);
  if (VAR_13)
   return VAR_13;
  break;
 case 129:
  break;
 default:
  return -VAR_0;
 }

 if (VAR_11->flags & VAR_8) {
  VAR_13 = FUNC_0(VAR_9, VAR_4, 1);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_0(VAR_9, VAR_5,
          VAR_11->value / 1024);
  if (VAR_13)
   return VAR_13;
 }
 if (VAR_11->flags & VAR_7) {
  VAR_13 = FUNC_0(VAR_9, VAR_4, 1);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_0(VAR_9, VAR_2,
          VAR_11->value / 1024);
  if (VAR_13)
   return VAR_13;
 }

 return VAR_13;

}
