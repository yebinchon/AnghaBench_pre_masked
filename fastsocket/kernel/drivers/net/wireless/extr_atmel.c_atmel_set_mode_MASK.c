
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct atmel_private {scalar_t__ operating_mode; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct atmel_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     __u32 *VAR_6,
     char *VAR_7)
{
 struct atmel_private *VAR_8 = FUNC_0(VAR_4);

 if (*VAR_6 != VAR_2 && *VAR_6 != VAR_3)
  return -VAR_1;

 VAR_8->operating_mode = *VAR_6;
 return -VAR_0;
}
