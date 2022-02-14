
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct net_device {int dummy; } ;
struct gfar_private {int msg_enable; } ;


 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0, uint32_t VAR_1)
{
 struct gfar_private *VAR_2 = FUNC_0(VAR_0);
 VAR_2->msg_enable = VAR_1;
}
