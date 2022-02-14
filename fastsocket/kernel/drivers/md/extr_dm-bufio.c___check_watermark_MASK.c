
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dm_bufio_client {unsigned long* n_buffers; } ;
struct dm_buffer {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dm_buffer*) ;
 int FUNC_1 (struct dm_bufio_client*,unsigned long*,unsigned long*) ;
 struct dm_buffer* FUNC_2 (struct dm_bufio_client*) ;
 int FUNC_3 (struct dm_bufio_client*,int,struct list_head*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct dm_bufio_client *VAR_2,
         struct list_head *VAR_3)
{
 unsigned long VAR_4, VAR_5;

 FUNC_1(VAR_2, &VAR_4, &VAR_5);

 while (VAR_2->n_buffers[VAR_0] + VAR_2->n_buffers[VAR_1] >
        VAR_5) {

  struct dm_buffer *VAR_6 = FUNC_2(VAR_2);

  if (!VAR_6)
   return;

  FUNC_0(VAR_6);
  FUNC_4();
 }

 if (VAR_2->n_buffers[VAR_1] > VAR_4)
  FUNC_3(VAR_2, 1, VAR_3);
}
