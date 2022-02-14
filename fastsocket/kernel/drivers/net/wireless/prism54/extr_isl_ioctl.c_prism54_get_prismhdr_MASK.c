
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ monitor_type; } ;
typedef TYPE_1__ islpci_private ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_1, struct iw_request_info *VAR_2,
       __u32 * VAR_3, char *VAR_4)
{
 islpci_private *VAR_5 = FUNC_0(VAR_1);
 *VAR_3 = (VAR_5->monitor_type == VAR_0);
 return 0;
}
