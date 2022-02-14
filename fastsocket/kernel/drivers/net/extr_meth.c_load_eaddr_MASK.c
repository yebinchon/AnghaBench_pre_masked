
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {scalar_t__* dev_addr; } ;
struct TYPE_3__ {int mac_addr; } ;
struct TYPE_4__ {TYPE_1__ eth; } ;


 int FUNC_0 (char*,scalar_t__*) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_1)
{
 int VAR_2;
 u64 VAR_3;

 FUNC_0("Loading MAC Address: %pM\n", VAR_1->dev_addr);
 VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < 6; VAR_2++)
  VAR_3 |= (u64)VAR_1->dev_addr[VAR_2] << ((5 - VAR_2) * 8);

 VAR_0->eth.mac_addr = VAR_3;
}
