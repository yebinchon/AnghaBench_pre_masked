
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtdblk_dev {int cache_data; TYPE_1__* mtd; int count; int cache_mutex; } ;
struct mtd_blktrans_dev {int devnum; } ;
struct TYPE_2__ {int (* sync ) (TYPE_1__*) ;} ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct mtdblk_dev*) ;
 struct mtdblk_dev** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mtdblk_dev*) ;

__attribute__((used)) static int FUNC_7(struct mtd_blktrans_dev *VAR_3)
{
 int VAR_4 = VAR_3->devnum;
 struct mtdblk_dev *VAR_5 = VAR_1[VAR_4];

    FUNC_0(VAR_0, "mtdblock_release\n");

 FUNC_2(&VAR_2);

 FUNC_2(&VAR_5->cache_mutex);
 FUNC_6(VAR_5);
 FUNC_3(&VAR_5->cache_mutex);

 if (!--VAR_5->count) {

  VAR_1[VAR_4] = ((void*)0);
  if (VAR_5->mtd->sync)
   VAR_5->mtd->sync(VAR_5->mtd);
  FUNC_5(VAR_5->cache_data);
  FUNC_1(VAR_5);
 }

 FUNC_3(&VAR_2);

 FUNC_0(VAR_0, "ok\n");

 return 0;
}
