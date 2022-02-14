
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
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *,struct inode*,int ,int,struct buffer_head*,int ) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,struct buffer_head*) ;
 int FUNC_7 (int *,struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_1, sector_t VAR_2,
         struct buffer_head *VAR_3, int VAR_4)
{
 handle_t *VAR_5 = FUNC_5();
 int VAR_6;


 FUNC_0(!VAR_3->b_page);

 VAR_6 = FUNC_4(VAR_5, VAR_1, VAR_2, 1, VAR_3,
         VAR_4 ? VAR_0 : 0);
 if (VAR_6 > 0) {
  if (FUNC_2(VAR_3)) {
   struct page *VAR_7 = VAR_3->b_page;





   if (FUNC_1(VAR_7)) {
    VAR_6 = FUNC_6(VAR_5, VAR_3);
    if (VAR_6 < 0)
     return VAR_6;
    FUNC_9(VAR_3->b_bdev,
         VAR_3->b_blocknr);
    FUNC_3(VAR_3);
    FUNC_8(VAR_3);
    VAR_6 = FUNC_7(VAR_5, VAR_3);
    if (VAR_6 < 0)
     return VAR_6;
   }
  }
  VAR_6 = 0;
 }
 return VAR_6;
}
