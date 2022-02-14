
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct page {int dummy; } ;
struct mtd_info {int size; struct block2mtd_dev* priv; } ;
struct block2mtd_dev {TYPE_2__* blkdev; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct mtd_info *VAR_4, loff_t VAR_5, size_t VAR_6,
  size_t *VAR_7, u_char *VAR_8)
{
 struct block2mtd_dev *VAR_9 = VAR_4->priv;
 struct page *VAR_10;
 int VAR_11 = VAR_5 >> VAR_2;
 int VAR_12 = VAR_5 & (VAR_3-1);
 int VAR_13;

 if (VAR_5 > VAR_4->size)
  return -VAR_0;
 if (VAR_5 + VAR_6 > VAR_4->size)
  VAR_6 = VAR_4->size - VAR_5;

 if (VAR_7)
  *VAR_7 = 0;

 while (VAR_6) {
  if ((VAR_12 + VAR_6) > VAR_3)
   VAR_13 = VAR_3 - VAR_12;
  else
   VAR_13 = VAR_6;
  VAR_6 = VAR_6 - VAR_13;

  VAR_10 = FUNC_5(VAR_9->blkdev->bd_inode->i_mapping, VAR_11);
  if (!VAR_10)
   return -VAR_1;
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);

  FUNC_2(VAR_8, FUNC_3(VAR_10) + VAR_12, VAR_13);
  FUNC_4(VAR_10);

  if (VAR_7)
   *VAR_7 += VAR_13;
  VAR_8 += VAR_13;
  VAR_12 = 0;
  VAR_11++;
 }
 return 0;
}
