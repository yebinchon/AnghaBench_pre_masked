
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_flags; scalar_t__ erasing; scalar_t__ canon_data; scalar_t__ canon_head; int echo_lock; scalar_t__ echo_overrun; scalar_t__ echo_cnt; scalar_t__ echo_pos; int read_lock; scalar_t__ read_cnt; scalar_t__ read_tail; scalar_t__ read_head; } ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_0)
{
 unsigned long VAR_1;

 FUNC_5(&VAR_0->read_lock, VAR_1);
 VAR_0->read_head = VAR_0->read_tail = VAR_0->read_cnt = 0;
 FUNC_6(&VAR_0->read_lock, VAR_1);

 FUNC_2(&VAR_0->echo_lock);
 VAR_0->echo_pos = VAR_0->echo_cnt = VAR_0->echo_overrun = 0;
 FUNC_3(&VAR_0->echo_lock);

 VAR_0->canon_head = VAR_0->canon_data = VAR_0->erasing = 0;
 FUNC_1(&VAR_0->read_flags, 0, sizeof VAR_0->read_flags);
 FUNC_4(VAR_0);
 FUNC_0(VAR_0);
}
