
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct mtd_part {scalar_t__ offset; TYPE_2__* master; } ;
struct TYPE_3__ {int failed; int corrected; } ;
struct mtd_info {scalar_t__ size; TYPE_1__ ecc_stats; } ;
struct mtd_ecc_stats {scalar_t__ failed; scalar_t__ corrected; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int (* read ) (TYPE_2__*,scalar_t__,size_t,size_t*,int *) ;struct mtd_ecc_stats ecc_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,size_t,size_t*,int *) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
  size_t *VAR_5, u_char *VAR_6)
{
 struct mtd_part *VAR_7 = FUNC_0(VAR_2);
 struct mtd_ecc_stats VAR_8;
 int VAR_9;

 VAR_8 = VAR_7->master->ecc_stats;

 if (VAR_3 >= VAR_2->size)
  VAR_4 = 0;
 else if (VAR_3 + VAR_4 > VAR_2->size)
  VAR_4 = VAR_2->size - VAR_3;
 VAR_9 = VAR_7->master->read(VAR_7->master, VAR_3 + VAR_7->offset,
       VAR_4, VAR_5, VAR_6);
 if (FUNC_2(VAR_9)) {
  if (VAR_9 == -VAR_1)
   VAR_2->ecc_stats.corrected += VAR_7->master->ecc_stats.corrected - VAR_8.corrected;
  if (VAR_9 == -VAR_0)
   VAR_2->ecc_stats.failed += VAR_7->master->ecc_stats.failed - VAR_8.failed;
 }
 return VAR_9;
}
