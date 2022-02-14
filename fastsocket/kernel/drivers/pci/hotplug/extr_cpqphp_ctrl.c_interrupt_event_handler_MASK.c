
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ data; int function; scalar_t__ expires; } ;
struct slot {scalar_t__ state; TYPE_2__ task_event; struct controller* ctrl; scalar_t__ hp_slot; int number; } ;
struct pci_func {int dummy; } ;
struct controller {TYPE_1__* event_queue; int crit_sect; scalar_t__ slot_device_offset; int bus; } ;
struct TYPE_5__ {scalar_t__ event_type; scalar_t__ hp_slot; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct controller*,scalar_t__) ;
 struct slot* FUNC_2 (struct controller*,scalar_t__) ;
 struct pci_func* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct controller*,scalar_t__) ;
 int FUNC_7 (struct controller*,scalar_t__) ;
 int FUNC_8 (struct controller*,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (struct controller*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_12 ;
 int FUNC_14 (struct controller*) ;
 int FUNC_15 (struct controller*,struct slot*) ;
 int FUNC_16 (struct controller*) ;

__attribute__((used)) static void FUNC_17(struct controller *VAR_13)
{
 int VAR_14 = 0;
 int VAR_15 = 1;
 struct pci_func *VAR_16;
 u8 VAR_17;
 struct slot *VAR_18;

 while (VAR_15) {
  VAR_15 = 0;

  for (VAR_14 = 0; VAR_14 < 10; VAR_14++) {

   if (VAR_13->event_queue[VAR_14].event_type != 0) {
    VAR_17 = VAR_13->event_queue[VAR_14].hp_slot;

    VAR_16 = FUNC_3(VAR_13->bus, (VAR_17 + VAR_13->slot_device_offset), 0);
    if (!VAR_16)
     return;

    VAR_18 = FUNC_2(VAR_13, VAR_17 + VAR_13->slot_device_offset);
    if (!VAR_18)
     return;

    FUNC_4("hp_slot %d, func %p, p_slot %p\n",
        VAR_17, VAR_16, VAR_18);

    if (VAR_13->event_queue[VAR_14].event_type == VAR_4) {
     FUNC_4("button pressed\n");
    } else if (VAR_13->event_queue[VAR_14].event_type ==
        VAR_3) {
     FUNC_4("button cancel\n");
     FUNC_5(&VAR_18->task_event);

     FUNC_12(&VAR_13->crit_sect);

     if (VAR_18->state == VAR_0) {

      FUNC_4("turn on green LED\n");
      FUNC_8 (VAR_13, VAR_17);
     } else if (VAR_18->state == VAR_1) {

      FUNC_4("turn off green LED\n");
      FUNC_7 (VAR_13, VAR_17);
     }

     FUNC_9(VAR_9, VAR_18->number);

     VAR_18->state = VAR_7;

     FUNC_1 (VAR_13, VAR_17);

     FUNC_14(VAR_13);


     FUNC_16 (VAR_13);

     FUNC_13(&VAR_13->crit_sect);
    }

    else if (VAR_13->event_queue[VAR_14].event_type == VAR_5) {
     FUNC_4("button release\n");

     if (FUNC_11 (VAR_13, VAR_17)) {
      FUNC_4("slot is on\n");
      VAR_18->state = VAR_0;
      FUNC_9(VAR_10, VAR_18->number);
     } else {
      FUNC_4("slot is off\n");
      VAR_18->state = VAR_1;
      FUNC_9(VAR_11, VAR_18->number);
     }
     FUNC_12(&VAR_13->crit_sect);

     FUNC_4("blink green LED and turn off amber\n");

     FUNC_1 (VAR_13, VAR_17);
     FUNC_6 (VAR_13, VAR_17);

     FUNC_14(VAR_13);


     FUNC_16 (VAR_13);

     FUNC_13(&VAR_13->crit_sect);
     FUNC_10(&VAR_18->task_event);
     VAR_18->hp_slot = VAR_17;
     VAR_18->ctrl = VAR_13;

     VAR_18->task_event.expires = VAR_8 + 5 * VAR_2;
     VAR_18->task_event.function = VAR_12;
     VAR_18->task_event.data = (u32) VAR_18;

     FUNC_4("add_timer p_slot = %p\n", VAR_18);
     FUNC_0(&VAR_18->task_event);
    }

    else if (VAR_13->event_queue[VAR_14].event_type == VAR_6) {
     FUNC_4("power fault\n");
    } else {

     if (VAR_18)
      FUNC_15(VAR_13, VAR_18);
    }

    VAR_13->event_queue[VAR_14].event_type = 0;

    VAR_15 = 1;
   }
  }
 }

 return;
}
