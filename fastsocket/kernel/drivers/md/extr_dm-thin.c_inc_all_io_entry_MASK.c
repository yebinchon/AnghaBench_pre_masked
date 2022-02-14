
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pool {int all_io_ds; } ;
struct dm_thin_endio_hook {int all_io_entry; } ;
struct bio {int bi_rw; } ;
struct TYPE_2__ {struct dm_thin_endio_hook* ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct bio*) ;

__attribute__((used)) static void FUNC_2(struct pool *VAR_1, struct bio *VAR_2)
{
 struct dm_thin_endio_hook *VAR_3;

 if (VAR_2->bi_rw & VAR_0)
  return;

 VAR_3 = FUNC_1(VAR_2)->ptr;
 VAR_3->all_io_entry = FUNC_0(VAR_1->all_io_ds);
}
