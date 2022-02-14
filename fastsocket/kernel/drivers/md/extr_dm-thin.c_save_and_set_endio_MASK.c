
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int * bi_end_io; } ;
typedef int bio_end_io_t ;



__attribute__((used)) static void FUNC_0(struct bio *VAR_0, bio_end_io_t **VAR_1,
          bio_end_io_t *VAR_2)
{
 *VAR_1 = VAR_0->bi_end_io;
 VAR_0->bi_end_io = VAR_2;
}
