
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct bcma_drv_cc {int setup_done; int capabilities; int ticks_per_ms; TYPE_3__* core; } ;
struct TYPE_6__ {int leddc_on_time; int leddc_off_time; } ;
struct TYPE_8__ {TYPE_2__ sprom; } ;
struct TYPE_5__ {int rev; } ;
struct TYPE_7__ {TYPE_4__* bus; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bcma_drv_cc*,int ,int) ;
 int FUNC_1 (struct bcma_drv_cc*) ;
 int FUNC_2 (struct bcma_drv_cc*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (struct bcma_drv_cc*) ;

void FUNC_5(struct bcma_drv_cc *VAR_7)
{
 u32 VAR_8 = 10;
 u32 VAR_9 = 90;

 if (VAR_7->setup_done)
  return;

 FUNC_2(VAR_7);

 if (VAR_7->core->id.rev >= 20) {
  FUNC_0(VAR_7, VAR_3, 0);
  FUNC_0(VAR_7, VAR_2, 0);
 }

 if (VAR_7->capabilities & VAR_1)
  FUNC_4(VAR_7);
 if (VAR_7->capabilities & VAR_0)
  FUNC_3(VAR_7->core->bus, "Power control not implemented!\n");

 if (VAR_7->core->id.rev >= 16) {
  if (VAR_7->core->bus->sprom.leddc_on_time &&
      VAR_7->core->bus->sprom.leddc_off_time) {
   VAR_8 = VAR_7->core->bus->sprom.leddc_on_time;
   VAR_9 = VAR_7->core->bus->sprom.leddc_off_time;
  }
  FUNC_0(VAR_7, VAR_4,
   ((VAR_8 << VAR_6) |
    (VAR_9 << VAR_5)));
 }
 VAR_7->ticks_per_ms = FUNC_1(VAR_7);

 VAR_7->setup_done = 1;
}
