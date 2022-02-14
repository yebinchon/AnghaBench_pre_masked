
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct reply_pool {int* head; size_t current_entry; int wraparound; } ;
struct TYPE_2__ {int (* command_completed ) (struct ctlr_info*,size_t) ;} ;
struct ctlr_info {int transMethod; size_t max_commands; int lock; int commands_outstanding; TYPE_1__ access; struct reply_pool* reply_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ctlr_info*,size_t) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline u32 FUNC_4(struct ctlr_info *VAR_2, u8 VAR_3)
{
 u32 VAR_4;
 struct reply_pool *VAR_5 = &VAR_2->reply_queue[VAR_3];
 unsigned long VAR_6;

 if (FUNC_3(!(VAR_2->transMethod & VAR_0)))
  return VAR_2->access.command_completed(VAR_2, VAR_3);

 if ((VAR_5->head[VAR_5->current_entry] & 1) == VAR_5->wraparound) {
  VAR_4 = VAR_5->head[VAR_5->current_entry];
  VAR_5->current_entry++;
  FUNC_0(&VAR_2->lock, VAR_6);
  VAR_2->commands_outstanding--;
  FUNC_1(&VAR_2->lock, VAR_6);
 } else {
  VAR_4 = VAR_1;
 }

 if (VAR_5->current_entry == VAR_2->max_commands) {
  VAR_5->current_entry = 0;
  VAR_5->wraparound ^= 1;
 }
 return VAR_4;
}
