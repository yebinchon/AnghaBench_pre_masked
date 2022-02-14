
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct cmb_data {struct cmb* last_block; } ;
struct cmb {int ssch_rsch_count; int sample_count; int device_active_only_time; int control_unit_queuing_time; int device_disconnect_time; int function_pending_time; int device_connect_time; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ cmb; } ;
 int FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static u64 FUNC_4(struct ccw_device *VAR_0, int VAR_1)
{
 struct cmb *VAR_2;
 u32 VAR_3;
 int VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 < 0)
  return 0;

 FUNC_1(VAR_0->ccwlock, VAR_5);
 if (!VAR_0->private->cmb) {
  VAR_4 = 0;
  goto out;
 }
 VAR_2 = ((struct cmb_data *)VAR_0->private->cmb)->last_block;

 switch (VAR_1) {
 case 128:
  VAR_4 = VAR_2->ssch_rsch_count;
  goto out;
 case 129:
  VAR_4 = VAR_2->sample_count;
  goto out;
 case 132:
  VAR_3 = VAR_2->device_connect_time;
  break;
 case 130:
  VAR_3 = VAR_2->function_pending_time;
  break;
 case 131:
  VAR_3 = VAR_2->device_disconnect_time;
  break;
 case 134:
  VAR_3 = VAR_2->control_unit_queuing_time;
  break;
 case 133:
  VAR_3 = VAR_2->device_active_only_time;
  break;
 default:
  VAR_4 = 0;
  goto out;
 }
 VAR_4 = FUNC_3(VAR_3, VAR_2->sample_count);
out:
 FUNC_2(VAR_0->ccwlock, VAR_5);
 return VAR_4;
}
