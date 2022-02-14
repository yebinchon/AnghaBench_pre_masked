
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtdblk_dev {scalar_t__ cache_data; TYPE_1__* mtd; scalar_t__ cache_size; } ;
struct mtd_blktrans_dev {size_t devnum; } ;
struct TYPE_2__ {int erasesize; } ;


 int VAR_0 ;
 int FUNC_0 (struct mtdblk_dev*,unsigned long,int,char*) ;
 struct mtdblk_dev** VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mtd_blktrans_dev *VAR_2,
         unsigned long VAR_3, char *VAR_4)
{
 struct mtdblk_dev *VAR_5 = VAR_1[VAR_2->devnum];
 if (FUNC_1(!VAR_5->cache_data && VAR_5->cache_size)) {
  VAR_5->cache_data = FUNC_2(VAR_5->mtd->erasesize);
  if (!VAR_5->cache_data)
   return -VAR_0;




 }
 return FUNC_0(VAR_5, VAR_3<<9, 512, VAR_4);
}
