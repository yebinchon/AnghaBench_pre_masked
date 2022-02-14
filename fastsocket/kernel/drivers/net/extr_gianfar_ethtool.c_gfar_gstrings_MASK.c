
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct gfar_private {int device_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 struct gfar_private* FUNC_1 (struct net_device*) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5, u32 VAR_6, u8 * VAR_7)
{
 struct gfar_private *VAR_8 = FUNC_1(VAR_5);

 if (VAR_8->device_flags & VAR_1)
  FUNC_0(VAR_7, VAR_4, VAR_3 * VAR_0);
 else
  FUNC_0(VAR_7, VAR_4,
    VAR_2 * VAR_0);
}
