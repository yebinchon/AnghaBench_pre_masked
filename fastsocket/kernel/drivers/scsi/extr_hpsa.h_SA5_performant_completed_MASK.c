
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct reply_pool {int* head; size_t current_entry; int wraparound; } ;
struct ctlr_info {size_t max_commands; int lock; int commands_outstanding; scalar_t__ vaddr; scalar_t__ msix_vector; scalar_t__ msi_vector; struct reply_pool* reply_queue; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(struct ctlr_info *VAR_4, u8 VAR_5)
{
 struct reply_pool *VAR_6 = &VAR_4->reply_queue[VAR_5];
 unsigned long VAR_7, VAR_8 = VAR_0;


 if (!(VAR_4->msi_vector || VAR_4->msix_vector)) {



  VAR_8 = FUNC_0(VAR_4->vaddr + VAR_3);
  FUNC_3(VAR_2, VAR_4->vaddr + VAR_1);



  VAR_8 = FUNC_0(VAR_4->vaddr + VAR_3);
 }

 if ((VAR_6->head[VAR_6->current_entry] & 1) == VAR_6->wraparound) {
  VAR_8 = VAR_6->head[VAR_6->current_entry];
  VAR_6->current_entry++;
  FUNC_1(&VAR_4->lock, VAR_7);
  VAR_4->commands_outstanding--;
  FUNC_2(&VAR_4->lock, VAR_7);
 } else {
  VAR_8 = VAR_0;
 }

 if (VAR_6->current_entry == VAR_4->max_commands) {
  VAR_6->current_entry = 0;
  VAR_6->wraparound ^= 1;
 }
 return VAR_8;
}
