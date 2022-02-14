
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_set {int dummy; } ;
struct bio {unsigned short bi_idx; unsigned short bi_vcnt; scalar_t__ bi_size; int bi_flags; int bi_sector; int bi_destructor; int bi_max_vecs; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,struct bio*) ;
 struct bio* FUNC_1 (int ,int ,struct bio_set*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*,struct bio*,int ,struct bio_set*) ;
 int FUNC_4 (struct bio*,int ,unsigned int) ;
 int FUNC_5 (struct bio*,unsigned short,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (unsigned int) ;

__attribute__((used)) static struct bio *FUNC_7(struct bio *VAR_3, sector_t VAR_4,
        unsigned short VAR_5, unsigned short VAR_6,
        unsigned int VAR_7, struct bio_set *VAR_8)
{
 struct bio *VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_3->bi_max_vecs, VAR_8);
 FUNC_0(VAR_9, VAR_3);
 VAR_9->bi_destructor = VAR_2;
 VAR_9->bi_sector = VAR_4;
 VAR_9->bi_idx = VAR_5;
 VAR_9->bi_vcnt = VAR_5 + VAR_6;
 VAR_9->bi_size = FUNC_6(VAR_7);
 VAR_9->bi_flags &= ~(1 << VAR_0);

 if (FUNC_2(VAR_3)) {
  FUNC_3(VAR_9, VAR_3, VAR_1, VAR_8);

  if (VAR_5 != VAR_3->bi_idx || VAR_9->bi_size < VAR_3->bi_size)
   FUNC_4(VAR_9,
        FUNC_5(VAR_3, VAR_5, 0), VAR_7);
 }

 return VAR_9;
}
