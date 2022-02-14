
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; scalar_t__ disabled; } ;
struct atmel_private {int rts_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
    struct iw_request_info *VAR_3,
    struct iw_param *VAR_4,
    char *VAR_5)
{
 struct atmel_private *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = VAR_4->value;

 if (VAR_4->disabled)
  VAR_7 = 2347;
 if ((VAR_7 < 0) || (VAR_7 > 2347)) {
  return -VAR_1;
 }
 VAR_6->rts_threshold = VAR_7;

 return -VAR_0;
}
