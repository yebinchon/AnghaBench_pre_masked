
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vxgedev {int pdev; } ;
struct net_device {int dummy; } ;
struct __vxge_hw_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct __vxge_hw_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, u32 VAR_5)
{
 struct vxgedev *VAR_6 = (struct vxgedev *)FUNC_1(VAR_4);
 struct __vxge_hw_device *VAR_7 = (struct __vxge_hw_device *)
   FUNC_2(VAR_6->pdev);

 FUNC_3(VAR_7, VAR_2);
 FUNC_0(VAR_5 ? (VAR_5 * VAR_0) : VAR_3);
 FUNC_3(VAR_7, VAR_1);

 return 0;
}
