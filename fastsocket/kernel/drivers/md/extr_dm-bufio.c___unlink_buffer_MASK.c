
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int * n_buffers; } ;
struct dm_buffer {size_t list_mode; int lru_list; int hash_list; struct dm_bufio_client* c; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct dm_buffer *VAR_0)
{
 struct dm_bufio_client *VAR_1 = VAR_0->c;

 FUNC_0(!VAR_1->n_buffers[VAR_0->list_mode]);

 VAR_1->n_buffers[VAR_0->list_mode]--;
 FUNC_1(&VAR_0->hash_list);
 FUNC_2(&VAR_0->lru_list);
}
