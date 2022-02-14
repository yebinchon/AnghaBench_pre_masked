
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_array {int size; } ;
struct iscsi_sge {int dummy; } ;
struct TYPE_4__ {int iscsi_icd_start; } ;
struct TYPE_3__ {int num_sge_per_io; } ;
struct beiscsi_hba {int ctrl; TYPE_2__ fw_config; TYPE_1__ params; struct be_mem_descriptor* init_mem; } ;
struct be_mem_descriptor {unsigned int num_elements; struct mem_array* mem_array; } ;
struct be_dma_mem {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct be_dma_mem*,unsigned int,int) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*) ;
 int FUNC_2 (struct beiscsi_hba*,struct mem_array*,struct be_dma_mem*) ;

__attribute__((used)) static int
FUNC_3(struct beiscsi_hba *VAR_5)
{
 struct be_mem_descriptor *VAR_6;
 struct mem_array *VAR_7;
 unsigned int VAR_8, VAR_9;
 struct be_dma_mem VAR_10;
 int VAR_11;

 VAR_6 = VAR_5->init_mem;
 VAR_6 += VAR_1;
 VAR_7 = VAR_6->mem_array;

 VAR_8 = (sizeof(struct iscsi_sge) * VAR_5->params.num_sge_per_io *
   VAR_5->fw_config.iscsi_icd_start) / VAR_4;
 for (VAR_9 = 0; VAR_9 < VAR_6->num_elements; VAR_9++) {
  FUNC_2(VAR_5, VAR_7, &VAR_10);
  VAR_11 = FUNC_0(&VAR_5->ctrl, &VAR_10,
      VAR_8,
      (VAR_7->size / VAR_4));
  VAR_8 += VAR_7->size / VAR_4;
  if (VAR_11 != 0) {
   FUNC_1(VAR_5, VAR_2, VAR_0,
        "BM_%d : post sgl failed.\n");
   return VAR_11;
  }
  VAR_7++;
 }
 FUNC_1(VAR_5, VAR_3, VAR_0,
      "BM_%d : POSTED PAGES\n");
 return 0;
}
