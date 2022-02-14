
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_key_state {int debounce; struct gpio_input_state* ds; } ;
struct gpio_input_state {TYPE_1__* info; int input_dev; int irq_lock; int timer; int wake_lock; int debounce_count; int use_irq; struct gpio_key_state* key_state; } ;
struct gpio_event_direct_entry {int code; int gpio; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ tv64; } ;
struct TYPE_3__ {int flags; int type; TYPE_2__ debounce_time; struct gpio_event_direct_entry* keymap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (char*,int ,int ,int,int ,...) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_8, void *VAR_9)
{
 struct gpio_key_state *VAR_10 = VAR_9;
 struct gpio_input_state *VAR_11 = VAR_10->ds;
 int VAR_12 = VAR_10 - VAR_11->key_state;
 const struct gpio_event_direct_entry *VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 if (!VAR_11->use_irq)
  return VAR_7;

 VAR_13 = &VAR_11->info->keymap[VAR_12];

 if (VAR_11->info->debounce_time.tv64) {
  FUNC_5(&VAR_11->irq_lock, VAR_14);
  if (VAR_10->debounce & VAR_2) {
   VAR_10->debounce = VAR_0;
   if (VAR_11->debounce_count++ == 0) {
    FUNC_7(&VAR_11->wake_lock);
    FUNC_2(
     &VAR_11->timer, VAR_11->info->debounce_time,
     VAR_6);
   }
   if (VAR_11->info->flags & VAR_5)
    FUNC_4("gpio_event_input_irq_handler: "
     "key %x-%x, %d (%d) start debounce\n",
     VAR_11->info->type, VAR_13->code,
     VAR_12, VAR_13->gpio);
  } else {
   FUNC_0(VAR_8);
   VAR_10->debounce = VAR_1;
  }
  FUNC_6(&VAR_11->irq_lock, VAR_14);
 } else {
  VAR_15 = FUNC_1(VAR_13->gpio) ^
   !(VAR_11->info->flags & VAR_3);
  if (VAR_11->info->flags & VAR_4)
   FUNC_4("gpio_event_input_irq_handler: key %x-%x, %d "
    "(%d) changed to %d\n",
    VAR_11->info->type, VAR_13->code, VAR_12,
    VAR_13->gpio, VAR_15);
  FUNC_3(VAR_11->input_dev, VAR_11->info->type,
       VAR_13->code, VAR_15);
 }
 return VAR_7;
}
