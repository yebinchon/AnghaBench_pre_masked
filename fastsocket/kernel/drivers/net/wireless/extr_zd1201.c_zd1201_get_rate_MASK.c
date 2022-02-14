
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ disabled; scalar_t__ fixed; } ;


 int VAR_0 ;
 struct zd1201* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct zd1201*,int ,short*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct iw_request_info *VAR_2, struct iw_param *VAR_3, char *VAR_4)
{
 struct zd1201 *VAR_5 = FUNC_0(VAR_1);
 short VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_5, VAR_0, &VAR_6);
 if (VAR_7)
  return VAR_7;

 switch(VAR_6) {
  case 1:
   VAR_3->value = 1000000;
   break;
  case 2:
   VAR_3->value = 2000000;
   break;
  case 5:
   VAR_3->value = 5500000;
   break;
  case 11:
   VAR_3->value = 11000000;
   break;
  default:
   VAR_3->value = 0;
 }
 VAR_3->fixed = 0;
 VAR_3->disabled = 0;

 return 0;
}
