
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtdblk_dev {TYPE_1__* mtd; int cache_mutex; } ;
struct mtd_blktrans_dev {size_t devnum; } ;
struct TYPE_2__ {int (* sync ) (TYPE_1__*) ;} ;


 struct mtdblk_dev** VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct mtdblk_dev*) ;

__attribute__((used)) static int FUNC_4(struct mtd_blktrans_dev *VAR_1)
{
 struct mtdblk_dev *VAR_2 = VAR_0[VAR_1->devnum];

 FUNC_0(&VAR_2->cache_mutex);
 FUNC_3(VAR_2);
 FUNC_1(&VAR_2->cache_mutex);

 if (VAR_2->mtd->sync)
  VAR_2->mtd->sync(VAR_2->mtd);
 return 0;
}
