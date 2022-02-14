
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dummy; } ;
struct esp_target_data {scalar_t__ nego_goal_width; struct scsi_target* starget; } ;


 scalar_t__ FUNC_0 (struct scsi_target*) ;

__attribute__((used)) static int FUNC_1(struct esp_target_data *VAR_0)
{
 struct scsi_target *VAR_1 = VAR_0->starget;

 return FUNC_0(VAR_1) != VAR_0->nego_goal_width;
}
