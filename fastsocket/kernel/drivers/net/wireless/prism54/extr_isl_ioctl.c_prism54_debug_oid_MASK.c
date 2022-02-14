
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int name; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int priv_oid; } ;
typedef TYPE_1__ islpci_private ;
typedef int __u32 ;


 TYPE_1__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0, struct iw_request_info *VAR_1,
    __u32 * VAR_2, char *VAR_3)
{
 islpci_private *VAR_4 = FUNC_0(VAR_0);

 VAR_4->priv_oid = *VAR_2;
 FUNC_1("%s: oid 0x%08X\n", VAR_0->name, *VAR_2);

 return 0;
}
