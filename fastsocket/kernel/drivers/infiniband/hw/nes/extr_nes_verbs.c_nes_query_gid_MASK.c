
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int * raw; } ;
typedef int u8 ;
struct nes_vnic {TYPE_1__* netdev; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 struct nes_vnic* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_0, u8 VAR_1,
  int VAR_2, union ib_gid *VAR_3)
{
 struct nes_vnic *VAR_4 = FUNC_2(VAR_0);

 FUNC_1(&(VAR_3->raw[0]), 0, sizeof(VAR_3->raw));
 FUNC_0(&(VAR_3->raw[0]), VAR_4->netdev->dev_addr, 6);

 return 0;
}
