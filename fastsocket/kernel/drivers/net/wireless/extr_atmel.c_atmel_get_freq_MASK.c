
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_freq {scalar_t__ e; int m; } ;
struct atmel_private {int channel; } ;


 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
     struct iw_request_info *VAR_1,
     struct iw_freq *VAR_2,
     char *VAR_3)
{
 struct atmel_private *VAR_4 = FUNC_0(VAR_0);

 VAR_2->m = VAR_4->channel;
 VAR_2->e = 0;
 return 0;
}
