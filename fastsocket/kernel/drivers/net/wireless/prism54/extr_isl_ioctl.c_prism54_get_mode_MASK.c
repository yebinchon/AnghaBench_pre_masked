
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ iw_mode; } ;
typedef TYPE_1__ islpci_private ;
typedef scalar_t__ __u32 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_2, struct iw_request_info *VAR_3,
   __u32 * VAR_4, char *VAR_5)
{
 islpci_private *VAR_6 = FUNC_1(VAR_2);

 FUNC_0((VAR_6->iw_mode < VAR_0) || (VAR_6->iw_mode >
        VAR_1));
 *VAR_4 = VAR_6->iw_mode;

 return 0;
}
