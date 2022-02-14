
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pagevec {struct page** pages; } ;
struct page {int index; } ;
struct mpage_da_data {struct inode* inode; } ;
struct inode {int i_blkbits; TYPE_1__* i_sb; struct address_space* i_mapping; } ;
struct buffer_head {int b_size; int b_blocknr; scalar_t__ b_bdev; struct buffer_head* b_this_page; } ;
struct address_space {int dummy; } ;
typedef int sector_t ;
typedef int pgoff_t ;
struct TYPE_2__ {scalar_t__ s_bdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 struct buffer_head* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct pagevec*,int ) ;
 int FUNC_11 (struct pagevec*,struct address_space*,int,int ) ;
 int FUNC_12 (struct pagevec*) ;

__attribute__((used)) static void FUNC_13(struct mpage_da_data *VAR_2, sector_t VAR_3,
     struct buffer_head *VAR_4)
{
 struct inode *VAR_5 = VAR_2->inode;
 struct address_space *VAR_6 = VAR_5->i_mapping;
 int VAR_7 = VAR_4->b_size >> VAR_5->i_blkbits;
 sector_t VAR_8 = VAR_4->b_blocknr, VAR_9;
 struct buffer_head *VAR_10, *VAR_11;
 pgoff_t VAR_12, VAR_13;
 struct pagevec VAR_14;
 int VAR_15, VAR_16;

 VAR_12 = VAR_3 >> (VAR_1 - VAR_5->i_blkbits);
 VAR_13 = (VAR_3 + VAR_7 - 1) >> (VAR_1 - VAR_5->i_blkbits);
 VAR_9 = VAR_12 << (VAR_1 - VAR_5->i_blkbits);

 FUNC_10(&VAR_14, 0);

 while (VAR_12 <= VAR_13) {

  VAR_15 = FUNC_11(&VAR_14, VAR_6, VAR_12, VAR_0);
  if (VAR_15 == 0)
   break;
  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
   struct page *VAR_17 = VAR_14.pages[VAR_16];

   VAR_12 = VAR_17->index;
   if (VAR_12 > VAR_13)
    break;
   VAR_12++;

   FUNC_0(!FUNC_1(VAR_17));
   FUNC_0(FUNC_2(VAR_17));
   FUNC_0(!FUNC_9(VAR_17));

   VAR_11 = FUNC_8(VAR_17);
   VAR_10 = VAR_11;


   do {
    if (VAR_9 >= VAR_3)
     break;
    VAR_9++;
   } while ((VAR_11 = VAR_11->b_this_page) != VAR_10);

   do {
    if (VAR_9 >= VAR_3 + VAR_7)
     break;

    if (FUNC_3(VAR_11) ||
      FUNC_5(VAR_11)) {

     FUNC_0(VAR_11->b_bdev != VAR_5->i_sb->s_bdev);

     if (FUNC_3(VAR_11)) {
      FUNC_6(VAR_11);
      VAR_11->b_blocknr = VAR_8;
     } else {




      FUNC_7(VAR_11);
      FUNC_0(VAR_11->b_blocknr != VAR_8);
     }

    } else if (FUNC_4(VAR_11))
     FUNC_0(VAR_11->b_blocknr != VAR_8);

    VAR_9++;
    VAR_8++;
   } while ((VAR_11 = VAR_11->b_this_page) != VAR_10);
  }
  FUNC_12(&VAR_14);
 }
}
