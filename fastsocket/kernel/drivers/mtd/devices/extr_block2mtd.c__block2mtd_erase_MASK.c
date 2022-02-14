
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u_long ;
struct page {int dummy; } ;
struct block2mtd_dev {TYPE_2__* blkdev; } ;
struct address_space {int dummy; } ;
typedef size_t loff_t ;
struct TYPE_4__ {TYPE_1__* bd_inode; } ;
struct TYPE_3__ {struct address_space* i_mapping; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (unsigned long*,int,int) ;
 unsigned long* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 struct page* FUNC_6 (struct address_space*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

__attribute__((used)) static int FUNC_9(struct block2mtd_dev *VAR_3, loff_t VAR_4, size_t VAR_5)
{
 struct address_space *VAR_6 = VAR_3->blkdev->bd_inode->i_mapping;
 struct page *VAR_7;
 int VAR_8 = VAR_4 >> VAR_1;
 int VAR_9 = VAR_5 >> VAR_1;
 u_long *VAR_10;
 u_long *VAR_11;

 while (VAR_9) {
  VAR_7 = FUNC_6(VAR_6, VAR_8);
  if (!VAR_7)
   return -VAR_0;
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);

  VAR_11 = FUNC_4(VAR_7) + VAR_2;
  for (VAR_10=FUNC_4(VAR_7); VAR_10<VAR_11; VAR_10++)
   if (*VAR_10 != -1UL) {
    FUNC_2(VAR_7);
    FUNC_3(FUNC_4(VAR_7), 0xff, VAR_2);
    FUNC_7(VAR_7);
    FUNC_8(VAR_7);
    break;
   }

  FUNC_5(VAR_7);
  VAR_9--;
  VAR_8++;
 }
 return 0;
}
