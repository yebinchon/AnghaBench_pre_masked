
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct net_device {int features; } ;
struct gfar_private {int device_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfar_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, uint32_t VAR_4)
{
 struct gfar_private *VAR_5 = FUNC_0(VAR_3);

 if (!(VAR_5->device_flags & VAR_1))
  return -VAR_0;

 FUNC_1(VAR_3);

 if (VAR_4)
  VAR_3->features |= VAR_2;
 else
  VAR_3->features &= ~VAR_2;

 FUNC_2(VAR_3);

 return 0;
}
