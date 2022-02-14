
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_param {int flags; int value; } ;
union iwreq_data {struct iw_param param; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct atmel_private {int exclude_unencrypted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;





 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_6,
          struct iw_request_info *VAR_7,
          union iwreq_data *VAR_8, char *VAR_9)
{
 struct atmel_private *VAR_10 = FUNC_0(VAR_6);
 struct iw_param *VAR_11 = &VAR_8->param;

 switch (VAR_11->flags & VAR_5) {
 case 128:
 case 134:
 case 135:
 case 132:
 case 130:
 case 131:



  break;

 case 133:
  VAR_10->exclude_unencrypted = VAR_11->value ? 1 : 0;
  break;

 case 136: {
   if (VAR_11->value & VAR_4) {
    VAR_10->exclude_unencrypted = 1;
   } else if (VAR_11->value & VAR_3) {
    VAR_10->exclude_unencrypted = 0;
   } else
    return -VAR_1;
   break;
  }

 case 129:

  if (VAR_11->value > 0)
   return -VAR_2;
  break;

 default:
  return -VAR_2;
 }
 return -VAR_0;
}
