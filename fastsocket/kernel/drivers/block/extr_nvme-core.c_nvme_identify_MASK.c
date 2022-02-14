
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_dev {int dummy; } ;
struct TYPE_2__ {void* cns; int prp1; void* nsid; int opcode; } ;
struct nvme_command {TYPE_1__ identify; } ;
typedef int dma_addr_t ;
typedef int c ;


 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvme_command*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (struct nvme_dev*,struct nvme_command*,int *) ;

int FUNC_4(struct nvme_dev *VAR_1, unsigned VAR_2, unsigned VAR_3,
       dma_addr_t VAR_4)
{
 struct nvme_command VAR_5;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.identify.opcode = VAR_0;
 VAR_5.identify.nsid = FUNC_0(VAR_2);
 VAR_5.identify.prp1 = FUNC_1(VAR_4);
 VAR_5.identify.cns = FUNC_0(VAR_3);

 return FUNC_3(VAR_1, &VAR_5, ((void*)0));
}
