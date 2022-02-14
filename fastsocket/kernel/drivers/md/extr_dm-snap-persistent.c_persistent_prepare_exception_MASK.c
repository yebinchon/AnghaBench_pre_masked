
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pstore {int next_free; int pending_count; } ;
struct dm_exception_store {int chunk_size; int snap; } ;
struct dm_exception {int new_chunk; } ;
typedef int sector_t ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct pstore* FUNC_3 (struct dm_exception_store*) ;
 int FUNC_4 (struct pstore*) ;

__attribute__((used)) static int FUNC_5(struct dm_exception_store *VAR_1,
     struct dm_exception *VAR_2)
{
 struct pstore *VAR_3 = FUNC_3(VAR_1);
 sector_t VAR_4 = FUNC_2(FUNC_1(VAR_1->snap)->bdev);


 if (VAR_4 < ((VAR_3->next_free + 1) * VAR_1->chunk_size))
  return -VAR_0;

 VAR_2->new_chunk = VAR_3->next_free;





 VAR_3->next_free++;
 FUNC_4(VAR_3);

 FUNC_0(&VAR_3->pending_count);
 return 0;
}
