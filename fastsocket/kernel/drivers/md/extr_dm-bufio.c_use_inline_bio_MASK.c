
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bi_sector; int * bi_end_io; int bi_bdev; int bi_max_vecs; int bi_io_vec; } ;
struct dm_buffer {char* data; TYPE_2__ bio; TYPE_1__* c; int bio_vec; } ;
typedef int sector_t ;
typedef int bio_end_io_t ;
struct TYPE_5__ {int sectors_per_block_bits; int block_size; int bdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int,TYPE_2__*) ;
 int FUNC_4 (struct dm_buffer*,int,int,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(struct dm_buffer *VAR_2, int VAR_3, sector_t VAR_4,
      bio_end_io_t *VAR_5)
{
 char *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_2->bio);
 VAR_2->bio.bi_io_vec = VAR_2->bio_vec;
 VAR_2->bio.bi_max_vecs = VAR_0;
 VAR_2->bio.bi_sector = VAR_4 << VAR_2->c->sectors_per_block_bits;
 VAR_2->bio.bi_bdev = VAR_2->c->bdev;
 VAR_2->bio.bi_end_io = VAR_5;





 VAR_6 = VAR_2->data;
 VAR_7 = VAR_2->c->block_size;

 if (VAR_7 >= VAR_1)
  FUNC_0((unsigned long)VAR_6 & (VAR_1 - 1));
 else
  FUNC_0((unsigned long)VAR_6 & (VAR_7 - 1));

 do {
  if (!FUNC_1(&VAR_2->bio, FUNC_5(VAR_6),
      VAR_7 < VAR_1 ? VAR_7 : VAR_1,
      FUNC_6(VAR_6) & (VAR_1 - 1))) {
   FUNC_0(VAR_2->c->block_size <= VAR_1);
   FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
   return;
  }

  VAR_7 -= VAR_1;
  VAR_6 += VAR_1;
 } while (VAR_7 > 0);

 FUNC_3(VAR_3, &VAR_2->bio);
}
