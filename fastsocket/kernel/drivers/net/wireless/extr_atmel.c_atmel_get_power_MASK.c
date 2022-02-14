
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int flags; } ;
struct atmel_private {scalar_t__ power_mode; } ;


 int VAR_0 ;
 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1,
      struct iw_request_info *VAR_2,
      struct iw_param *VAR_3,
      char *VAR_4)
{
 struct atmel_private *VAR_5 = FUNC_0(VAR_1);
 VAR_3->disabled = VAR_5->power_mode ? 0 : 1;
 VAR_3->flags = VAR_0;
 return 0;
}
