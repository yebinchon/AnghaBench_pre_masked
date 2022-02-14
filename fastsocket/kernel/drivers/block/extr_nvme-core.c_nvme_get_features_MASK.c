
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvme_dev {int dummy; } ;
struct TYPE_2__ {void* fid; int prp1; void* nsid; int opcode; } ;
struct nvme_command {TYPE_1__ features; } ;
typedef int dma_addr_t ;
typedef int c ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_command*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct nvme_dev*,struct nvme_command*,int *) ;

int FUNC_4(struct nvme_dev *VAR_1, unsigned VAR_2, unsigned VAR_3,
     dma_addr_t VAR_4, u32 *VAR_5)
{
 struct nvme_command VAR_6;

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.features.opcode = VAR_0;
 VAR_6.features.nsid = FUNC_0(VAR_3);
 VAR_6.features.prp1 = FUNC_1(VAR_4);
 VAR_6.features.fid = FUNC_0(VAR_2);

 return FUNC_3(VAR_1, &VAR_6, VAR_5);
}
