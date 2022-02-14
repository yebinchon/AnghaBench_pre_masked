
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sync_cmd_info {int status; int task; int result; } ;
struct nvme_dev {int dummy; } ;
struct nvme_completion {int status; int result; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nvme_dev *VAR_0, void *VAR_1,
      struct nvme_completion *VAR_2)
{
 struct sync_cmd_info *VAR_3 = VAR_1;
 VAR_3->result = FUNC_1(&VAR_2->result);
 VAR_3->status = FUNC_0(&VAR_2->status) >> 1;
 FUNC_2(VAR_3->task);
}
