
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int dummy; } ;
struct nvme_cmd_info {void* ctx; int fn; } ;
typedef int nvme_completion_fn ;


 void* VAR_0 ;
 struct nvme_cmd_info* FUNC_0 (struct nvme_queue*) ;
 int VAR_1 ;

__attribute__((used)) static void *FUNC_1(struct nvme_queue *VAR_2, int VAR_3,
      nvme_completion_fn *VAR_4)
{
 void *VAR_5;
 struct nvme_cmd_info *VAR_6 = FUNC_0(VAR_2);
 if (VAR_4)
  *VAR_4 = VAR_6[VAR_3].fn;
 VAR_5 = VAR_6[VAR_3].ctx;
 VAR_6[VAR_3].fn = VAR_1;
 VAR_6[VAR_3].ctx = VAR_0;
 return VAR_5;
}
