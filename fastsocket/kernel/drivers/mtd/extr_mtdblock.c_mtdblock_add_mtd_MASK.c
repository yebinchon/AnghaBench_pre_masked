
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int size; int flags; int index; } ;
struct mtd_blktrans_ops {int dummy; } ;
struct mtd_blktrans_dev {int size; int readonly; struct mtd_blktrans_ops* tr; int devnum; struct mtd_info* mtd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mtd_blktrans_dev*) ;
 struct mtd_blktrans_dev* FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct mtd_blktrans_ops *VAR_2, struct mtd_info *VAR_3)
{
 struct mtd_blktrans_dev *VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);

 if (!VAR_4)
  return;

 VAR_4->mtd = VAR_3;
 VAR_4->devnum = VAR_3->index;

 VAR_4->size = VAR_3->size >> 9;
 VAR_4->tr = VAR_2;

 if (!(VAR_3->flags & VAR_1))
  VAR_4->readonly = 1;

 FUNC_0(VAR_4);
}
