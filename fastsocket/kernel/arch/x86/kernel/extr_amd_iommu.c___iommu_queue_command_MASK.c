
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iommu_cmd {int dummy; } ;
struct amd_iommu {int cmd_buf_size; scalar_t__ mmio_base; int * cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct iommu_cmd*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct amd_iommu *VAR_4, struct iommu_cmd *VAR_5)
{
 u32 VAR_6, VAR_7;
 u8 *VAR_8;

 FUNC_0(VAR_4->cmd_buf_size & VAR_0);
 VAR_6 = FUNC_2(VAR_4->mmio_base + VAR_3);
 VAR_8 = VAR_4->cmd_buf + VAR_6;
 FUNC_1(VAR_8, VAR_5, sizeof(*VAR_5));
 VAR_6 = (VAR_6 + sizeof(*VAR_5)) % VAR_4->cmd_buf_size;
 VAR_7 = FUNC_2(VAR_4->mmio_base + VAR_2);
 if (VAR_6 == VAR_7)
  return -VAR_1;
 FUNC_3(VAR_6, VAR_4->mmio_base + VAR_3);

 return 0;
}
