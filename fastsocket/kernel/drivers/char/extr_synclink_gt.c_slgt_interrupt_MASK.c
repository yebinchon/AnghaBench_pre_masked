
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; } ;
struct slgt_info {int irq_occurred; unsigned int port_count; int bh_requested; int irq_level; int lock; int task; int device_name; int bh_running; scalar_t__ pending_bh; scalar_t__ netcount; TYPE_1__ port; struct slgt_info** port_array; scalar_t__ gpio_present; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct slgt_info*,unsigned int,unsigned int) ;
 int FUNC_2 (struct slgt_info*) ;
 int FUNC_3 (struct slgt_info*) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (struct slgt_info*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct slgt_info*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 struct slgt_info *VAR_9 = VAR_8;
 unsigned int VAR_10;
 unsigned int VAR_11;

 FUNC_0(("slgt_interrupt irq=%d entry\n", VAR_9->irq_level));

 FUNC_7(&VAR_9->lock);

 while((VAR_10 = FUNC_5(VAR_9, VAR_3) & 0xffffff00)) {
  FUNC_0(("%s gsr=%08x\n", VAR_9->device_name, VAR_10));
  VAR_9->irq_occurred = 1;
  for(VAR_11=0; VAR_11 < VAR_9->port_count ; VAR_11++) {
   if (VAR_9->port_array[VAR_11] == ((void*)0))
    continue;
   if (VAR_10 & (VAR_2 << VAR_11))
    FUNC_3(VAR_9->port_array[VAR_11]);
   if (VAR_10 & (VAR_0 << (VAR_11*2)))
    FUNC_2(VAR_9->port_array[VAR_11]);
   if (VAR_10 & (VAR_1 << (VAR_11*2)))
    FUNC_4(VAR_9->port_array[VAR_11]);
  }
 }

 if (VAR_9->gpio_present) {
  unsigned int VAR_12;
  unsigned int VAR_13;
  while ((VAR_13 = FUNC_5(VAR_9, VAR_4)) != 0) {
   FUNC_0(("%s iosr=%08x\n", VAR_9->device_name, VAR_13));

   VAR_12 = FUNC_5(VAR_9, VAR_5);

   FUNC_9(VAR_9, VAR_4, VAR_13);
   for (VAR_11=0 ; VAR_11 < VAR_9->port_count ; VAR_11++) {
    if (VAR_9->port_array[VAR_11] != ((void*)0))
     FUNC_1(VAR_9->port_array[VAR_11], VAR_13, VAR_12);
   }
  }
 }

 for(VAR_11=0; VAR_11 < VAR_9->port_count ; VAR_11++) {
  struct slgt_info *VAR_14 = VAR_9->port_array[VAR_11];

  if (VAR_14 && (VAR_14->port.count || VAR_14->netcount) &&
      VAR_14->pending_bh && !VAR_14->bh_running &&
      !VAR_14->bh_requested) {
   FUNC_0(("%s bh queued\n", VAR_14->device_name));
   FUNC_6(&VAR_14->task);
   VAR_14->bh_requested = 1;
  }
 }

 FUNC_8(&VAR_9->lock);

 FUNC_0(("slgt_interrupt irq=%d exit\n", VAR_9->irq_level));
 return VAR_6;
}
