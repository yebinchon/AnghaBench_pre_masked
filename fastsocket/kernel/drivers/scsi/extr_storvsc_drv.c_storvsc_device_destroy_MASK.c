
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stor_mem_pools {int request_pool; int request_mempool; } ;
struct scsi_device {struct stor_mem_pools* hostdata; } ;


 int FUNC_0 (struct stor_mem_pools*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_0)
{
 struct stor_mem_pools *VAR_1 = VAR_0->hostdata;

 FUNC_2(VAR_1->request_mempool);
 FUNC_1(VAR_1->request_pool);
 FUNC_0(VAR_1);
 VAR_0->hostdata = ((void*)0);
}
