
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as_data {unsigned long* batch_expire; unsigned long current_batch_expires; int write_batch_count; scalar_t__ current_write_count; int write_batch_idled; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static void FUNC_0(struct as_data *VAR_2)
{
 unsigned long VAR_3 = VAR_2->batch_expire[VAR_0];
 long VAR_4;

 VAR_4 = (VAR_1 - VAR_2->current_batch_expires) + VAR_3;
 if (VAR_4 < 0)
  VAR_4 = 0;

 if (VAR_4 > VAR_3 && !VAR_2->write_batch_idled) {
  if (VAR_4 > VAR_3 * 3)
   VAR_2->write_batch_count /= 2;
  else
   VAR_2->write_batch_count--;
 } else if (VAR_4 < VAR_3 && VAR_2->current_write_count == 0) {
  if (VAR_3 > VAR_4 * 3)
   VAR_2->write_batch_count *= 2;
  else
   VAR_2->write_batch_count++;
 }

 if (VAR_2->write_batch_count < 1)
  VAR_2->write_batch_count = 1;
}
