
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_oob_ops {scalar_t__ mode; int oobbuf; int retlen; int len; scalar_t__ ooboffs; } ;
struct mtd_info {struct DiskOnChip* priv; } ;
struct DiskOnChip {int lock; } ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mtd_info*,scalar_t__,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_1, loff_t VAR_2,
    struct mtd_oob_ops *VAR_3)
{
 struct DiskOnChip *VAR_4 = VAR_1->priv;
 int VAR_5;

 FUNC_0(VAR_3->mode != VAR_0);

 FUNC_2(&VAR_4->lock);
 VAR_5 = FUNC_1(VAR_1, VAR_2 + VAR_3->ooboffs, VAR_3->len,
       &VAR_3->retlen, VAR_3->oobbuf);

 FUNC_3(&VAR_4->lock);
 return VAR_5;
}
