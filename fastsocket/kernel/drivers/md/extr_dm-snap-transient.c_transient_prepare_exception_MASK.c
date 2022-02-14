
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transient_c {scalar_t__ next_free; } ;
struct dm_exception_store {scalar_t__ chunk_size; int snap; struct transient_c* context; } ;
struct dm_exception {int new_chunk; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int bdev; } ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct dm_exception_store*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct dm_exception_store *VAR_0,
           struct dm_exception *VAR_1)
{
 struct transient_c *VAR_2 = VAR_0->context;
 sector_t VAR_3 = FUNC_1(FUNC_0(VAR_0->snap)->bdev);

 if (VAR_3 < (VAR_2->next_free + VAR_0->chunk_size))
  return -1;

 VAR_1->new_chunk = FUNC_2(VAR_0, VAR_2->next_free);
 VAR_2->next_free += VAR_0->chunk_size;

 return 0;
}
