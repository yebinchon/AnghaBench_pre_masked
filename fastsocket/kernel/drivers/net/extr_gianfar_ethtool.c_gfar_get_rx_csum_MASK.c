
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct net_device {int dummy; } ;
struct gfar_private {int device_flags; int rx_csum_enable; } ;


 int VAR_0 ;
 struct gfar_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static uint32_t FUNC_1(struct net_device *VAR_1)
{
 struct gfar_private *VAR_2 = FUNC_0(VAR_1);

 if (!(VAR_2->device_flags & VAR_0))
  return 0;

 return VAR_2->rx_csum_enable;
}
