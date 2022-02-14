
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int read_cnt; int receive_room; int read_lock; int canon_data; scalar_t__ icanon; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_1->read_lock, VAR_3);

 VAR_2 = VAR_0 - VAR_1->read_cnt - 1;






 if (VAR_2 <= 0)
  VAR_2 = VAR_1->icanon && !VAR_1->canon_data;
 VAR_1->receive_room = VAR_2;

 FUNC_1(&VAR_1->read_lock, VAR_3);
}
