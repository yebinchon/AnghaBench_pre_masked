
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct znet_private {scalar_t__ sia_base; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct znet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (unsigned char,scalar_t__) ;

__attribute__((used)) static void FUNC_3 (struct net_device *VAR_0, int VAR_1)
{
 struct znet_private *VAR_2 = FUNC_1(VAR_0);
 unsigned char VAR_3;



 FUNC_2(0x10, VAR_2->sia_base);

 if (VAR_1)
  VAR_3 = FUNC_0(VAR_2->sia_base + 1) | 0x84;
 else
  VAR_3 = FUNC_0(VAR_2->sia_base + 1) & ~0x84;

 FUNC_2(VAR_3, VAR_2->sia_base+1);
}
