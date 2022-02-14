
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flakey_c {unsigned int corrupt_bio_byte; char corrupt_bio_value; } ;
struct bio {scalar_t__ bi_sector; int bi_rw; } ;


 int FUNC_0 (char*,struct bio*,char,int,char,int ,unsigned long long,unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_1 (struct bio*) ;
 char* FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;

__attribute__((used)) static void FUNC_4(struct bio *VAR_1, struct flakey_c *VAR_2)
{
 unsigned VAR_3 = FUNC_1(VAR_1);
 char *VAR_4 = FUNC_2(VAR_1);




 if (VAR_4 && VAR_3 >= VAR_2->corrupt_bio_byte) {
  VAR_4[VAR_2->corrupt_bio_byte - 1] = VAR_2->corrupt_bio_value;

  FUNC_0("Corrupting data bio=%p by writing %u to byte %u "
   "(rw=%c bi_rw=%lu bi_sector=%llu cur_bytes=%u)\n",
   VAR_1, VAR_2->corrupt_bio_value, VAR_2->corrupt_bio_byte,
   (FUNC_3(VAR_1) == VAR_0) ? 'w' : 'r',
   VAR_1->bi_rw, (unsigned long long)VAR_1->bi_sector, VAR_3);
 }
}
