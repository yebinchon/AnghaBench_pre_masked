
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdblk_dev {int dummy; } ;
struct mtd_blktrans_dev {size_t devnum; } ;


 int FUNC_0 (struct mtdblk_dev*,unsigned long,int,char*) ;
 struct mtdblk_dev** VAR_0 ;

__attribute__((used)) static int FUNC_1(struct mtd_blktrans_dev *VAR_1,
         unsigned long VAR_2, char *VAR_3)
{
 struct mtdblk_dev *VAR_4 = VAR_0[VAR_1->devnum];
 return FUNC_0(VAR_4, VAR_2<<9, 512, VAR_3);
}
