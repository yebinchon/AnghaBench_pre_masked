
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {TYPE_1__* i_mapping; } ;
struct buffer_head {int b_size; } ;
struct block_device {struct inode* bd_inode; } ;
typedef scalar_t__ sector_t ;
typedef int pgoff_t ;
struct TYPE_3__ {int private_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct buffer_head* FUNC_2 (struct page*,int,int ) ;
 struct page* FUNC_3 (TYPE_1__*,int,int) ;
 scalar_t__ FUNC_4 (struct page*,struct block_device*,int,int) ;
 int FUNC_5 (struct page*,struct buffer_head*) ;
 int FUNC_6 (TYPE_1__*) ;
 struct buffer_head* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int
FUNC_14(struct block_device *VAR_3, sector_t VAR_4,
  pgoff_t VAR_5, int VAR_6, int VAR_7)
{
 struct inode *VAR_8 = VAR_3->bd_inode;
 struct page *VAR_9;
 struct buffer_head *VAR_10;
 sector_t VAR_11;
 int VAR_12 = 0;

 VAR_9 = FUNC_3(VAR_8->i_mapping, VAR_5,
  (FUNC_6(VAR_8->i_mapping) & ~VAR_1)|VAR_2);
 if (!VAR_9)
  return VAR_12;

 FUNC_0(!FUNC_1(VAR_9));

 if (FUNC_9(VAR_9)) {
  VAR_10 = FUNC_7(VAR_9);
  if (VAR_10->b_size == VAR_6) {
   VAR_11 = FUNC_4(VAR_9, VAR_3,
      VAR_5 << VAR_7, VAR_6);
   goto done;
  }
  if (!FUNC_12(VAR_9))
   goto failed;
 }




 VAR_10 = FUNC_2(VAR_9, VAR_6, 0);
 if (!VAR_10)
  goto failed;






 FUNC_10(&VAR_8->i_mapping->private_lock);
 FUNC_5(VAR_9, VAR_10);
 VAR_11 = FUNC_4(VAR_9, VAR_3, VAR_5 << VAR_7, VAR_6);
 FUNC_11(&VAR_8->i_mapping->private_lock);
done:
 VAR_12 = (VAR_4 < VAR_11) ? 1 : -VAR_0;
failed:
 FUNC_13(VAR_9);
 FUNC_8(VAR_9);
 return VAR_12;
}
