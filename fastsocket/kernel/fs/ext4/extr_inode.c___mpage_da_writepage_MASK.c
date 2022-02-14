
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {scalar_t__ index; } ;
struct mpage_da_data {scalar_t__ next_page; scalar_t__ first_page; scalar_t__ b_size; int b_state; scalar_t__ io_done; scalar_t__ b_blocknr; struct inode* inode; } ;
struct inode {int i_blkbits; } ;
struct buffer_head {int b_state; int b_size; struct buffer_head* b_this_page; } ;
typedef int sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (int *,struct buffer_head*) ;
 int FUNC_5 (struct mpage_da_data*,int,int ,int) ;
 int FUNC_6 (struct mpage_da_data*) ;
 struct buffer_head* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct writeback_control*,struct page*) ;
 int FUNC_10 (struct page*) ;

__attribute__((used)) static int FUNC_11(struct page *VAR_6,
    struct writeback_control *VAR_7, void *VAR_8)
{
 struct mpage_da_data *VAR_9 = VAR_8;
 struct inode *VAR_10 = VAR_9->inode;
 struct buffer_head *VAR_11, *VAR_12;
 sector_t VAR_13;




 if (VAR_9->next_page != VAR_6->index) {




  if (VAR_9->next_page != VAR_9->first_page) {
   FUNC_6(VAR_9);



   FUNC_9(VAR_7, VAR_6);
   FUNC_10(VAR_6);
   return VAR_3;
  }




  VAR_9->first_page = VAR_6->index;




  VAR_9->b_size = 0;
  VAR_9->b_state = 0;
  VAR_9->b_blocknr = 0;
 }

 VAR_9->next_page = VAR_6->index + 1;
 VAR_13 = (sector_t) VAR_6->index <<
    (VAR_4 - VAR_10->i_blkbits);

 if (!FUNC_8(VAR_6)) {
  FUNC_5(VAR_9, VAR_13, VAR_5,
           (1 << VAR_0) | (1 << VAR_2));
  if (VAR_9->io_done)
   return VAR_3;
 } else {



  VAR_12 = FUNC_7(VAR_6);
  VAR_11 = VAR_12;
  do {
   FUNC_0(FUNC_2(VAR_11));






   if (FUNC_4(((void*)0), VAR_11)) {
    FUNC_5(VAR_9, VAR_13,
             VAR_11->b_size,
             VAR_11->b_state);
    if (VAR_9->io_done)
     return VAR_3;
   } else if (FUNC_1(VAR_11) && (FUNC_3(VAR_11))) {
    if (VAR_9->b_size == 0)
     VAR_9->b_state = VAR_11->b_state & VAR_1;
   }
   VAR_13++;
  } while ((VAR_11 = VAR_11->b_this_page) != VAR_12);
 }

 return 0;
}
