
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bufio_client {int * cache_hash; int * lru; int * n_buffers; } ;
struct dm_buffer {int list_mode; int last_accessed; int hash_list; int lru_list; int block; struct dm_bufio_client* c; } ;
typedef int sector_t ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct dm_buffer *VAR_1, sector_t VAR_2, int VAR_3)
{
 struct dm_bufio_client *VAR_4 = VAR_1->c;

 VAR_4->n_buffers[VAR_3]++;
 VAR_1->block = VAR_2;
 VAR_1->list_mode = VAR_3;
 FUNC_2(&VAR_1->lru_list, &VAR_4->lru[VAR_3]);
 FUNC_1(&VAR_1->hash_list, &VAR_4->cache_hash[FUNC_0(VAR_2)]);
 VAR_1->last_accessed = VAR_0;
}
