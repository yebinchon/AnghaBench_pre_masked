
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int * lru; int * n_buffers; } ;
struct dm_buffer {size_t list_mode; int lru_list; struct dm_bufio_client* c; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct dm_buffer *VAR_0, int VAR_1)
{
 struct dm_bufio_client *VAR_2 = VAR_0->c;

 FUNC_0(!VAR_2->n_buffers[VAR_0->list_mode]);

 VAR_2->n_buffers[VAR_0->list_mode]--;
 VAR_2->n_buffers[VAR_1]++;
 VAR_0->list_mode = VAR_1;
 FUNC_1(&VAR_0->lru_list, &VAR_2->lru[VAR_1]);
}
