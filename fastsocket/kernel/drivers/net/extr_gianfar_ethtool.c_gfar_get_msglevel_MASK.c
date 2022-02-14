
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct net_device {int dummy; } ;
struct gfar_private {int msg_enable; } ;


 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static uint32_t FUNC_1(struct net_device *VAR_0)
{
 struct gfar_private *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->msg_enable;
}
