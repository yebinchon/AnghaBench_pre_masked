
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int q_depth; int sq_full; int cmdid_data; } ;
struct nvme_cmd_info {void* ctx; void* fn; } ;
typedef void* nvme_completion_fn ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct nvme_cmd_info* FUNC_1 (struct nvme_queue*) ;
 void* VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void *FUNC_3(struct nvme_queue *VAR_3, int VAR_4,
      nvme_completion_fn *VAR_5)
{
 void *VAR_6;
 struct nvme_cmd_info *VAR_7 = FUNC_1(VAR_3);

 if (VAR_4 >= VAR_3->q_depth) {
  *VAR_5 = VAR_2;
  return VAR_1;
 }
 if (VAR_5)
  *VAR_5 = VAR_7[VAR_4].fn;
 VAR_6 = VAR_7[VAR_4].ctx;
 VAR_7[VAR_4].fn = VAR_2;
 VAR_7[VAR_4].ctx = VAR_0;
 FUNC_0(VAR_4, VAR_3->cmdid_data);
 FUNC_2(&VAR_3->sq_full);
 return VAR_6;
}
