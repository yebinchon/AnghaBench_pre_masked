
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_queue {int q_depth; int cmdid_data; } ;
struct nvme_cmd_info {unsigned int timeout; void* ctx; int fn; } ;
typedef int nvme_completion_fn ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 unsigned int VAR_1 ;
 struct nvme_cmd_info* FUNC_1 (struct nvme_queue*) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct nvme_queue *VAR_2, void *VAR_3,
    nvme_completion_fn VAR_4, unsigned VAR_5)
{
 int VAR_6 = VAR_2->q_depth - 1;
 struct nvme_cmd_info *VAR_7 = FUNC_1(VAR_2);
 int VAR_8;

 do {
  VAR_8 = FUNC_0(VAR_2->cmdid_data, VAR_6);
  if (VAR_8 >= VAR_6)
   return -VAR_0;
 } while (FUNC_2(VAR_8, VAR_2->cmdid_data));

 VAR_7[VAR_8].fn = VAR_4;
 VAR_7[VAR_8].ctx = VAR_3;
 VAR_7[VAR_8].timeout = VAR_1 + VAR_5;
 return VAR_8;
}
