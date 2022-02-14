
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int corrected; int failed; } ;
struct mtd_info {scalar_t__ size; int (* read ) (struct mtd_info*,scalar_t__,size_t,size_t*,int *) ;TYPE_1__ ecc_stats; } ;
struct mtd_concat {int num_subdev; struct mtd_info** subdev; } ;
typedef scalar_t__ loff_t ;


 struct mtd_concat* FUNC_0 (struct mtd_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mtd_info*,scalar_t__,size_t,size_t*,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct mtd_info *VAR_3, loff_t VAR_4, size_t VAR_5,
     size_t * VAR_6, u_char * VAR_7)
{
 struct mtd_concat *VAR_8 = FUNC_0(VAR_3);
 int VAR_9 = 0, VAR_10;
 int VAR_11;

 *VAR_6 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_8->num_subdev; VAR_11++) {
  struct mtd_info *VAR_12 = VAR_8->subdev[VAR_11];
  size_t VAR_13, VAR_14;

  if (VAR_4 >= VAR_12->size) {

   VAR_13 = 0;
   VAR_4 -= VAR_12->size;
   continue;
  }
  if (VAR_4 + VAR_5 > VAR_12->size)

   VAR_13 = VAR_12->size - VAR_4;
  else

   VAR_13 = VAR_5;

  VAR_10 = VAR_12->read(VAR_12, VAR_4, VAR_13, &VAR_14, VAR_7);


  if (FUNC_2(VAR_10)) {
   if (VAR_10 == -VAR_0) {
    VAR_3->ecc_stats.failed++;
    VAR_9 = VAR_10;
   } else if (VAR_10 == -VAR_2) {
    VAR_3->ecc_stats.corrected++;

    if (!VAR_9)
     VAR_9 = VAR_10;
   } else
    return VAR_10;
  }

  *VAR_6 += VAR_14;
  VAR_5 -= VAR_13;
  if (VAR_5 == 0)
   return VAR_9;

  VAR_7 += VAR_13;
  VAR_4 = 0;
 }
 return -VAR_1;
}
