
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ read_cnt; scalar_t__ canon_head; scalar_t__ read_tail; int read_lock; scalar_t__ canon_data; int icanon; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct tty_struct *VAR_1)
{
 unsigned long VAR_2;
 ssize_t VAR_3 = 0;

 FUNC_0(&VAR_1->read_lock, VAR_2);
 if (!VAR_1->icanon) {
  VAR_3 = VAR_1->read_cnt;
 } else if (VAR_1->canon_data) {
  VAR_3 = (VAR_1->canon_head > VAR_1->read_tail) ?
   VAR_1->canon_head - VAR_1->read_tail :
   VAR_1->canon_head + (VAR_0 - VAR_1->read_tail);
 }
 FUNC_1(&VAR_1->read_lock, VAR_2);
 return VAR_3;
}
