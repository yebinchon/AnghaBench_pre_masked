
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct files_struct {int file_lock; } ;
struct fdtable {unsigned long max_fds; TYPE_1__* close_on_exec; } ;
struct TYPE_2__ {unsigned long* fds_bits; } ;


 long VAR_0 ;
 struct fdtable* FUNC_0 (struct files_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct files_struct * VAR_1)
{
 long VAR_2 = -1;
 struct fdtable *VAR_3;

 FUNC_1(&VAR_1->file_lock);
 for (;;) {
  unsigned long VAR_4, VAR_5;

  VAR_2++;
  VAR_5 = VAR_2 * VAR_0;
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_5 >= VAR_3->max_fds)
   break;
  VAR_4 = VAR_3->close_on_exec->fds_bits[VAR_2];
  if (!VAR_4)
   continue;
  VAR_3->close_on_exec->fds_bits[VAR_2] = 0;
  FUNC_2(&VAR_1->file_lock);
  for ( ; VAR_4 ; VAR_5++,VAR_4 >>= 1) {
   if (VAR_4 & 1) {
    FUNC_3(VAR_5);
   }
  }
  FUNC_1(&VAR_1->file_lock);

 }
 FUNC_2(&VAR_1->file_lock);
}
