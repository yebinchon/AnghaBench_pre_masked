
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {int i_blkbits; struct address_space* i_mapping; } ;
struct buffer_head {int b_blocknr; int b_size; int b_state; struct buffer_head* b_this_page; } ;
struct block_device {struct inode* bd_inode; } ;
struct address_space {int private_lock; } ;
typedef int sector_t ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 struct page* FUNC_1 (struct address_space*,int) ;
 int FUNC_2 (struct buffer_head*) ;
 struct buffer_head* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct buffer_head *
FUNC_9(struct block_device *VAR_1, sector_t VAR_2)
{
 struct inode *VAR_3 = VAR_1->bd_inode;
 struct address_space *VAR_4 = VAR_3->i_mapping;
 struct buffer_head *VAR_5 = ((void*)0);
 pgoff_t VAR_6;
 struct buffer_head *VAR_7;
 struct buffer_head *VAR_8;
 struct page *VAR_9;
 int VAR_10 = 1;

 VAR_6 = VAR_2 >> (VAR_0 - VAR_3->i_blkbits);
 VAR_9 = FUNC_1(VAR_4, VAR_6);
 if (!VAR_9)
  goto out;

 FUNC_7(&VAR_4->private_lock);
 if (!FUNC_5(VAR_9))
  goto out_unlock;
 VAR_8 = FUNC_3(VAR_9);
 VAR_7 = VAR_8;
 do {
  if (!FUNC_0(VAR_7))
   VAR_10 = 0;
  else if (VAR_7->b_blocknr == VAR_2) {
   VAR_5 = VAR_7;
   FUNC_2(VAR_7);
   goto out_unlock;
  }
  VAR_7 = VAR_7->b_this_page;
 } while (VAR_7 != VAR_8);






 if (VAR_10) {
  FUNC_6("__find_get_block_slow() failed. "
   "block=%llu, b_blocknr=%llu\n",
   (unsigned long long)VAR_2,
   (unsigned long long)VAR_7->b_blocknr);
  FUNC_6("b_state=0x%08lx, b_size=%zu\n",
   VAR_7->b_state, VAR_7->b_size);
  FUNC_6("device blocksize: %d\n", 1 << VAR_3->i_blkbits);
 }
out_unlock:
 FUNC_8(&VAR_4->private_lock);
 FUNC_4(VAR_9);
out:
 return VAR_5;
}
