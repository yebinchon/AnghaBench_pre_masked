
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef struct cmb* u16 ;
struct cmb_data {scalar_t__ hw_block; } ;
struct cmb {int dummy; } ;
struct ccw_device {int ccwlock; TYPE_1__* private; } ;
struct TYPE_4__ {int mem; } ;
struct TYPE_3__ {struct cmb_data* cmb; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct ccw_device*,scalar_t__,int ,struct cmb*) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct ccw_device *VAR_2, u32 VAR_3)
{
 u16 VAR_4;
 struct cmb_data *VAR_5;
 unsigned long VAR_6;

 FUNC_1(VAR_2->ccwlock, VAR_6);
 if (!VAR_2->private->cmb) {
  FUNC_2(VAR_2->ccwlock, VAR_6);
  return -VAR_0;
 }
 VAR_5 = VAR_2->private->cmb;
 VAR_4 = VAR_3 ? (struct cmb *)VAR_5->hw_block - VAR_1.mem : 0;
 FUNC_2(VAR_2->ccwlock, VAR_6);

 return FUNC_0(VAR_2, VAR_3, 0, VAR_4);
}
