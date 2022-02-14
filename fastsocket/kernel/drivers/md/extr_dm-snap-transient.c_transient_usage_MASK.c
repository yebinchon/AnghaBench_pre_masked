
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transient_c {scalar_t__ next_free; } ;
struct dm_exception_store {int snap; scalar_t__ context; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int bdev; } ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct dm_exception_store *VAR_0,
       sector_t *VAR_1,
       sector_t *VAR_2,
       sector_t *VAR_3)
{
 *VAR_2 = ((struct transient_c *) VAR_0->context)->next_free;
 *VAR_1 = FUNC_1(FUNC_0(VAR_0->snap)->bdev);
 *VAR_3 = 0;
}
