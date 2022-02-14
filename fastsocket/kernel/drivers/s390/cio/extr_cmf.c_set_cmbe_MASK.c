
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cmb_data {int hw_block; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_2__ {struct cmb_data* cmb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ccw_device*,scalar_t__,int,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ccw_device *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 struct cmb_data *VAR_4;
 unsigned long VAR_5;

 FUNC_2(VAR_1->ccwlock, VAR_5);
 if (!VAR_1->private->cmb) {
  FUNC_3(VAR_1->ccwlock, VAR_5);
  return -VAR_0;
 }
 VAR_4 = VAR_1->private->cmb;
 VAR_3 = VAR_2 ? (unsigned long) FUNC_0(VAR_4->hw_block) : 0;
 FUNC_3(VAR_1->ccwlock, VAR_5);

 return FUNC_1(VAR_1, VAR_2, 1, VAR_3);
}
