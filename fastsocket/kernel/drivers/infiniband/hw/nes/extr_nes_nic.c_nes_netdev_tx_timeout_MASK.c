
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;
struct nes_vnic {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 struct nes_vnic* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct nes_vnic*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct nes_vnic *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_2))
  FUNC_0(VAR_0, "%s: tx timeout\n", VAR_1->name);
}
