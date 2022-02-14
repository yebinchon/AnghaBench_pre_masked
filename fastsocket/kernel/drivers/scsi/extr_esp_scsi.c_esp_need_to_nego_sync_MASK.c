
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dummy; } ;
struct esp_target_data {scalar_t__ nego_goal_offset; scalar_t__ nego_goal_period; struct scsi_target* starget; } ;


 scalar_t__ FUNC_0 (struct scsi_target*) ;
 scalar_t__ FUNC_1 (struct scsi_target*) ;

__attribute__((used)) static int FUNC_2(struct esp_target_data *VAR_0)
{
 struct scsi_target *VAR_1 = VAR_0->starget;


 if (!FUNC_0(VAR_1) && !VAR_0->nego_goal_offset)
  return 0;

 if (FUNC_0(VAR_1) == VAR_0->nego_goal_offset &&
     FUNC_1(VAR_1) == VAR_0->nego_goal_period)
  return 0;

 return 1;
}
