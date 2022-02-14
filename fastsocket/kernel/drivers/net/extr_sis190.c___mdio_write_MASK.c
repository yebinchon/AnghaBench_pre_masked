
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis190_private {int mmio_addr; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,int,int,int) ;
 struct sis190_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 struct sis190_private *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_4->mmio_addr, VAR_1, VAR_2, VAR_3);
}
