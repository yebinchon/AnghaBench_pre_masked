
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_blocknr; int b_bdev; struct page* b_page; } ;
typedef int sector_t ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *,struct inode*,int ,int,struct buffer_head*,int) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_0, sector_t VAR_1,
         struct buffer_head *VAR_2, int VAR_3)
{
 handle_t *VAR_4 = FUNC_5();
 int VAR_5;


 FUNC_0(!VAR_2->b_page);

 VAR_5 = FUNC_4(VAR_4, VAR_0, VAR_1, 1, VAR_2, VAR_3);
 if (VAR_5 > 0) {
  if (FUNC_2(VAR_2)) {
   struct page *VAR_6 = VAR_2->b_page;





   if (FUNC_1(VAR_6)) {
    VAR_5 = FUNC_7(VAR_4, VAR_2);
    if (VAR_5 < 0)
     goto out;
    FUNC_9(VAR_2->b_bdev,
         VAR_2->b_blocknr);
    FUNC_3(VAR_2);
    FUNC_8(VAR_2);
    VAR_5 = FUNC_6(VAR_4, VAR_2);
    if (VAR_5 < 0)
     goto out;
   }
  }
  VAR_5 = 0;
 }
out:
 return VAR_5;
}
