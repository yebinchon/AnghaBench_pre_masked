
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pstore {int next_free; int current_area; } ;
struct dm_exception_store {int chunk_size; int snap; } ;
typedef int sector_t ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pstore* FUNC_2 (struct dm_exception_store*) ;

__attribute__((used)) static void FUNC_3(struct dm_exception_store *VAR_1,
        sector_t *VAR_2,
        sector_t *VAR_3,
        sector_t *VAR_4)
{
 struct pstore *VAR_5 = FUNC_2(VAR_1);

 *VAR_3 = VAR_5->next_free * VAR_1->chunk_size;
 *VAR_2 = FUNC_1(FUNC_0(VAR_1->snap)->bdev);






 *VAR_4 = (VAR_5->current_area + 1 + VAR_0) *
       VAR_1->chunk_size;
}
