
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sas_task {struct mvs_slot_info* lldd_task; } ;
struct mvs_slot_info {int slot_tag; } ;
struct mvs_info {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct mvs_info *VAR_0, struct sas_task *VAR_1, u32 *VAR_2)
{
 if (VAR_1->lldd_task) {
  struct mvs_slot_info *VAR_3;
  VAR_3 = VAR_1->lldd_task;
  *VAR_2 = VAR_3->slot_tag;
  return 1;
 }
 return 0;
}
