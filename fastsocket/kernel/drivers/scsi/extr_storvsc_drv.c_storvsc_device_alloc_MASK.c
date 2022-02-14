
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storvsc_cmd_request {int dummy; } ;
struct stor_mem_pools {int request_pool; int request_mempool; } ;
struct scsi_device {struct stor_mem_pools* hostdata; int sdev_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct stor_mem_pools*) ;
 int FUNC_2 (int ,int,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 struct stor_mem_pools* FUNC_4 (int,int ) ;
 int VAR_4 ;
 int FUNC_5 (int,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct scsi_device *VAR_6)
{
 struct stor_mem_pools *VAR_7;
 int VAR_8 = VAR_3;

 VAR_7 = FUNC_4(sizeof(struct stor_mem_pools), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->request_pool =
  FUNC_2(FUNC_0(&VAR_6->sdev_dev),
    sizeof(struct storvsc_cmd_request), 0,
    VAR_2, ((void*)0));

 if (!VAR_7->request_pool)
  goto err0;

 VAR_7->request_mempool = FUNC_5(VAR_8, VAR_4,
      VAR_5,
      VAR_7->request_pool);

 if (!VAR_7->request_mempool)
  goto err1;

 VAR_6->hostdata = VAR_7;

 return 0;

err1:
 FUNC_3(VAR_7->request_pool);

err0:
 FUNC_1(VAR_7);
 return -VAR_0;
}
