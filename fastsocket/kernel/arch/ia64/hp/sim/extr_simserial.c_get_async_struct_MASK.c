
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_state {struct async_struct* info; int xmit_fifo_size; int flags; int port; int count; } ;
struct async_struct {int line; struct serial_state* state; int work; int xmit_fifo_size; int flags; int port; int magic; int delta_msr_wait; int close_wait; int open_wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct async_struct*) ;
 struct async_struct* FUNC_3 (int,int ) ;
 struct serial_state* VAR_4 ;

__attribute__((used)) static int FUNC_4(int VAR_5, struct async_struct **VAR_6)
{
 struct async_struct *VAR_7;
 struct serial_state *VAR_8;

 VAR_8 = VAR_4 + VAR_5;
 VAR_8->count++;
 if (VAR_8->info) {
  *VAR_6 = VAR_8->info;
  return 0;
 }
 VAR_7 = FUNC_3(sizeof(struct async_struct), VAR_1);
 if (!VAR_7) {
  VAR_8->count--;
  return -VAR_0;
 }
 FUNC_1(&VAR_7->open_wait);
 FUNC_1(&VAR_7->close_wait);
 FUNC_1(&VAR_7->delta_msr_wait);
 VAR_7->magic = VAR_2;
 VAR_7->port = VAR_8->port;
 VAR_7->flags = VAR_8->flags;
 VAR_7->xmit_fifo_size = VAR_8->xmit_fifo_size;
 VAR_7->line = VAR_5;
 FUNC_0(&VAR_7->work, VAR_3);
 VAR_7->state = VAR_8;
 if (VAR_8->info) {
  FUNC_2(VAR_7);
  *VAR_6 = VAR_8->info;
  return 0;
 }
 *VAR_6 = VAR_8->info = VAR_7;
 return 0;
}
