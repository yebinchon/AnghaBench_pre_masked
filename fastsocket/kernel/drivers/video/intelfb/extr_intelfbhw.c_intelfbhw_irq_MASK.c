
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {int wait; int count; int pan_offset; scalar_t__ pan_display; } ;
struct intelfb_info {int int_lock; TYPE_3__ vsync; TYPE_2__* info; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int vmode; } ;
struct TYPE_5__ {TYPE_1__ var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_6, void *VAR_7)
{
 u16 VAR_8;
 struct intelfb_info *VAR_9 = VAR_7;

 FUNC_5(&VAR_9->int_lock);

 VAR_8 = FUNC_1(VAR_2);
 if (VAR_9->info->var.vmode & VAR_1)
  VAR_8 &= VAR_4;
 else
  VAR_8 &= VAR_5;

 if (VAR_8 == 0) {
  FUNC_6(&VAR_9->int_lock);
  return FUNC_2(0);
 }


 FUNC_3(VAR_3, FUNC_0(VAR_3));

 FUNC_4(VAR_2, VAR_8);
 if (VAR_9->vsync.pan_display) {
  VAR_9->vsync.pan_display = 0;
  FUNC_3(VAR_0, VAR_9->vsync.pan_offset);
 }

 VAR_9->vsync.count++;
 FUNC_7(&VAR_9->vsync.wait);

 FUNC_6(&VAR_9->int_lock);

 return FUNC_2(1);
}
