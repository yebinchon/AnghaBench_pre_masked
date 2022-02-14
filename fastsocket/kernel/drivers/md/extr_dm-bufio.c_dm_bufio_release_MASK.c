
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int free_buffer_wait; } ;
struct dm_buffer {int state; scalar_t__ write_error; scalar_t__ read_error; int hold_count; struct dm_bufio_client* c; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dm_buffer*) ;
 int FUNC_2 (struct dm_buffer*) ;
 int FUNC_3 (struct dm_bufio_client*) ;
 int FUNC_4 (struct dm_bufio_client*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct dm_buffer *VAR_3)
{
 struct dm_bufio_client *VAR_4 = VAR_3->c;

 FUNC_3(VAR_4);

 FUNC_0(!VAR_3->hold_count);

 VAR_3->hold_count--;
 if (!VAR_3->hold_count) {
  FUNC_6(&VAR_4->free_buffer_wait);






  if ((VAR_3->read_error || VAR_3->write_error) &&
      !FUNC_5(VAR_1, &VAR_3->state) &&
      !FUNC_5(VAR_2, &VAR_3->state) &&
      !FUNC_5(VAR_0, &VAR_3->state)) {
   FUNC_2(VAR_3);
   FUNC_1(VAR_3);
  }
 }

 FUNC_4(VAR_4);
}
