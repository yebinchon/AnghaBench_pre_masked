
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; int disabled; int fixed; } ;
struct atmel_private {int frag_threshold; } ;


 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
     struct iw_request_info *VAR_1,
     struct iw_param *VAR_2,
     char *VAR_3)
{
 struct atmel_private *VAR_4 = FUNC_0(VAR_0);

 VAR_2->value = VAR_4->frag_threshold;
 VAR_2->disabled = (VAR_2->value >= 2346);
 VAR_2->fixed = 1;

 return 0;
}
