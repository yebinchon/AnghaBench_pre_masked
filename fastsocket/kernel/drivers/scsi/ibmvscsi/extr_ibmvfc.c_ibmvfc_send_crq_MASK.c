
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vio_dev {int unit_address; } ;
struct ibmvfc_host {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct vio_dev* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ibmvfc_host *VAR_1, u64 VAR_2, u64 VAR_3)
{
 struct vio_dev *VAR_4 = FUNC_1(VAR_1->dev);
 return FUNC_0(VAR_0, VAR_4->unit_address, VAR_2, VAR_3);
}
