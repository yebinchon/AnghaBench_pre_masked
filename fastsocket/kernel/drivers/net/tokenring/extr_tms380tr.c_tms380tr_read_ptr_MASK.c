
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ AdapterRAMPtr; int BurnedInAddrPtr; } ;
struct net_local {TYPE_1__ intptrs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned short) ;
 int FUNC_1 (unsigned short) ;
 struct net_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,unsigned char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct net_local *VAR_2 = FUNC_2(VAR_1);
 unsigned short VAR_3;

 FUNC_3(VAR_1, (unsigned char *)&VAR_2->intptrs.BurnedInAddrPtr,
   VAR_0, 16);
 FUNC_3(VAR_1, (unsigned char *)&VAR_3,
   FUNC_1((unsigned short)VAR_2->intptrs.AdapterRAMPtr), 2);
 return FUNC_0(VAR_3);
}
