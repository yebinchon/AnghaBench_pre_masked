
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdblk_dev {int count; int * cache_data; struct mtd_info* mtd; scalar_t__ cache_size; int cache_state; int cache_mutex; } ;
struct mtd_info {int flags; scalar_t__ erasesize; } ;
struct mtd_blktrans_dev {int devnum; struct mtd_info* mtd; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtdblk_dev* FUNC_1 (int,int ) ;
 struct mtdblk_dev** VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mtd_blktrans_dev *VAR_7)
{
 struct mtdblk_dev *VAR_8;
 struct mtd_info *VAR_9 = VAR_7->mtd;
 int VAR_10 = VAR_7->devnum;

 FUNC_0(VAR_2,"mtdblock_open\n");

 FUNC_3(&VAR_6);
 if (VAR_5[VAR_10]) {
  VAR_5[VAR_10]->count++;
  FUNC_4(&VAR_6);
  return 0;
 }


 VAR_8 = FUNC_1(sizeof(struct mtdblk_dev), VAR_1);
 if (!VAR_8) {
  FUNC_4(&VAR_6);
  return -VAR_0;
 }

 VAR_8->count = 1;
 VAR_8->mtd = VAR_9;

 FUNC_2(&VAR_8->cache_mutex);
 VAR_8->cache_state = VAR_4;
 if ( !(VAR_8->mtd->flags & VAR_3) && VAR_8->mtd->erasesize) {
  VAR_8->cache_size = VAR_8->mtd->erasesize;
  VAR_8->cache_data = ((void*)0);
 }

 VAR_5[VAR_10] = VAR_8;
 FUNC_4(&VAR_6);

 FUNC_0(VAR_2, "ok\n");

 return 0;
}
