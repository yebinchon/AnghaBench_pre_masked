
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {TYPE_2__* pdev; } ;
typedef int dma_addr_t ;
typedef int __le32 ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,int,int *,int ) ;
 int FUNC_5 (int *,int,void*,int ) ;
 scalar_t__ FUNC_6 (struct qlcnic_cmd_args*,struct qlcnic_adapter*,int ) ;
 int FUNC_7 (struct qlcnic_cmd_args*) ;
 int FUNC_8 (struct qlcnic_adapter*,struct qlcnic_cmd_args*) ;

__attribute__((used)) static int FUNC_9(struct qlcnic_adapter *VAR_4,
          u32 *VAR_5, u32 VAR_6)
{
 int VAR_7 = 0, VAR_8;
 void *VAR_9;
 __le32 *VAR_10;
 struct qlcnic_cmd_args VAR_11;
 dma_addr_t VAR_12 = 0;

 VAR_9 = FUNC_4(&VAR_4->pdev->dev, VAR_6,
          &VAR_12, VAR_1);
 if (!VAR_9) {
  FUNC_3(&VAR_4->pdev->dev,
   "Can't get memory for FW dump template\n");
  return -VAR_0;
 }

 if (FUNC_6(&VAR_11, VAR_4, VAR_2)) {
  VAR_7 = -VAR_0;
  goto free_mem;
 }

 VAR_11.req.arg[1] = FUNC_0(VAR_12);
 VAR_11.req.arg[2] = FUNC_1(VAR_12);
 VAR_11.req.arg[3] = VAR_6;
 VAR_7 = FUNC_8(VAR_4, &VAR_11);

 VAR_10 = VAR_9;
 if (VAR_7 == VAR_3) {
  for (VAR_8 = 0; VAR_8 < VAR_6 / sizeof(u32); VAR_8++)
   *VAR_5++ = FUNC_2(*VAR_10++);
 }

 FUNC_7(&VAR_11);

free_mem:
 FUNC_5(&VAR_4->pdev->dev, VAR_6, VAR_9, VAR_12);

 return VAR_7;
}
