
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_buffer {scalar_t__ data_mode; TYPE_1__* c; } ;
typedef int sector_t ;
typedef int bio_end_io_t ;
struct TYPE_2__ {int block_size; int (* write_callback ) (struct dm_buffer*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dm_buffer*) ;
 int FUNC_1 (struct dm_buffer*,int,int ,int *) ;
 int FUNC_2 (struct dm_buffer*,int,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct dm_buffer *VAR_4, int VAR_5, sector_t VAR_6,
        bio_end_io_t *VAR_7)
{
 if (VAR_5 == VAR_3 && VAR_4->c->write_callback)
  VAR_4->c->write_callback(VAR_4);

 if (VAR_4->c->block_size <= VAR_1 * VAR_2 &&
     VAR_4->data_mode != VAR_0)
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
 else
  FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
}
