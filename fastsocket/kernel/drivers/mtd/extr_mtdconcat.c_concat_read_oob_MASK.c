
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_oob_ops {scalar_t__ retlen; scalar_t__ oobretlen; scalar_t__ len; scalar_t__ datbuf; scalar_t__ oobbuf; scalar_t__ ooblen; } ;
struct TYPE_2__ {int corrected; int failed; } ;
struct mtd_info {scalar_t__ size; int (* read_oob ) (struct mtd_info*,scalar_t__,struct mtd_oob_ops*) ;TYPE_1__ ecc_stats; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mtd_info*,scalar_t__,struct mtd_oob_ops*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct mtd_info *VAR_3, loff_t VAR_4, struct mtd_oob_ops *VAR_5)
{
 struct mtd_concat *VAR_6 = FUNC_0(VAR_3);
 struct mtd_oob_ops VAR_7 = *VAR_5;
 int VAR_8, VAR_9, VAR_10 = 0;

 VAR_5->retlen = VAR_5->oobretlen = 0;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_subdev; VAR_8++) {
  struct mtd_info *VAR_11 = VAR_6->subdev[VAR_8];

  if (VAR_4 >= VAR_11->size) {
   VAR_4 -= VAR_11->size;
   continue;
  }


  if (VAR_4 + VAR_7.len > VAR_11->size)
   VAR_7.len = VAR_11->size - VAR_4;

  VAR_9 = VAR_11->read_oob(VAR_11, VAR_4, &VAR_7);
  VAR_5->retlen += VAR_7.retlen;
  VAR_5->oobretlen += VAR_7.oobretlen;


  if (FUNC_2(VAR_9)) {
   if (VAR_9 == -VAR_0) {
    VAR_3->ecc_stats.failed++;
    VAR_10 = VAR_9;
   } else if (VAR_9 == -VAR_2) {
    VAR_3->ecc_stats.corrected++;

    if (!VAR_10)
     VAR_10 = VAR_9;
   } else
    return VAR_9;
  }

  if (VAR_7.datbuf) {
   VAR_7.len = VAR_5->len - VAR_5->retlen;
   if (!VAR_7.len)
    return VAR_10;
   VAR_7.datbuf += VAR_7.retlen;
  }
  if (VAR_7.oobbuf) {
   VAR_7.ooblen = VAR_5->ooblen - VAR_5->oobretlen;
   if (!VAR_7.ooblen)
    return VAR_10;
   VAR_7.oobbuf += VAR_5->oobretlen;
  }

  VAR_4 = 0;
 }
 return -VAR_1;
}
